
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int dummy; } ;
typedef enum i2c_status { ____Placeholder_i2c_status } i2c_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct saa7134_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct saa7134_dev*,int ) ;
 int FUNC_5 (struct saa7134_dev*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct saa7134_dev *VAR_3)
{
 enum i2c_status VAR_4;
 int VAR_5;

 FUNC_0(2, "i2c reset\n");
 VAR_4 = FUNC_1(VAR_3);
 if (!FUNC_2(VAR_4))
  return 1;
 FUNC_5(VAR_3,VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = FUNC_1(VAR_3);
  if (!FUNC_2(VAR_4))
   break;
  FUNC_6(VAR_0);
 }
 if (VAR_1 == VAR_5)
  return 0;

 if (!FUNC_3(VAR_4))
  return 0;

 FUNC_4(VAR_3,VAR_2);
 return 1;
}
