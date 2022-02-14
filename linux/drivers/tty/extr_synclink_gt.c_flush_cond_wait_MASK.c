
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cond_wait {struct cond_wait* next; int q; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cond_wait **VAR_0)
{
 while (*VAR_0 != ((void*)0)) {
  FUNC_0(&(*VAR_0)->q);
  *VAR_0 = (*VAR_0)->next;
 }
}
