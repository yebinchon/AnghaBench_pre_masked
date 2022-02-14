
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos5_usbdrd_phy {int extrefclk; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (struct exynos5_usbdrd_phy*,int ,unsigned int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct exynos5_usbdrd_phy *VAR_10)
{
 unsigned int VAR_11;
 int VAR_12 = 0;







 VAR_11 = VAR_7 |
  VAR_6 |
  VAR_8;
 VAR_12 = FUNC_0(VAR_10,
    VAR_1,
    VAR_11);
 if (VAR_12) {
  FUNC_1(VAR_10->dev,
   "Failed setting Loss-of-Signal level for SuperSpeed\n");
  return VAR_12;
 }





 VAR_11 = VAR_9;
 VAR_12 = FUNC_0(VAR_10,
    VAR_2,
    VAR_11);
 if (VAR_12) {
  FUNC_1(VAR_10->dev,
   "Failed setting Tx-Vboost-Level for SuperSpeed\n");
  return VAR_12;
 }
 switch (VAR_10->extrefclk) {
 case 128:
  VAR_11 = VAR_5;
  break;
 case 130:
 case 131:
  VAR_11 = VAR_3;
  break;
 case 129:
 default:
  VAR_11 = VAR_4;
  break;
 }

 VAR_12 = FUNC_0(VAR_10,
    VAR_0,
    VAR_11);
 if (VAR_12)
  FUNC_1(VAR_10->dev,
   "Fail to set RxDet measurement time for SuperSpeed\n");

 return VAR_12;
}
