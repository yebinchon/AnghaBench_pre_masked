
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int bgt_name; scalar_t__ need_bgt; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct ubifs_info*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct ubifs_info*) ;
 int FUNC_9 (struct ubifs_info*,char*,int ,...) ;
 int FUNC_10 (struct ubifs_info*,int) ;

int FUNC_11(void *VAR_3)
{
 int VAR_4;
 struct ubifs_info *VAR_5 = VAR_3;

 FUNC_9(VAR_5, "background thread \"%s\" started, PID %d",
    VAR_5->bgt_name, VAR_2->pid);
 FUNC_6();

 while (1) {
  if (FUNC_2())
   break;

  if (FUNC_7())
   continue;

  FUNC_5(VAR_0);

  if (!VAR_5->need_bgt) {





   if (FUNC_2())
    break;
   FUNC_4();
   continue;
  } else
   FUNC_0(VAR_1);

  VAR_5->need_bgt = 0;
  VAR_4 = FUNC_8(VAR_5);
  if (VAR_4)
   FUNC_10(VAR_5, VAR_4);

  FUNC_3(VAR_5);
  FUNC_1();
 }

 FUNC_9(VAR_5, "background thread \"%s\" stops", VAR_5->bgt_name);
 return 0;
}
