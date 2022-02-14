
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct dsi_data {scalar_t__ mode; int pix_fmt; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int ,int ,int ,int ) ;
 int FUNC_5 (struct platform_device*,int ,int ,int ,int ) ;
 int FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*) ;
 struct dsi_data* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct platform_device*,int,int,int) ;
 int FUNC_12 (struct platform_device*,int,int,int) ;
 int FUNC_13 (struct platform_device*,int,int,int) ;
 int FUNC_14 (struct platform_device*,int,int,int) ;
 int FUNC_15 (struct platform_device*,int) ;
 int FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_5)
{
 struct dsi_data *VAR_6 = FUNC_8(VAR_5);
 u32 VAR_7;
 int VAR_8 = 0;

 FUNC_5(VAR_5, VAR_1,
   VAR_1,
   VAR_1,
   VAR_1);

 FUNC_4(VAR_5, VAR_1,
   VAR_1,
   VAR_1,
   VAR_1);


 FUNC_13(VAR_5, 0x1000, 0, 0);
 FUNC_14(VAR_5, 0x1fff, 1, 1);
 FUNC_12(VAR_5, 0x1fff, 1, 1);
 FUNC_11(VAR_5, 0x1fff, 1, 1);

 switch (FUNC_9(VAR_6->pix_fmt)) {
 case 16:
  VAR_8 = 0;
  break;
 case 18:
  VAR_8 = 1;
  break;
 case 24:
  VAR_8 = 2;
  break;
 default:
  FUNC_0();
  return -VAR_2;
 }

 VAR_7 = FUNC_10(VAR_5, VAR_0);
 VAR_7 = FUNC_1(VAR_7, 1, 1, 1);
 VAR_7 = FUNC_1(VAR_7, 1, 2, 2);
 VAR_7 = FUNC_1(VAR_7, 1, 3, 3);
 VAR_7 = FUNC_1(VAR_7, 1, 4, 4);
 VAR_7 = FUNC_1(VAR_7, VAR_8, 7, 6);
 VAR_7 = FUNC_1(VAR_7, 0, 8, 8);
 VAR_7 = FUNC_1(VAR_7, 1, 14, 14);
 VAR_7 = FUNC_1(VAR_7, 1, 19, 19);
 if (!FUNC_17(VAR_3)) {
  VAR_7 = FUNC_1(VAR_7, 1, 24, 24);

  VAR_7 = FUNC_1(VAR_7, 0, 25, 25);
 }

 FUNC_16(VAR_5, VAR_0, VAR_7);

 FUNC_6(VAR_5);

 if (VAR_6->mode == VAR_4) {
  FUNC_7(VAR_5);
  FUNC_2(VAR_5);
  FUNC_3(VAR_5);
 }

 FUNC_15(VAR_5, 0);
 FUNC_15(VAR_5, 1);
 FUNC_15(VAR_5, 2);
 FUNC_15(VAR_5, 3);

 return 0;
}
