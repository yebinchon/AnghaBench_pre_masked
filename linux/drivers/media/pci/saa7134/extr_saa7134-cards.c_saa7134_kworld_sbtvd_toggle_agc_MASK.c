
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int dummy; } ;
typedef enum tda18271_mode { ____Placeholder_tda18271_mode } tda18271_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline int FUNC_2(struct saa7134_dev *VAR_3,
        enum tda18271_mode VAR_4)
{

 switch (VAR_4) {
 case 129:
  FUNC_1(VAR_1 >> 2, 0x4000);
  FUNC_1(VAR_2 >> 2, 0x4000);
  FUNC_0(20);
  break;
 case 128:
  FUNC_1(VAR_1 >> 2, 0x14000);
  FUNC_1(VAR_2 >> 2, 0x14000);
  FUNC_0(20);
  FUNC_1(VAR_1 >> 2, 0x54000);
  FUNC_1(VAR_2 >> 2, 0x54000);
  FUNC_0(30);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
