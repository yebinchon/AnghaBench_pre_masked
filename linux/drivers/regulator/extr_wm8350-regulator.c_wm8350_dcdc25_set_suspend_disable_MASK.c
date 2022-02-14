
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
 int VAR_7 ;
 int VAR_8 ;


 struct wm8350* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct wm8350*,int ) ;
 int FUNC_3 (struct wm8350*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_9)
{
 struct wm8350 *VAR_10 = FUNC_0(VAR_9);
 int VAR_11 = FUNC_1(VAR_9);
 u16 VAR_12;

 switch (VAR_11) {
 case 129:
  VAR_12 = FUNC_2(VAR_10, VAR_7)
      & ~VAR_2;
  FUNC_3(VAR_10, VAR_7, VAR_12 |
      (VAR_1 << VAR_3));
  break;
 case 128:
  VAR_12 = FUNC_2(VAR_10, VAR_8)
      & ~VAR_5;
  FUNC_3(VAR_10, VAR_8, VAR_12 |
      (VAR_4 << VAR_6));
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
