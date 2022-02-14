
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;

int FUNC_2(u8 *VAR_3, int VAR_4, int *VAR_5,
   int *VAR_6)
{
 int VAR_7;
 int VAR_8, VAR_9;
 u8 *VAR_10;

 if (VAR_4 <= 0) {

  return -VAR_0;
 }
 if ((*VAR_3 != VAR_2) ||
     (*(VAR_3 + 1) != (u8)(VAR_4 - 2)))
  return -VAR_0;
 VAR_10 = VAR_3;
 VAR_10 += 4;
 VAR_8 = VAR_4 - 4;

 if (VAR_8 >= VAR_1) {
  *VAR_5 = FUNC_1(VAR_10);
  VAR_10 += VAR_1;
  VAR_8 -= VAR_1;
 } else if (VAR_8 > 0) {
  return -VAR_0;
 }

 if (VAR_8 >= 2) {
  VAR_9 = FUNC_0(*(__le16 *)VAR_10);
  VAR_10 += 2;
  VAR_8 -= 2;
  if (VAR_9 == 0 || VAR_8 < VAR_9 * VAR_1)
   return -VAR_0;
  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
   *VAR_6 |= FUNC_1(VAR_10);
   VAR_10 += VAR_1;
   VAR_8 -= VAR_1;
  }
 } else if (VAR_8 == 1) {
  return -VAR_0;
 }
 return 0;
}
