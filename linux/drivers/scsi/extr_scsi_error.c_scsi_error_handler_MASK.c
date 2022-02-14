
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {scalar_t__ host_failed; scalar_t__ host_eh_scheduled; int * ehandler; int host_no; int eh_noresume; TYPE_1__* transportt; } ;
struct TYPE_2__ {int (* eh_strategy_handler ) (struct Scsi_Host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;
 scalar_t__ FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,struct Scsi_Host*,char*,int ,...) ;
 int FUNC_11 (struct Scsi_Host*) ;

int FUNC_12(void *VAR_4)
{
 struct Scsi_Host *VAR_5 = VAR_4;







 while (1) {






  FUNC_9(VAR_2);
  if (FUNC_2())
   break;

  if ((VAR_5->host_failed == 0 && VAR_5->host_eh_scheduled == 0) ||
      VAR_5->host_failed != FUNC_6(VAR_5)) {
   FUNC_0(1,
    FUNC_10(VAR_1, VAR_5,
          "scsi_eh_%d: sleeping\n",
          VAR_5->host_no));
   FUNC_3();
   continue;
  }

  FUNC_1(VAR_3);
  FUNC_0(1,
   FUNC_10(VAR_1, VAR_5,
         "scsi_eh_%d: waking up %d/%d/%d\n",
         VAR_5->host_no, VAR_5->host_eh_scheduled,
         VAR_5->host_failed,
         FUNC_6(VAR_5)));






  if (!VAR_5->eh_noresume && FUNC_4(VAR_5) != 0) {
   FUNC_0(1,
    FUNC_10(VAR_0, VAR_5,
          "scsi_eh_%d: unable to autoresume\n",
          VAR_5->host_no));
   continue;
  }

  if (VAR_5->transportt->eh_strategy_handler)
   VAR_5->transportt->eh_strategy_handler(VAR_5);
  else
   FUNC_8(VAR_5);


  VAR_5->host_failed = 0;
  FUNC_7(VAR_5);
  if (!VAR_5->eh_noresume)
   FUNC_5(VAR_5);
 }
 FUNC_1(VAR_3);

 FUNC_0(1,
  FUNC_10(VAR_1, VAR_5,
        "Error handler scsi_eh_%d exiting\n",
        VAR_5->host_no));
 VAR_5->ehandler = ((void*)0);
 return 0;
}
