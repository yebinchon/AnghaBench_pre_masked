
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int dummy; } ;
typedef enum i2c_status { ____Placeholder_i2c_status } i2c_status ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int,int) ;
 int * VAR_1 ;

__attribute__((used)) static inline void FUNC_2(struct saa7134_dev *VAR_2,
      enum i2c_status VAR_3)
{
 FUNC_0(2, "i2c stat => %s\n", VAR_1[VAR_3]);
 FUNC_1(VAR_0,0x0f,VAR_3);
}
