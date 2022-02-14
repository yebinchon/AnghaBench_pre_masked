
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ktermios {int c_iflag; int c_lflag; int c_cflag; int c_oflag; } ;
struct tty_struct {TYPE_1__* ops; struct ktermios termios; } ;
struct serport {int tty_idx; int flags; struct tty_struct* tty; int tty_drv; } ;
struct serdev_controller {int dummy; } ;
struct TYPE_2__ {int (* open ) (struct tty_struct*,int *) ;int (* close ) (struct tty_struct*,int *) ;} ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct tty_struct*) ;
 int VAR_20 ;
 struct serport* FUNC_2 (struct serdev_controller*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct tty_struct*,int *) ;
 int FUNC_5 (struct tty_struct*,int *) ;
 struct tty_struct* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct tty_struct*,int ) ;
 int FUNC_8 (struct tty_struct*,struct ktermios*) ;
 int FUNC_9 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_10(struct serdev_controller *VAR_21)
{
 struct serport *VAR_22 = FUNC_2(VAR_21);
 struct tty_struct *VAR_23;
 struct ktermios VAR_24;
 int VAR_25;

 VAR_23 = FUNC_6(VAR_22->tty_drv, VAR_22->tty_idx);
 if (FUNC_0(VAR_23))
  return FUNC_1(VAR_23);
 VAR_22->tty = VAR_23;

 if (!VAR_23->ops->open || !VAR_23->ops->close) {
  VAR_25 = -VAR_7;
  goto err_unlock;
 }

 VAR_25 = VAR_23->ops->open(VAR_22->tty, ((void*)0));
 if (VAR_25)
  goto err_close;

 FUNC_9(VAR_22->tty);


 VAR_24 = VAR_23->termios;
 VAR_24.c_iflag &= ~(VAR_11 | VAR_0 | VAR_19 | VAR_15 |
         VAR_13 | VAR_12 | VAR_9 | VAR_16);
 VAR_24.c_oflag &= ~VAR_17;
 VAR_24.c_lflag &= ~(VAR_5 | VAR_6 | VAR_8 | VAR_14 | VAR_10);
 VAR_24.c_cflag &= ~(VAR_4 | VAR_18);
 VAR_24.c_cflag |= VAR_3;
 VAR_24.c_cflag |= VAR_2;

 VAR_24.c_cflag |= VAR_1;
 FUNC_8(VAR_23, &VAR_24);

 FUNC_3(VAR_20, &VAR_22->flags);

 return 0;

err_close:
 VAR_23->ops->close(VAR_23, ((void*)0));
err_unlock:
 FUNC_9(VAR_23);
 FUNC_7(VAR_23, VAR_22->tty_idx);

 return VAR_25;
}
