
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {int dummy; } ;


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
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*,int const*,size_t const) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ,int ,int ) ;
 int FUNC_5 (struct rt2x00_dev*,int ) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int) ;
 scalar_t__ FUNC_7 (struct rt2x00_dev*) ;
 int FUNC_8 (struct rt2x00_dev*,char*) ;
 scalar_t__ FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_11 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_12 (struct rt2x00_dev*,int ) ;
 int FUNC_13 (int*,int ,int) ;

int FUNC_14(struct rt2x00_dev *VAR_17,
    const u8 *VAR_18, const size_t VAR_19)
{
 unsigned int VAR_20;
 u32 VAR_21;
 int VAR_22;

 if (FUNC_12(VAR_17, VAR_13)) {
  VAR_22 = FUNC_3(VAR_17);
  if (VAR_22)
   return -VAR_4;
 }





 FUNC_6(VAR_17, VAR_0, 0x00000000);




 if (FUNC_7(VAR_17))
  return -VAR_4;

 if (FUNC_10(VAR_17)) {
  if (FUNC_12(VAR_17, VAR_13) ||
      FUNC_12(VAR_17, VAR_14) ||
      FUNC_12(VAR_17, VAR_15) ||
      FUNC_12(VAR_17, VAR_16)) {
   VAR_21 = FUNC_5(VAR_17, VAR_1);
   FUNC_13(&VAR_21, VAR_2, 1);
   FUNC_13(&VAR_21, VAR_3, 1);
   FUNC_6(VAR_17, VAR_1, VAR_21);
  }
  FUNC_6(VAR_17, VAR_11, 0x00000002);
 }

 FUNC_1(VAR_17);




 FUNC_2(VAR_17, VAR_18, VAR_19);




 for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
  VAR_21 = FUNC_5(VAR_17, VAR_9);
  if (FUNC_9(VAR_21, VAR_10))
   break;
  FUNC_0(1);
 }

 if (VAR_20 == VAR_12) {
  FUNC_8(VAR_17, "PBF system register not ready\n");
  return -VAR_4;
 }





 FUNC_1(VAR_17);




 FUNC_6(VAR_17, VAR_5, 0);
 FUNC_6(VAR_17, VAR_7, 0);
 if (FUNC_11(VAR_17)) {
  FUNC_6(VAR_17, VAR_6, 0);
  FUNC_4(VAR_17, VAR_8, 0, 0, 0);
 }
 FUNC_0(1);

 return 0;
}
