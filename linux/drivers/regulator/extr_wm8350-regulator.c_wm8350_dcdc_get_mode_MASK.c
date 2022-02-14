
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dev; } ;
struct regulator_dev {int dummy; } ;


 unsigned int VAR_0 ;
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
 int FUNC_0 (int ,char*,int,int,int,int) ;
 struct wm8350* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct wm8350*,int) ;

__attribute__((used)) static unsigned int FUNC_4(struct regulator_dev *VAR_12)
{
 struct wm8350 *VAR_13 = FUNC_1(VAR_12);
 int VAR_14 = FUNC_2(VAR_12);
 u16 VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19 = VAR_3;
 int VAR_20;

 switch (VAR_14) {
 case 131:
  VAR_20 = VAR_5;
  break;
 case 130:
  VAR_20 = VAR_7;
  break;
 case 129:
  VAR_20 = VAR_8;
  break;
 case 128:
  VAR_20 = VAR_9;
  break;
 default:
  return -VAR_0;
 }

 VAR_15 = 1 << (VAR_14 - 131);
 VAR_17 = FUNC_3(VAR_13, VAR_10) & VAR_15;
 VAR_18 = FUNC_3(VAR_13, VAR_20) & VAR_6;
 VAR_16 = FUNC_3(VAR_13, VAR_11) & VAR_15;

 FUNC_0(VAR_13->dev, "mask %x active %x sleep %x force %x",
  VAR_15, VAR_17, VAR_16, VAR_18);

 if (VAR_17 && !VAR_16) {
  if (VAR_18)
   VAR_19 = VAR_1;
  else
   VAR_19 = VAR_3;
 } else if (!VAR_17 && !VAR_16)
  VAR_19 = VAR_2;
 else if (VAR_16)
  VAR_19 = VAR_4;

 return VAR_19;
}
