
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int dummy; } ;
typedef enum tda18271_mode { ____Placeholder_tda18271_mode } tda18271_mode ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct saa7134_dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct saa7134_dev *VAR_1,
         enum tda18271_mode VAR_2)
{
 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_1, 18, 0);
  break;
 case 128:
  FUNC_1(VAR_1, 18, 1);
  FUNC_0(30);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
