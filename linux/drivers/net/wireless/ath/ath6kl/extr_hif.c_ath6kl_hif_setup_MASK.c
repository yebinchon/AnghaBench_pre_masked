
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath6kl_device {TYPE_3__* ar; TYPE_1__* htc_cnxt; int lock; } ;
struct TYPE_5__ {int block_size; int htc_addr; } ;
struct TYPE_6__ {TYPE_2__ mbox_info; } ;
struct TYPE_4__ {int block_sz; int block_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (struct ath6kl_device*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ath6kl_device *VAR_2)
{
 int VAR_3 = 0;

 FUNC_3(&VAR_2->lock);






 VAR_2->htc_cnxt->block_sz = VAR_2->ar->mbox_info.block_size;


 if ((VAR_2->htc_cnxt->block_sz & (VAR_2->htc_cnxt->block_sz - 1)) != 0) {
  FUNC_0(1);
  VAR_3 = -VAR_1;
  goto fail_setup;
 }


 VAR_2->htc_cnxt->block_mask = VAR_2->htc_cnxt->block_sz - 1;

 FUNC_1(VAR_0, "hif block size %d mbox addr 0x%x\n",
     VAR_2->htc_cnxt->block_sz, VAR_2->ar->mbox_info.htc_addr);

 VAR_3 = FUNC_2(VAR_2);

fail_setup:
 return VAR_3;
}
