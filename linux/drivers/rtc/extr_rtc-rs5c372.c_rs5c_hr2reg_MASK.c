
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs5c372 {scalar_t__ time24; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(struct rs5c372 *VAR_0, unsigned VAR_1)
{
 if (VAR_0->time24)
  return FUNC_0(VAR_1);

 if (VAR_1 > 12)
  return 0x20 | FUNC_0(VAR_1 - 12);
 if (VAR_1 == 12)
  return 0x20 | FUNC_0(12);
 if (VAR_1 == 0)
  return FUNC_0(12);
 return FUNC_0(VAR_1);
}
