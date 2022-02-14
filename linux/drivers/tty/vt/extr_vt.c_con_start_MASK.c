
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 int VAR_1;
 if (!VAR_0)
  return;
 VAR_1 = VAR_0->index;
 if (!FUNC_0(VAR_1))
  return;
 FUNC_1(VAR_1);
}
