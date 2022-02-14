
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flow_stopped; scalar_t__ stopped; } ;


 unsigned char FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct tty_struct*) ;
 unsigned char FUNC_6 (struct tty_struct*) ;
 unsigned char FUNC_7 (struct tty_struct*) ;
 unsigned char FUNC_8 (struct tty_struct*) ;
 unsigned char FUNC_9 (struct tty_struct*) ;
 int FUNC_10 (struct tty_struct*) ;
 int FUNC_11 (struct tty_struct*) ;
 int FUNC_12 (struct tty_struct*) ;
 unsigned char FUNC_13 (unsigned char) ;

__attribute__((used)) static void FUNC_14(struct tty_struct *VAR_0, unsigned char VAR_1)
{
 if (FUNC_1(VAR_0))
  VAR_1 &= 0x7f;
 if (FUNC_2(VAR_0) && FUNC_5(VAR_0))
  VAR_1 = FUNC_13(VAR_1);

 if (FUNC_4(VAR_0)) {
  if (VAR_1 == FUNC_8(VAR_0))
   FUNC_12(VAR_0);
  else if (VAR_1 == FUNC_7(VAR_0) ||
    (VAR_0->stopped && !VAR_0->flow_stopped && FUNC_3(VAR_0) &&
     VAR_1 != FUNC_0(VAR_0) && VAR_1 != FUNC_6(VAR_0) &&
     VAR_1 != FUNC_9(VAR_0))) {
   FUNC_11(VAR_0);
   FUNC_10(VAR_0);
  }
 }
}
