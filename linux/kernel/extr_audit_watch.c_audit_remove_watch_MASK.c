
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_watch {int * parent; int wlist; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct audit_watch*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct audit_watch *VAR_0)
{
 FUNC_2(&VAR_0->wlist);
 FUNC_0(VAR_0->parent);
 VAR_0->parent = ((void*)0);
 FUNC_1(VAR_0);
}
