
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_line; } ;
struct tty_struct {int count; TYPE_1__ termios; int ldisc; int flags; struct tty_driver* driver; } ;
struct tty_ldisc {int dummy; } ;
struct tty_driver {scalar_t__ type; scalar_t__ subtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct tty_ldisc*) ;
 int FUNC_3 (struct tty_struct*,int) ;
 struct tty_ldisc* FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*,int ) ;
 int FUNC_6 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_8)
{
 struct tty_driver *VAR_9 = VAR_8->driver;
 struct tty_ldisc *VAR_10;
 int VAR_11 = 0;

 if (VAR_9->type == VAR_6 &&
     VAR_9->subtype == VAR_5)
  return -VAR_3;

 if (!VAR_8->count)
  return -VAR_1;

 if (FUNC_1(VAR_7, &VAR_8->flags) && !FUNC_0(VAR_0))
  return -VAR_2;

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10) {
  FUNC_2(VAR_10);
 } else {
  VAR_11 = FUNC_3(VAR_8, 5 * VAR_4);
  if (VAR_11)
   return VAR_11;

  if (!VAR_8->ldisc)
   VAR_11 = FUNC_5(VAR_8, VAR_8->termios.c_line);
  FUNC_6(VAR_8);
 }

 if (VAR_11 == 0)
  VAR_8->count++;

 return VAR_11;
}
