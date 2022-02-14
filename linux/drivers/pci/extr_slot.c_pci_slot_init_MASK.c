
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kset {int kobj; } ;


 int VAR_0 ;
 struct kset* FUNC_0 (int *) ;
 int FUNC_1 (char*,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 struct kset *VAR_3;

 VAR_3 = FUNC_0(&VAR_1);
 VAR_2 = FUNC_1("slots", ((void*)0),
      &VAR_3->kobj);
 if (!VAR_2) {
  FUNC_2("PCI: Slot initialization failure\n");
  return -VAR_0;
 }
 return 0;
}
