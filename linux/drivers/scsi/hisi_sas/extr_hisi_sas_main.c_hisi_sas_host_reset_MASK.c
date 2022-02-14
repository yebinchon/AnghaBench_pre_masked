
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_hba {int rst_work; int wq; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct hisi_hba* FUNC_1 (struct Scsi_Host*) ;

int FUNC_2(struct Scsi_Host *VAR_2, int VAR_3)
{
 struct hisi_hba *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3 != VAR_1)
  return -VAR_0;

 FUNC_0(VAR_4->wq, &VAR_4->rst_work);

 return 0;
}
