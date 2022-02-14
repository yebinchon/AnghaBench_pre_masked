
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {scalar_t__ depth; scalar_t__ stack; scalar_t__ internal; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nameidata*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(struct nameidata *VAR_1)
{
 if (FUNC_1(VAR_1->depth != VAR_0))
  return 0;
 if (FUNC_1(VAR_1->stack != VAR_1->internal))
  return 0;
 return FUNC_0(VAR_1);
}
