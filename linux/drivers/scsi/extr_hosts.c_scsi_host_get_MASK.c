
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ shost_state; int shost_gendev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

struct Scsi_Host *FUNC_1(struct Scsi_Host *VAR_1)
{
 if ((VAR_1->shost_state == VAR_0) ||
  !FUNC_0(&VAR_1->shost_gendev))
  return ((void*)0);
 return VAR_1;
}
