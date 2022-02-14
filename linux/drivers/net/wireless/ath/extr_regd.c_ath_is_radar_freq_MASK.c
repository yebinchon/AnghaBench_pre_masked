
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ath_regulatory {scalar_t__ country_code; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(u16 VAR_1,
         struct ath_regulatory *VAR_2)

{
 if (VAR_2->country_code == VAR_0)
  return (VAR_1 >= 5500 && VAR_1 <= 5700);
 return (VAR_1 >= 5260 && VAR_1 <= 5700);
}
