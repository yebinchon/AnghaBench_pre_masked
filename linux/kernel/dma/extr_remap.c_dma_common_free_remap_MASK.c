
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {scalar_t__ flags; } ;


 int FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,void*) ;
 struct vm_struct* FUNC_2 (void*) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (void*) ;

void FUNC_5(void *VAR_1, size_t VAR_2)
{
 struct vm_struct *VAR_3 = FUNC_2(VAR_1);

 if (!VAR_3 || VAR_3->flags != VAR_0) {
  FUNC_1(1, "trying to free invalid coherent area: %p\n", VAR_1);
  return;
 }

 FUNC_3((unsigned long)VAR_1, FUNC_0(VAR_2));
 FUNC_4(VAR_1);
}
