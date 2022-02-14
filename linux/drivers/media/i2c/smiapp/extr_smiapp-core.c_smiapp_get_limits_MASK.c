
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct smiapp_sensor {int * limits; TYPE_1__* src; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int what; int addr; } ;
struct TYPE_3__ {int sd; } ;


 int FUNC_0 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct smiapp_sensor*,int ,int *) ;
 TYPE_2__* VAR_0 ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct smiapp_sensor *VAR_1, int const *VAR_2,
        unsigned int VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(&VAR_1->src->sd);
 unsigned int VAR_5;
 u32 VAR_6;
 int VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_7 = FUNC_1(
   VAR_1, VAR_0[VAR_2[VAR_5]].addr, &VAR_6);
  if (VAR_7)
   return VAR_7;
  VAR_1->limits[VAR_2[VAR_5]] = VAR_6;
  FUNC_0(&VAR_4->dev, "0x%8.8x \"%s\" = %u, 0x%x\n",
   VAR_0[VAR_2[VAR_5]].addr,
   VAR_0[VAR_2[VAR_5]].what, VAR_6, VAR_6);
 }

 return 0;
}
