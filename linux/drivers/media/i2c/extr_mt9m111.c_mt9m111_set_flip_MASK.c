
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt9m111 {TYPE_1__* ctx; int subdev; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int read_mode; } ;


 int FUNC_0 (struct i2c_client*,int ,int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mt9m111 *VAR_0, int VAR_1, int VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(&VAR_0->subdev);
 int VAR_4;

 if (VAR_1)
  VAR_4 = FUNC_1(VAR_3, VAR_0->ctx->read_mode, VAR_2);
 else
  VAR_4 = FUNC_0(VAR_3, VAR_0->ctx->read_mode, VAR_2);

 return VAR_4;
}
