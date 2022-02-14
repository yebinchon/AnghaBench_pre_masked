
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int dummy; } ;
typedef enum i2c_status { ____Placeholder_i2c_status } i2c_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,unsigned char) ;
 int FUNC_1 (struct saa7134_dev*) ;
 int FUNC_2 (struct saa7134_dev*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct saa7134_dev*,int ) ;
 unsigned char FUNC_5 (int ) ;

__attribute__((used)) static inline int FUNC_6(struct saa7134_dev *VAR_3)
{
 enum i2c_status VAR_4;
 unsigned char VAR_5;

 FUNC_4(VAR_3,VAR_0);
 if (!FUNC_2(VAR_3))
  return -VAR_1;
 VAR_4 = FUNC_1(VAR_3);
 if (FUNC_3(VAR_4))
  return -VAR_1;
 VAR_5 = FUNC_5(VAR_2);
 FUNC_0(2, "i2c data <= 0x%x\n", VAR_5);
 return VAR_5;
}
