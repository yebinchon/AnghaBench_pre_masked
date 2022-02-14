
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flow_stopped; int flow_lock; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;






 int VAR_1 ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (struct tty_struct*,struct file*,unsigned int,unsigned long) ;
 int FUNC_9 (struct tty_struct*,int ) ;

int FUNC_10(struct tty_struct *VAR_2, struct file *VAR_3,
         unsigned int VAR_4, unsigned long VAR_5)
{
 int VAR_6;

 switch (VAR_4) {
 case 128:
  VAR_6 = FUNC_7(VAR_2);
  if (VAR_6)
   return VAR_6;
  switch (VAR_5) {
  case 130:
   FUNC_5(&VAR_2->flow_lock);
   if (!VAR_2->flow_stopped) {
    VAR_2->flow_stopped = 1;
    FUNC_3(VAR_2);
   }
   FUNC_6(&VAR_2->flow_lock);
   break;
  case 129:
   FUNC_5(&VAR_2->flow_lock);
   if (VAR_2->flow_stopped) {
    VAR_2->flow_stopped = 0;
    FUNC_2(VAR_2);
   }
   FUNC_6(&VAR_2->flow_lock);
   break;
  case 132:
   if (FUNC_1(VAR_2) != VAR_1)
    VAR_6 = FUNC_9(VAR_2, FUNC_1(VAR_2));
   break;
  case 131:
   if (FUNC_0(VAR_2) != VAR_1)
    VAR_6 = FUNC_9(VAR_2, FUNC_0(VAR_2));
   break;
  default:
   return -VAR_0;
  }
  return VAR_6;
 case 133:
  VAR_6 = FUNC_7(VAR_2);
  if (VAR_6)
   return VAR_6;
  return FUNC_4(VAR_2, VAR_5);
 default:

  return FUNC_8(VAR_2, VAR_3, VAR_4, VAR_5);
 }
}
