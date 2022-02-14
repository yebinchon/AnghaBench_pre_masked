
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct tty_ldisc_ops {int dummy; } ;
struct tty_ldisc {struct tty_struct* tty; struct tty_ldisc_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tty_ldisc* FUNC_0 (struct tty_ldisc_ops*) ;
 struct tty_ldisc* FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct tty_ldisc_ops*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 struct tty_ldisc_ops* FUNC_4 (int) ;
 struct tty_ldisc* FUNC_5 (int,int) ;
 int FUNC_6 (char*,int) ;
 int VAR_7 ;

__attribute__((used)) static struct tty_ldisc *FUNC_7(struct tty_struct *VAR_8, int VAR_9)
{
 struct tty_ldisc *VAR_10;
 struct tty_ldisc_ops *VAR_11;

 if (VAR_9 < VAR_5 || VAR_9 >= VAR_4)
  return FUNC_1(-VAR_1);





 VAR_11 = FUNC_4(VAR_9);
 if (FUNC_2(VAR_11)) {
  if (!FUNC_3(VAR_0) && !VAR_7)
   return FUNC_1(-VAR_2);
  FUNC_6("tty-ldisc-%d", VAR_9);
  VAR_11 = FUNC_4(VAR_9);
  if (FUNC_2(VAR_11))
   return FUNC_0(VAR_11);
 }





 VAR_10 = FUNC_5(sizeof(struct tty_ldisc), VAR_3 | VAR_6);
 VAR_10->ops = VAR_11;
 VAR_10->tty = VAR_8;

 return VAR_10;
}
