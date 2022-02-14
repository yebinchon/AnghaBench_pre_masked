
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_cflag; } ;
struct tty_driver {int flags; char const* driver_name; char const* name; TYPE_1__ init_termios; int minor_start; int subtype; int type; } ;
struct gigaset_driver {int have_tty; struct tty_driver* tty; int minor; int minors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct tty_driver* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_10 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct tty_driver*) ;
 int FUNC_4 (struct tty_driver*) ;
 int FUNC_5 (struct tty_driver*,int *) ;
 TYPE_1__ VAR_11 ;

void FUNC_6(struct gigaset_driver *VAR_12, const char *VAR_13,
      const char *VAR_14)
{
 int VAR_15;
 struct tty_driver *VAR_16;

 VAR_12->have_tty = 0;

 VAR_12->tty = VAR_16 = FUNC_0(VAR_12->minors);
 if (VAR_16 == ((void*)0))
  goto enomem;

 VAR_16->type = VAR_9;
 VAR_16->subtype = VAR_6;
 VAR_16->flags = VAR_8 | VAR_7;

 VAR_16->driver_name = VAR_13;
 VAR_16->name = VAR_14;
 VAR_16->minor_start = VAR_12->minor;

 VAR_16->init_termios = VAR_11;
 VAR_16->init_termios.c_cflag = VAR_0 | VAR_3 | VAR_2 | VAR_5 | VAR_1;
 FUNC_5(VAR_16, &VAR_10);

 VAR_15 = FUNC_4(VAR_16);
 if (VAR_15 < 0) {
  FUNC_2("error %d registering tty driver\n", VAR_15);
  goto error;
 }
 FUNC_1(VAR_4, "tty driver initialized");
 VAR_12->have_tty = 1;
 return;

enomem:
 FUNC_2("out of memory\n");
error:
 if (VAR_12->tty)
  FUNC_3(VAR_12->tty);
}
