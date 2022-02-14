
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt7603_dev {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool
FUNC_1(struct mt7603_dev *VAR_6, u8 *VAR_7)
{
 if (!VAR_7[VAR_1])
  return 0;

 if (FUNC_0(VAR_7 + VAR_2) == 0)
  return 0;

 if (FUNC_0(VAR_7 + VAR_3) == 0)
  return 0;

 if (!VAR_7[VAR_0])
  return 0;

 if (!VAR_7[VAR_4])
  return 0;

 if (!VAR_7[VAR_5])
  return 0;

 return 1;
}
