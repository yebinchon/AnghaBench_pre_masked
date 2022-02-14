
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tps6598x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;


 unsigned long VAR_6 ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (struct tps6598x*,int ,int*,int) ;
 int FUNC_4 (struct tps6598x*,int ,int*,size_t) ;
 int FUNC_5 (struct tps6598x*,int ,int*) ;
 int FUNC_6 (struct tps6598x*,int ,char const*) ;

__attribute__((used)) static int FUNC_7(struct tps6598x *VAR_7, const char *VAR_8,
        size_t VAR_9, u8 *VAR_10,
        size_t VAR_11, u8 *VAR_12)
{
 unsigned long VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_15 = FUNC_5(VAR_7, VAR_4, &VAR_14);
 if (VAR_15)
  return VAR_15;
 if (VAR_14 && !FUNC_0(VAR_14))
  return -VAR_0;

 if (VAR_9) {
  VAR_15 = FUNC_4(VAR_7, VAR_5,
        VAR_10, VAR_9);
  if (VAR_15)
   return VAR_15;
 }

 VAR_15 = FUNC_6(VAR_7, VAR_4, VAR_8);
 if (VAR_15 < 0)
  return VAR_15;


 VAR_13 = VAR_6 + FUNC_1(1000);

 do {
  VAR_15 = FUNC_5(VAR_7, VAR_4, &VAR_14);
  if (VAR_15)
   return VAR_15;
  if (FUNC_0(VAR_14))
   return -VAR_1;

  if (FUNC_2(VAR_13))
   return -VAR_3;
 } while (VAR_14);

 if (VAR_11) {
  VAR_15 = FUNC_3(VAR_7, VAR_5,
       VAR_12, VAR_11);
  if (VAR_15)
   return VAR_15;
  VAR_14 = VAR_12[0];
 } else {
  VAR_15 = FUNC_3(VAR_7, VAR_5, &VAR_14, sizeof(u8));
  if (VAR_15)
   return VAR_15;
 }

 switch (VAR_14) {
 case 128:
  return -VAR_3;
 case 129:
  return -VAR_2;
 default:
  break;
 }

 return 0;
}
