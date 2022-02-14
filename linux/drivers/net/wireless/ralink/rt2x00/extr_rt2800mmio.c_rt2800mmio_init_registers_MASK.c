
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int VAR_22 ;
 scalar_t__ FUNC_0 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int) ;

int FUNC_5(struct rt2x00_dev *VAR_23)
{
 u32 VAR_24;




 VAR_24 = FUNC_3(VAR_23, VAR_15);
 FUNC_2(&VAR_24, VAR_17, 1);
 FUNC_2(&VAR_24, VAR_18, 1);
 FUNC_2(&VAR_24, VAR_19, 1);
 FUNC_2(&VAR_24, VAR_20, 1);
 FUNC_2(&VAR_24, VAR_21, 1);
 FUNC_2(&VAR_24, VAR_22, 1);
 FUNC_2(&VAR_24, VAR_16, 1);
 FUNC_4(VAR_23, VAR_15, VAR_24);

 FUNC_4(VAR_23, VAR_6, 0x00000e1f);
 FUNC_4(VAR_23, VAR_6, 0x00000e00);

 if (FUNC_0(VAR_23) &&
     (FUNC_1(VAR_23, VAR_8) ||
      FUNC_1(VAR_23, VAR_9) ||
      FUNC_1(VAR_23, VAR_10) ||
      FUNC_1(VAR_23, VAR_11) ||
      FUNC_1(VAR_23, VAR_12) ||
      FUNC_1(VAR_23, VAR_13) ||
      FUNC_1(VAR_23, VAR_14))) {
  VAR_24 = FUNC_3(VAR_23, VAR_0);
  FUNC_2(&VAR_24, VAR_1, 1);
  FUNC_2(&VAR_24, VAR_2, 1);
  FUNC_4(VAR_23, VAR_0, VAR_24);
 }

 FUNC_4(VAR_23, VAR_7, 0x00000003);

 VAR_24 = 0;
 FUNC_2(&VAR_24, VAR_5, 1);
 FUNC_2(&VAR_24, VAR_4, 1);
 FUNC_4(VAR_23, VAR_3, VAR_24);

 FUNC_4(VAR_23, VAR_3, 0x00000000);

 return 0;
}
