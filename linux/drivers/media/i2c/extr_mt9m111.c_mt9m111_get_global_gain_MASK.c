
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m111 {int subdev; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mt9m111 *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_1(&VAR_1->subdev);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 >= 0)
  return (VAR_3 & 0x2f) * (1 << ((VAR_3 >> 10) & 1)) *
   (1 << ((VAR_3 >> 9) & 1));
 return VAR_3;
}
