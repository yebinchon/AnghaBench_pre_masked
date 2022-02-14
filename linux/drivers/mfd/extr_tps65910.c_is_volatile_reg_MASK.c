
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910 {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct tps65910* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct tps65910*) ;

__attribute__((used)) static bool FUNC_2(struct device *VAR_5, unsigned int VAR_6)
{
 struct tps65910 *VAR_7 = FUNC_0(VAR_5);






 if ((VAR_6 >= VAR_2) && (VAR_6 <= VAR_1)) {

  if (FUNC_1(VAR_7) == VAR_0)
   if ((VAR_6 == VAR_3) ||
    (VAR_6 == VAR_4))
    return 1;
  return 0;
 }
 return 1;
}
