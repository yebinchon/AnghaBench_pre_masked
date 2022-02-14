
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct tty_port {int flags; int lock; int blocked_open; int count; int open_wait; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (struct file*) ;
 scalar_t__ FUNC_10 (struct tty_struct*) ;
 int FUNC_11 (struct tty_struct*) ;
 scalar_t__ FUNC_12 (struct tty_port*) ;
 scalar_t__ FUNC_13 (struct tty_port*) ;
 int FUNC_14 (struct tty_port*) ;
 int FUNC_15 (struct tty_port*,int) ;
 int FUNC_16 (struct tty_struct*) ;
 int VAR_6 ;

int FUNC_17(struct tty_port *VAR_7,
    struct tty_struct *VAR_8, struct file *VAR_9)
{
 int VAR_10 = 0, VAR_11;
 unsigned long VAR_12;
 FUNC_2(VAR_6);



 if (FUNC_10(VAR_8)) {
  FUNC_15(VAR_7, 1);
  return 0;
 }
 if (VAR_9 == ((void*)0) || (VAR_9->f_flags & VAR_3)) {

  if (FUNC_0(VAR_8))
   FUNC_14(VAR_7);
  FUNC_15(VAR_7, 1);
  return 0;
 }

 if (FUNC_1(VAR_8))
  VAR_10 = 1;





 VAR_11 = 0;


 FUNC_7(&VAR_7->lock, VAR_12);
 VAR_7->count--;
 VAR_7->blocked_open++;
 FUNC_8(&VAR_7->lock, VAR_12);

 while (1) {

  if (FUNC_0(VAR_8) && FUNC_13(VAR_7))
   FUNC_14(VAR_7);

  FUNC_4(&VAR_7->open_wait, &VAR_6, VAR_4);


  if (FUNC_9(VAR_9) || !FUNC_13(VAR_7)) {
   if (VAR_7->flags & VAR_0)
    VAR_11 = -VAR_1;
   else
    VAR_11 = -VAR_2;
   break;
  }






  if (VAR_10 || FUNC_12(VAR_7))
   break;
  if (FUNC_6(VAR_5)) {
   VAR_11 = -VAR_2;
   break;
  }
  FUNC_16(VAR_8);
  FUNC_5();
  FUNC_11(VAR_8);
 }
 FUNC_3(&VAR_7->open_wait, &VAR_6);



 FUNC_7(&VAR_7->lock, VAR_12);
 if (!FUNC_9(VAR_9))
  VAR_7->count++;
 VAR_7->blocked_open--;
 FUNC_8(&VAR_7->lock, VAR_12);
 if (VAR_11 == 0)
  FUNC_15(VAR_7, 1);
 return VAR_11;
}
