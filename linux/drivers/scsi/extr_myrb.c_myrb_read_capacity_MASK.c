
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct myrb_ldev_info {scalar_t__ size; } ;
struct myrb_hba {scalar_t__ ldev_block_size; } ;
struct TYPE_2__ {int sdev_gendev; } ;


 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned char*) ;
 int FUNC_2 (struct scsi_cmnd*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_3(struct myrb_hba *VAR_0, struct scsi_cmnd *VAR_1,
  struct myrb_ldev_info *VAR_2)
{
 unsigned char VAR_3[8];

 FUNC_0(&VAR_1->device->sdev_gendev,
  "Capacity %u, blocksize %u\n",
  VAR_2->size, VAR_0->ldev_block_size);
 FUNC_1(VAR_2->size - 1, &VAR_3[0]);
 FUNC_1(VAR_0->ldev_block_size, &VAR_3[4]);
 FUNC_2(VAR_1, VAR_3, 8);
}
