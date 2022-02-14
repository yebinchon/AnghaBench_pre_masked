
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl {int caia_major; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(struct cxl *VAR_0)
{
 if (FUNC_0() && (VAR_0->caia_major == 1))
  return 1;

 if (FUNC_1() && (VAR_0->caia_major == 2))
  return 1;

 return 0;
}
