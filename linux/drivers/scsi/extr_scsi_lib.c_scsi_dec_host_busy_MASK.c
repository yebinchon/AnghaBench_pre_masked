
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int host_lock; scalar_t__ host_eh_scheduled; scalar_t__ host_failed; int host_busy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct Scsi_Host *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1();
 FUNC_0(&VAR_0->host_busy);
 if (FUNC_7(FUNC_4(VAR_0))) {
  FUNC_5(VAR_0->host_lock, VAR_1);
  if (VAR_0->host_failed || VAR_0->host_eh_scheduled)
   FUNC_3(VAR_0);
  FUNC_6(VAR_0->host_lock, VAR_1);
 }
 FUNC_2();
}
