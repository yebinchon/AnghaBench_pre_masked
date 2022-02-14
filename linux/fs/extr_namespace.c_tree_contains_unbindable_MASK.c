
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int dummy; } ;


 scalar_t__ FUNC_0 (struct mount*) ;
 struct mount* FUNC_1 (struct mount*,struct mount*) ;

__attribute__((used)) static inline int FUNC_2(struct mount *VAR_0)
{
 struct mount *VAR_1;
 for (VAR_1 = VAR_0; VAR_1; VAR_1 = FUNC_1(VAR_1, VAR_0)) {
  if (FUNC_0(VAR_1))
   return 1;
 }
 return 0;
}
