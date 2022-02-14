
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int __le16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,void*,int) ;
 int FUNC_2 (scalar_t__*) ;

int FUNC_3(u8 *VAR_4, int VAR_5, int *VAR_6,
         int *VAR_7)
{
 int VAR_8;
 int VAR_9, VAR_10;
 u8 *VAR_11;

 if (VAR_5 <= 0) {

  return -VAR_0;
 }
 if ((*VAR_4 != VAR_3) ||
     (*(VAR_4 + 1) != (u8)(VAR_5 - 2)) ||
     (FUNC_1(VAR_4 + 2, (void *)VAR_1, VAR_2)))
  return -VAR_0;
 VAR_11 = VAR_4;
 VAR_11 += 8;
 VAR_9 = VAR_5 - 8;

 if (VAR_9 >= VAR_2) {
  *VAR_6 = FUNC_2(VAR_11);
  VAR_11 += VAR_2;
  VAR_9 -= VAR_2;
 } else if (VAR_9 > 0) {
  return -VAR_0;
 }

 if (VAR_9 >= 2) {
  VAR_10 = FUNC_0(*(__le16 *)VAR_11);
  VAR_11 += 2;
  VAR_9 -= 2;
  if (VAR_10 == 0 || VAR_9 < VAR_10 * VAR_2)
   return -VAR_0;
  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
   *VAR_7 |= FUNC_2(VAR_11);
   VAR_11 += VAR_2;
   VAR_9 -= VAR_2;
  }
 } else if (VAR_9 == 1) {
  return -VAR_0;
 }
 return 0;
}
