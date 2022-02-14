
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dm1105_dev {TYPE_1__* pdev; int i2c_adap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int*) ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static void FUNC_2(struct dm1105_dev *VAR_2, u8 *VAR_3)
{
 static u8 VAR_4[1] = { 0x28 };

 struct i2c_msg VAR_5[] = {
  {
   .addr = VAR_1 >> 1,
   .flags = 0,
   .buf = VAR_4,
   .len = 1
  }, {
   .addr = VAR_1 >> 1,
   .flags = VAR_0,
   .buf = VAR_3,
   .len = 6
  },
 };

 FUNC_1(&VAR_2->i2c_adap, VAR_5 , 2);
 FUNC_0(&VAR_2->pdev->dev, "MAC %pM\n", VAR_3);
}
