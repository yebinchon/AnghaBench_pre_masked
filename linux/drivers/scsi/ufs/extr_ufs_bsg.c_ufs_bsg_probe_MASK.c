
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int release; int parent; } ;
struct ufs_hba {struct request_queue* bsg_queue; struct Scsi_Host* host; struct device bsg_dev; } ;
struct request_queue {int dummy; } ;
struct Scsi_Host {int host_no; struct device shost_gendev; } ;


 scalar_t__ FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 struct request_queue* FUNC_2 (struct device*,int ,int ,int *,int ) ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_10(struct ufs_hba *VAR_2)
{
 struct device *VAR_3 = &VAR_2->bsg_dev;
 struct Scsi_Host *VAR_4 = VAR_2->host;
 struct device *VAR_5 = &VAR_4->shost_gendev;
 struct request_queue *VAR_6;
 int VAR_7;

 FUNC_7(VAR_3);

 VAR_3->parent = FUNC_8(VAR_5);
 VAR_3->release = VAR_0;

 FUNC_5(VAR_3, "ufs-bsg");

 VAR_7 = FUNC_6(VAR_3);
 if (VAR_7)
  goto out;

 VAR_6 = FUNC_2(VAR_3, FUNC_4(VAR_3), VAR_1, ((void*)0), 0);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  goto out;
 }

 VAR_2->bsg_queue = VAR_6;

 return 0;

out:
 FUNC_3(VAR_3, "fail to initialize a bsg dev %d\n", VAR_4->host_no);
 FUNC_9(VAR_3);
 return VAR_7;
}
