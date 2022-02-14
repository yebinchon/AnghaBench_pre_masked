
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int entity; } ;
struct smiapp_subdev {TYPE_3__ sd; int pads; int npads; } ;
struct smiapp_sensor {TYPE_1__* src; } ;
struct i2c_client {int dev; } ;
struct TYPE_6__ {int v4l2_dev; } ;
struct TYPE_5__ {TYPE_2__ sd; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 struct i2c_client* FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct smiapp_sensor *VAR_0,
      struct smiapp_subdev *VAR_1,
      struct smiapp_subdev *VAR_2,
      u16 VAR_3, u16 VAR_4, u32 VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_5(&VAR_0->src->sd);
 int VAR_7;

 if (!VAR_2)
  return 0;

 VAR_7 = FUNC_2(&VAR_1->sd.entity,
          VAR_1->npads, VAR_1->pads);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev,
   "media_entity_pads_init failed\n");
  return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_0->src->sd.v4l2_dev,
        &VAR_1->sd);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev,
   "v4l2_device_register_subdev failed\n");
  return VAR_7;
 }

 VAR_7 = FUNC_1(&VAR_1->sd.entity, VAR_3,
         &VAR_2->sd.entity, VAR_4,
         VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev,
   "media_create_pad_link failed\n");
  FUNC_4(&VAR_1->sd);
  return VAR_7;
 }

 return 0;
}
