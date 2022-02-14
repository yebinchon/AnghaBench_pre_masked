
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_struct {int locked_vm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int *,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (int *) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct user_struct *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;


 VAR_5 = FUNC_2(VAR_2) >> VAR_1;

 do {
  VAR_6 = FUNC_1(&VAR_3->locked_vm);
  VAR_7 = VAR_6 + VAR_4;
  if (VAR_7 > VAR_5)
   return -VAR_0;
 } while (FUNC_0(&VAR_3->locked_vm, VAR_6,
     VAR_7) != VAR_6);

 return 0;
}
