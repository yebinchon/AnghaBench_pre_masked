
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int ldisc; } ;


 int FUNC_0 (struct tty_struct*,int ) ;
 int FUNC_1 (struct tty_struct*,int ) ;

int FUNC_2(struct tty_struct *VAR_0, struct tty_struct *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_0->ldisc);
 if (VAR_2)
  return VAR_2;

 if (VAR_1) {




  VAR_2 = FUNC_1(VAR_1, VAR_1->ldisc);
  if (VAR_2) {
   FUNC_0(VAR_0, VAR_0->ldisc);
   return VAR_2;
  }
 }
 return 0;
}
