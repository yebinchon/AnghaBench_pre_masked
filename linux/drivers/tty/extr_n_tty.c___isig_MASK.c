
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct pid {int dummy; } ;


 int FUNC_0 (struct pid*,int,int) ;
 int FUNC_1 (struct pid*) ;
 struct pid* FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_3(int VAR_0, struct tty_struct *VAR_1)
{
 struct pid *VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_2, VAR_0, 1);
  FUNC_1(VAR_2);
 }
}
