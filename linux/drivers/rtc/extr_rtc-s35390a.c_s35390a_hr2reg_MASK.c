
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s35390a {scalar_t__ twentyfourhour; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static char FUNC_1(struct s35390a *VAR_0, int VAR_1)
{
 if (VAR_0->twentyfourhour)
  return FUNC_0(VAR_1);

 if (VAR_1 < 12)
  return FUNC_0(VAR_1);

 return 0x40 | FUNC_0(VAR_1 - 12);
}
