
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct megasas_instance {int adprecovery; scalar_t__ peerIsPresent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct megasas_instance* FUNC_1 (struct megasas_instance*) ;

int FUNC_2(struct megasas_instance *VAR_3,
 struct scsi_cmnd *VAR_4)
{
 struct megasas_instance *VAR_5 = ((void*)0);
 int VAR_6 = (VAR_1 << 16);

 if (VAR_3->peerIsPresent) {
  VAR_5 = FUNC_1(VAR_3);
  if ((VAR_5) &&
   (FUNC_0(&VAR_5->adprecovery) ==
   VAR_2))
   VAR_6 = (VAR_0 << 16);
 }
 return VAR_6;
}
