
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ host_failed; int ehandler; int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int ,struct Scsi_Host*,char*) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct Scsi_Host *VAR_1)
{
 FUNC_1(VAR_1->host_lock);

 if (FUNC_2(VAR_1) == VAR_1->host_failed) {
  FUNC_4(VAR_1);
  FUNC_5(VAR_1->ehandler);
  FUNC_0(5, FUNC_3(VAR_0, VAR_1,
   "Waking error handler thread\n"));
 }
}
