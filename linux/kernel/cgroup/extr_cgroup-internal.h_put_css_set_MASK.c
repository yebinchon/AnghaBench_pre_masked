
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct css_set {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct css_set*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct css_set *VAR_1)
{
 unsigned long VAR_2;






 if (FUNC_1(&VAR_1->refcount))
  return;

 FUNC_2(&VAR_0, VAR_2);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_0, VAR_2);
}
