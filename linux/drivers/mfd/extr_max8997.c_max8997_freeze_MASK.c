
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8997_dev {int * reg_dump; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct max8997_dev* FUNC_1 (struct i2c_client*) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (struct i2c_client*,int ,int *) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_3(VAR_5);
 struct max8997_dev *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++)
  FUNC_2(VAR_6, VAR_4[VAR_8],
    &VAR_7->reg_dump[VAR_8]);

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++)
  FUNC_2(VAR_6, VAR_3[VAR_8],
    &VAR_7->reg_dump[VAR_8 + VAR_1]);

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++)
  FUNC_2(VAR_6, VAR_2[VAR_8],
    &VAR_7->reg_dump[VAR_8 + VAR_1 +
    VAR_0]);

 return 0;
}
