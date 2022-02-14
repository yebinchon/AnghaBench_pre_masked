
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct socket {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct socket*,int*) ;
 struct socket* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct work_struct *VAR_1)
{
 struct socket *VAR_2 = VAR_0;
 int VAR_3;
 int VAR_4;
 for (;;) {
  VAR_4 = FUNC_1(VAR_2, &VAR_3);
  if (!VAR_3)
   break;
  FUNC_0();
 }
}
