
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;


 struct list_head* FUNC_0 (struct list_head*) ;

__attribute__((used)) static inline int
FUNC_1(struct list_head *VAR_0, struct list_head *VAR_1)
{
 struct list_head *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 while (VAR_2 != VAR_0) {
  if (VAR_2 == VAR_1)
   return 1;
  VAR_2 = FUNC_0(VAR_2);
  if (VAR_2 == ((void*)0))
   break;
 }
 return 0;
}
