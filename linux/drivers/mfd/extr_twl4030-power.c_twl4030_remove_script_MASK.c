
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
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
 int VAR_12 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(u8 VAR_13)
{
 int VAR_14 = 0;

 VAR_14 = FUNC_1(VAR_12, VAR_5,
          VAR_7);
 if (VAR_14) {
  FUNC_0("twl4030: unable to unlock PROTECT_KEY\n");
  return VAR_14;
 }

 VAR_14 = FUNC_1(VAR_12, VAR_6,
          VAR_7);
 if (VAR_14) {
  FUNC_0("twl4030: unable to unlock PROTECT_KEY\n");
  return VAR_14;
 }

 if (VAR_13 & VAR_11) {
  VAR_14 = FUNC_1(VAR_12, VAR_0,
           VAR_4);
  if (VAR_14)
   return VAR_14;
 }
 if (VAR_13 & VAR_9) {
  VAR_14 = FUNC_1(VAR_12, VAR_0,
           VAR_2);
  if (VAR_14)
   return VAR_14;
 }
 if (VAR_13 & VAR_10) {
  VAR_14 = FUNC_1(VAR_12, VAR_0,
           VAR_3);
  if (VAR_14)
   return VAR_14;
 }
 if (VAR_13 & VAR_8) {
  VAR_14 = FUNC_1(VAR_12, VAR_0,
           VAR_1);
  if (VAR_14)
   return VAR_14;
 }

 VAR_14 = FUNC_1(VAR_12, 0,
          VAR_7);
 if (VAR_14)
  FUNC_0("TWL4030 Unable to relock registers\n");

 return VAR_14;
}
