
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_cflag; int c_lflag; } ;
struct tty_driver {int flags; TYPE_1__ init_termios; int subtype; int type; int major; int name; int driver_name; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct tty_driver* FUNC_0 (int ) ;
 struct tty_driver** VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct tty_driver*) ;
 int FUNC_2 (struct tty_driver*) ;
 int FUNC_3 (struct tty_driver*,int *) ;
 TYPE_1__ VAR_20 ;

int FUNC_4(void)
{
 struct tty_driver *VAR_21;
 int VAR_22;
 int VAR_23;

 for (VAR_22 = 0; VAR_22 < VAR_17; VAR_22++) {
  VAR_21 = FUNC_0(VAR_7);
  if (!VAR_21)
   return -VAR_5;

  VAR_21->owner = VAR_13;
  VAR_21->driver_name = VAR_4[VAR_22];
  VAR_21->name = VAR_3[VAR_22];
  VAR_21->major = VAR_6;
  VAR_21->type = VAR_16;
  VAR_21->subtype = VAR_12;
  VAR_21->flags = VAR_15 |
     VAR_14;
  VAR_21->init_termios = VAR_20;
  VAR_21->init_termios.c_cflag = VAR_0 | VAR_2 | VAR_8 | VAR_1;
  VAR_21->init_termios.c_lflag = VAR_11 | VAR_9 | VAR_10;
  FUNC_3(VAR_21, &VAR_19);

  VAR_23 = FUNC_2(VAR_21);
  if (VAR_23) {
   FUNC_1(VAR_21);
   return VAR_23;
  }

  VAR_18[VAR_22] = VAR_21;
 }

 return VAR_23;
}
