
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static int FUNC_0(u8 VAR_5, u8 VAR_6)
{
 int VAR_7;
 u8 VAR_8;

 if (VAR_5 == VAR_0) {
  VAR_7 = VAR_6 - 1;
  VAR_8 = VAR_2;
 } else if (VAR_5 == VAR_1) {
  VAR_8 = VAR_3;
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   if (VAR_4[VAR_7] == VAR_6)
    break;
 } else {
  return -1;
 }

 if (VAR_7 >= VAR_8)
  return -1;

 return VAR_7;
}
