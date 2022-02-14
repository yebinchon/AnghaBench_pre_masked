
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_hba {int flags; int sem; TYPE_1__* hw; int debugfs_work; int wq; scalar_t__ debugfs_itct; struct Scsi_Host* shost; struct device* dev; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int (* soft_reset ) (struct hisi_hba*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct hisi_hba*) ;
 int FUNC_4 (struct hisi_hba*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (struct hisi_hba*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct hisi_hba *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 struct Scsi_Host *VAR_5 = VAR_3->shost;
 int VAR_6;

 if (VAR_2 && VAR_3->debugfs_itct)
  FUNC_5(VAR_3->wq, &VAR_3->debugfs_work);

 if (!VAR_3->hw->soft_reset)
  return -1;

 if (FUNC_8(VAR_1, &VAR_3->flags))
  return -1;

 FUNC_1(VAR_4, "controller resetting...\n");
 FUNC_4(VAR_3);

 VAR_6 = VAR_3->hw->soft_reset(VAR_3);
 if (VAR_6) {
  FUNC_2(VAR_4, "controller reset failed (%d)\n", VAR_6);
  FUNC_0(VAR_0, &VAR_3->flags);
  FUNC_9(&VAR_3->sem);
  FUNC_6(VAR_5);
  FUNC_0(VAR_1, &VAR_3->flags);
  return VAR_6;
 }

 FUNC_3(VAR_3);
 FUNC_1(VAR_4, "controller reset complete\n");

 return 0;
}
