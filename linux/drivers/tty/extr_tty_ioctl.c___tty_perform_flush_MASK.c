
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct tty_ldisc* ldisc; } ;
struct tty_ldisc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* flush_buffer ) (struct tty_struct*) ;} ;


 int VAR_0 ;



 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_1, unsigned long VAR_2)
{
 struct tty_ldisc *VAR_3 = VAR_1->ldisc;

 switch (VAR_2) {
 case 130:
  if (VAR_3 && VAR_3->ops->flush_buffer) {
   VAR_3->ops->flush_buffer(VAR_1);
   FUNC_3(VAR_1);
  }
  break;
 case 129:
  if (VAR_3 && VAR_3->ops->flush_buffer) {
   VAR_3->ops->flush_buffer(VAR_1);
   FUNC_3(VAR_1);
  }

 case 128:
  FUNC_2(VAR_1);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
