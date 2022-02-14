
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct smiapp_sensor {size_t* limits; TYPE_1__* src; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int what; int addr; } ;
struct TYPE_3__ {int sd; } ;


 int FUNC_0 (int *,char*,int ,int ,size_t,size_t) ;
 TYPE_2__* VAR_0 ;
 struct i2c_client* FUNC_1 (int *) ;

void FUNC_2(struct smiapp_sensor *VAR_1,
     u32 VAR_2, u32 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_1(&VAR_1->src->sd);

 FUNC_0(&VAR_4->dev, "quirk: 0x%8.8x \"%s\" = %d, 0x%x\n",
  VAR_0[VAR_2].addr,
  VAR_0[VAR_2].what, VAR_3, VAR_3);
 VAR_1->limits[VAR_2] = VAR_3;
}
