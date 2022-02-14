
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int*,int,void*) ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (int,int,int*) ;
 int FUNC_3 (int ,int ,int ,void*) ;

__attribute__((used)) static int FUNC_4(u8 *VAR_12, void *VAR_13)
{
 int VAR_14;
 u8 VAR_15[VAR_2];

 if (VAR_12[0] == VAR_8) {
  VAR_14 = FUNC_2(VAR_12[2], VAR_12[4], VAR_12 + 5);
  if (VAR_14) {
   VAR_15[0] = VAR_7;
   VAR_15[1] = 3;
   VAR_15[2] = VAR_3;
   VAR_15[3] = VAR_12[2];
   VAR_15[4] = VAR_12[3];
   if (&FUNC_0)
    FUNC_0(VAR_15, 5, VAR_13);
   return VAR_14;
  }
 }
 if (VAR_12[0] == VAR_5) {
  return FUNC_1(VAR_12[2], VAR_13);
 } else if (VAR_12[0] == VAR_9) {
  return FUNC_1(VAR_12[4], VAR_13);
 } else if (
  (VAR_12[0] == VAR_8) &&
  (VAR_12[2] == VAR_4)
 ) {
  return FUNC_1(VAR_12[5], VAR_13);
 } else if (
  (VAR_12[0] == VAR_10) &&
  (VAR_12[2] == VAR_11)
 ) {
  return FUNC_1(VAR_12[4], VAR_13);
 } else if (
  (VAR_0) &&
  (VAR_12[0] == VAR_6) &&
  (VAR_12[2] == 1)
 ) {

  return FUNC_3(
   0,
   VAR_1,
   0,
   VAR_13
  );
 }
 return 0;
}
