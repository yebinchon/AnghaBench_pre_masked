
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_client {int addr; int adapter; } ;
struct adv76xx_platform_data {scalar_t__* i2c_addresses; } ;
struct adv76xx_state {struct adv76xx_platform_data pdata; } ;
struct TYPE_2__ {int default_addr; int name; } ;


 int FUNC_0 (struct i2c_client*) ;
 TYPE_1__* VAR_0 ;
 struct i2c_client* FUNC_1 (struct i2c_client*,int ,int ) ;
 struct i2c_client* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct v4l2_subdev*,unsigned int,int) ;
 struct adv76xx_state* FUNC_4 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static struct i2c_client *FUNC_6(struct v4l2_subdev *VAR_1,
            unsigned int VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_5(VAR_1);
 struct adv76xx_state *VAR_4 = FUNC_4(VAR_1);
 struct adv76xx_platform_data *VAR_5 = &VAR_4->pdata;
 unsigned int VAR_6 = 0xf2 + VAR_2;
 struct i2c_client *VAR_7;

 if (VAR_5 && VAR_5->i2c_addresses[VAR_2])
  VAR_7 = FUNC_2(VAR_3->adapter,
        VAR_5->i2c_addresses[VAR_2]);
 else
  VAR_7 = FUNC_1(VAR_3,
    VAR_0[VAR_2].name,
    VAR_0[VAR_2].default_addr);

 if (!FUNC_0(VAR_7))
  FUNC_3(VAR_1, VAR_6, VAR_7->addr << 1);

 return VAR_7;
}
