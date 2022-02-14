
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct st_dwc3 {int dr_mode; int syscfg_reg_off; int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct st_dwc3 *VAR_10)
{
 u32 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_10->regmap, VAR_10->syscfg_reg_off, &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_11 &= VAR_1;

 switch (VAR_10->dr_mode) {
 case 128:

  VAR_11 &= ~(VAR_2
   | VAR_9 | FUNC_0(0x3)
   | VAR_8 | VAR_5
   | VAR_7 | VAR_4);







  VAR_11 |= VAR_3 | VAR_6;
  break;

 case 129:

  VAR_11 &= ~(VAR_3 | VAR_6
   | VAR_9 | FUNC_0(0x3)
   | VAR_8 | VAR_5
   | VAR_7 | VAR_4);
  VAR_11 |= VAR_2;
  break;

 default:
  FUNC_1(VAR_10->dev, "Unsupported mode of operation %d\n",
   VAR_10->dr_mode);
  return -VAR_0;
 }

 return FUNC_3(VAR_10->regmap, VAR_10->syscfg_reg_off, VAR_11);
}
