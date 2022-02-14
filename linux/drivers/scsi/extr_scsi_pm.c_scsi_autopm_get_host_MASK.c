
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int shost_gendev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct Scsi_Host *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->shost_gendev);
 if (VAR_2 < 0 && VAR_2 !=-VAR_0)
  FUNC_1(&VAR_1->shost_gendev);
 else
  VAR_2 = 0;
 return VAR_2;
}
