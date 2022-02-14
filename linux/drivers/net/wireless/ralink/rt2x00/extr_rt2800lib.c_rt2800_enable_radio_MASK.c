
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int,int,int) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (struct rt2x00_dev*,int ,scalar_t__) ;
 int FUNC_8 (struct rt2x00_dev*) ;
 int FUNC_9 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_10 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_11 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_12 (struct rt2x00_dev*,int ) ;
 int FUNC_13 (scalar_t__*,int ,int) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;

int FUNC_16(struct rt2x00_dev *VAR_22)
{
 u32 VAR_23;
 u16 VAR_24;




 if (FUNC_15(FUNC_10(VAR_22) ||
       FUNC_3(VAR_22)))
  return -VAR_3;




 if (FUNC_15(FUNC_9(VAR_22)))
  return -VAR_3;




 FUNC_7(VAR_22, VAR_4, 0);
 FUNC_7(VAR_22, VAR_6, 0);
 if (FUNC_11(VAR_22))
  FUNC_7(VAR_22, VAR_5, 0);
 FUNC_5(VAR_22, VAR_10, 0, 0, 0);
 FUNC_0(1);




 if (FUNC_15(FUNC_8(VAR_22)))
  return -VAR_3;




 FUNC_2(VAR_22);
 FUNC_4(VAR_22);

 if (FUNC_11(VAR_22) &&
     (FUNC_12(VAR_22, VAR_15) ||
      FUNC_12(VAR_22, VAR_16) ||
      FUNC_12(VAR_22, VAR_17))) {
  FUNC_14(200);
  FUNC_5(VAR_22, VAR_11, 0, 0, 0);
  FUNC_14(10);
 }




 VAR_23 = FUNC_6(VAR_22, VAR_7);
 FUNC_13(&VAR_23, VAR_9, 1);
 FUNC_13(&VAR_23, VAR_8, 0);
 FUNC_7(VAR_22, VAR_7, VAR_23);

 FUNC_14(50);

 VAR_23 = FUNC_6(VAR_22, VAR_18);
 FUNC_13(&VAR_23, VAR_20, 1);
 FUNC_13(&VAR_23, VAR_19, 1);
 FUNC_13(&VAR_23, VAR_21, 1);
 FUNC_7(VAR_22, VAR_18, VAR_23);

 VAR_23 = FUNC_6(VAR_22, VAR_7);
 FUNC_13(&VAR_23, VAR_9, 1);
 FUNC_13(&VAR_23, VAR_8, 1);
 FUNC_7(VAR_22, VAR_7, VAR_23);




 VAR_24 = FUNC_1(VAR_22, VAR_1);
 FUNC_5(VAR_22, VAR_13, 0xff,
      VAR_24 & 0xff, (VAR_24 >> 8) & 0xff);

 VAR_24 = FUNC_1(VAR_22, VAR_0);
 FUNC_5(VAR_22, VAR_12, 0xff,
      VAR_24 & 0xff, (VAR_24 >> 8) & 0xff);

 VAR_24 = FUNC_1(VAR_22, VAR_2);
 FUNC_5(VAR_22, VAR_14, 0xff,
      VAR_24 & 0xff, (VAR_24 >> 8) & 0xff);

 return 0;
}
