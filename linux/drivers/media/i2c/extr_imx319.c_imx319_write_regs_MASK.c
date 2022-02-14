
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct imx319_reg {int address; int val; } ;
struct imx319 {int sd; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct imx319*,int ,int,int ) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct imx319 *VAR_0,
        const struct imx319_reg *VAR_1, u32 VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(&VAR_0->sd);
 int VAR_4;
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_1(VAR_0, VAR_1[VAR_5].address, 1, VAR_1[VAR_5].val);
  if (VAR_4) {
   FUNC_0(&VAR_3->dev,
         "write reg 0x%4.4x return err %d",
         VAR_1[VAR_5].address, VAR_4);
   return VAR_4;
  }
 }

 return 0;
}
