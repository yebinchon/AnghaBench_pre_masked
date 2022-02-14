
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5670_reg {int address; int val; } ;
struct ov5670 {int sd; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct ov5670*,int ,int,int ) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ov5670 *VAR_0,
        const struct ov5670_reg *VAR_1, unsigned int VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(&VAR_0->sd);
 unsigned int VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = FUNC_1(VAR_0, VAR_1[VAR_4].address, 1, VAR_1[VAR_4].val);
  if (VAR_5) {
   FUNC_0(
    &VAR_3->dev,
    "Failed to write reg 0x%4.4x. error = %d\n",
    VAR_1[VAR_4].address, VAR_5);

   return VAR_5;
  }
 }

 return 0;
}
