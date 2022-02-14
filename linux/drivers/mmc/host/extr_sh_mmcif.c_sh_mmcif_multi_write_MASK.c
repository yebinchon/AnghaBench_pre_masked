
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mmcif_host {int blocksize; int pio_ptr; scalar_t__ sg_blkidx; scalar_t__ sg_idx; int wait_for; int addr; } ;
struct mmc_request {struct mmc_data* data; } ;
struct mmc_data {TYPE_1__* sg; int sg_len; } ;
struct TYPE_2__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct sh_mmcif_host*,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sh_mmcif_host *VAR_5,
    struct mmc_request *VAR_6)
{
 struct mmc_data *VAR_7 = VAR_6->data;

 if (!VAR_7->sg_len || !VAR_7->sg->length)
  return;

 VAR_5->blocksize = FUNC_2(VAR_5->addr, VAR_2) &
  VAR_0;

 VAR_5->wait_for = VAR_4;
 VAR_5->sg_idx = 0;
 VAR_5->sg_blkidx = 0;
 VAR_5->pio_ptr = FUNC_0(VAR_7->sg);

 FUNC_1(VAR_5, VAR_3, VAR_1);
}
