
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 struct wm8350* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct wm8350*,int) ;
 int FUNC_3 (struct wm8350*,int,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_7)
{
 struct wm8350 *VAR_8 = FUNC_0(VAR_7);
 int VAR_9, VAR_10 = FUNC_1(VAR_7);
 u16 VAR_11;

 switch (VAR_10) {
 case 131:
  VAR_9 = VAR_3;
  break;
 case 130:
  VAR_9 = VAR_4;
  break;
 case 129:
  VAR_9 = VAR_5;
  break;
 case 128:
  VAR_9 = VAR_6;
  break;
 default:
  return -VAR_0;
 }


 VAR_11 = FUNC_2(VAR_8, VAR_9) & ~VAR_2;
 FUNC_3(VAR_8, VAR_9, VAR_11 | VAR_1);
 return 0;
}
