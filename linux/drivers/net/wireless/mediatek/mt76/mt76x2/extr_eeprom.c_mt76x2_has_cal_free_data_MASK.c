
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mt76x02_dev {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static bool
FUNC_0(struct mt76x02_dev *VAR_6, u8 *VAR_7)
{
 u16 *VAR_8 = (u16 *)VAR_7;

 if (VAR_8[VAR_0] != 0)
  return 0;

 if (VAR_8[VAR_5] == 0xffff)
  return 0;

 if (VAR_8[VAR_4] != 0)
  return 0;

 if (VAR_8[VAR_3] == 0xffff)
  return 0;

 if (VAR_8[VAR_1] != 0)
  return 0;

 if (VAR_8[VAR_2] == 0xffff)
  return 0;

 return 1;
}
