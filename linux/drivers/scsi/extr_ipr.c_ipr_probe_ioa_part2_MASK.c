
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {int probe_done; TYPE_1__* host; scalar_t__ needs_hard_reset; TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipr_ioa_cfg*,int ,int ) ;
 int FUNC_1 (int *,char*,struct ipr_ioa_cfg*) ;
 int FUNC_2 (struct ipr_ioa_cfg*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ipr_ioa_cfg *VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6 = 0;

 VAR_0;
 FUNC_3(VAR_4->host->host_lock, VAR_6);
 FUNC_1(&VAR_4->pdev->dev, "ioa_cfg adx: 0x%p\n", VAR_4);
 VAR_4->probe_done = 1;
 if (VAR_4->needs_hard_reset) {
  VAR_4->needs_hard_reset = 0;
  FUNC_2(VAR_4, VAR_1);
 } else
  FUNC_0(VAR_4, VAR_3,
     VAR_1);
 FUNC_4(VAR_4->host->host_lock, VAR_6);

 VAR_2;
 return VAR_5;
}
