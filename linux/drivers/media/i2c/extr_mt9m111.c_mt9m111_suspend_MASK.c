
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m111 {int gain; int subdev; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mt9m111*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 struct i2c_client* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mt9m111 *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_4(&VAR_6->subdev);
 int VAR_8;

 FUNC_3(VAR_6->gain, FUNC_0(VAR_6));

 VAR_8 = FUNC_2(VAR_5, VAR_3);
 if (!VAR_8)
  VAR_8 = FUNC_2(VAR_5, VAR_4 |
         VAR_2 |
         VAR_0);
 if (!VAR_8)
  VAR_8 = FUNC_1(VAR_5, VAR_1);

 return VAR_8;
}
