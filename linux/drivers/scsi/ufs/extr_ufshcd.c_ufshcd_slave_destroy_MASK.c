
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hba {TYPE_1__* host; int * sdev_ufs_device; } ;
struct scsi_device {int lun; int host; } ;
struct TYPE_2__ {int host_lock; } ;


 scalar_t__ VAR_0 ;
 struct ufs_hba* FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct scsi_device *VAR_1)
{
 struct ufs_hba *VAR_2;

 VAR_2 = FUNC_0(VAR_1->host);

 if (FUNC_3(VAR_1->lun) == VAR_0) {
  unsigned long VAR_3;

  FUNC_1(VAR_2->host->host_lock, VAR_3);
  VAR_2->sdev_ufs_device = ((void*)0);
  FUNC_2(VAR_2->host->host_lock, VAR_3);
 }
}
