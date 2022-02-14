
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int port; int termios_rwsem; TYPE_2__* ops; struct tty_ldisc* ldisc; int flags; } ;
struct tty_ldisc {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* set_ldisc ) (struct tty_struct*) ;} ;
struct TYPE_3__ {int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tty_ldisc*) ;
 int FUNC_1 (struct tty_ldisc*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tty_struct*,struct tty_ldisc*) ;
 struct tty_ldisc* FUNC_7 (struct tty_struct*,int) ;
 int FUNC_8 (struct tty_struct*,int) ;
 int FUNC_9 (struct tty_struct*,struct tty_ldisc*) ;
 int FUNC_10 (struct tty_ldisc*) ;
 int FUNC_11 (struct tty_struct*,struct tty_ldisc*) ;
 int FUNC_12 (struct tty_struct*) ;
 int FUNC_13 (struct tty_struct*) ;
 int FUNC_14 (struct tty_struct*,int) ;
 int FUNC_15 (struct tty_struct*) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct tty_struct *VAR_3, int VAR_4)
{
 int VAR_5;
 struct tty_ldisc *VAR_6, *VAR_7;

 VAR_7 = FUNC_7(VAR_3, VAR_4);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_13(VAR_3);
 VAR_5 = FUNC_8(VAR_3, 5 * VAR_1);
 if (VAR_5)
  goto err;

 if (!VAR_3->ldisc) {
  VAR_5 = -VAR_0;
  goto out;
 }


 if (VAR_3->ldisc->ops->num == VAR_4)
  goto out;

 if (FUNC_4(VAR_2, &VAR_3->flags)) {

  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_6 = VAR_3->ldisc;


 FUNC_6(VAR_3, VAR_6);


 VAR_3->ldisc = VAR_7;
 FUNC_14(VAR_3, VAR_4);

 VAR_5 = FUNC_9(VAR_3, VAR_7);
 if (VAR_5 < 0) {

  FUNC_10(VAR_7);
  FUNC_11(VAR_3, VAR_6);
 }

 if (VAR_3->ldisc->ops->num != VAR_6->ops->num && VAR_3->ops->set_ldisc) {
  FUNC_2(&VAR_3->termios_rwsem);
  VAR_3->ops->set_ldisc(VAR_3);
  FUNC_16(&VAR_3->termios_rwsem);
 }






 VAR_7 = VAR_6;
out:
 FUNC_12(VAR_3);



 FUNC_5(VAR_3->port);
err:
 FUNC_10(VAR_7);
 FUNC_15(VAR_3);
 return VAR_5;
}
