
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tty_driver {int dummy; } ;
struct console {struct console* next; struct tty_driver* (* device ) (struct console*,int*) ;} ;
struct TYPE_4__ {int is_console; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* VAR_1 ;
 int VAR_2 ;
 struct console* VAR_3 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 struct tty_driver* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_5 (char**) ;
 int FUNC_6 () ;
 int VAR_7 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 struct tty_driver* FUNC_9 (struct console*,int*) ;
 struct tty_driver* FUNC_10 (char*,int*) ;

__attribute__((used)) static int FUNC_11(void)
{
 struct tty_driver *VAR_8;
 int VAR_9 = 0;
 int VAR_10 = -VAR_0;
 char *VAR_11 = VAR_1;
 struct console *VAR_12;

 if (!FUNC_7(VAR_1) || FUNC_1(VAR_1[0])) {
  VAR_10 = 0;
  goto noconfig;
 }

 VAR_6.is_console = 0;
 VAR_4 = ((void*)0);

 VAR_7 = 0;
 if (FUNC_8(VAR_11, "kms,", 4) == 0) {
  VAR_11 += 4;
  VAR_7 = 1;
 }

 if (FUNC_5(&VAR_11))
  goto do_register;

 VAR_8 = FUNC_10(VAR_11, &VAR_9);
 if (!VAR_8)
  goto noconfig;

 VAR_12 = VAR_3;
 while (VAR_12) {
  int VAR_13;
  if (VAR_12->device && VAR_12->device(VAR_12, &VAR_13) == VAR_8 &&
      VAR_13 == VAR_9) {
   VAR_6.is_console = 1;
   break;
  }
  VAR_12 = VAR_12->next;
 }

 VAR_4 = VAR_8;
 VAR_5 = VAR_9;

do_register:
 VAR_10 = FUNC_2(&VAR_6);
 if (VAR_10)
  goto noconfig;

 VAR_10 = FUNC_3();
 if (VAR_10)
  goto nmi_con_failed;

 VAR_2 = 1;

 return 0;

nmi_con_failed:
 FUNC_4(&VAR_6);
noconfig:
 FUNC_6();
 VAR_1[0] = 0;
 VAR_2 = 0;
 FUNC_0();

 return VAR_10;
}
