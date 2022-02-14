
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tuner_setup {scalar_t__ type; int mode_mask; int addr; } ;
struct TYPE_5__ {int release; } ;
struct go7007 {int i2c_adapter_online; scalar_t__ board_id; scalar_t__ tuner_type; int audio_enabled; TYPE_1__* board_info; scalar_t__ channel_number; int sd_video; TYPE_2__ v4l2_dev; int i2c_adapter; int hw_lock; int dev; int name; } ;
struct TYPE_4__ {int flags; int * i2c_devs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct go7007*) ;
 int FUNC_2 (struct go7007*) ;
 int VAR_6 ;
 int FUNC_3 (struct go7007*) ;
 int FUNC_4 (struct go7007*) ;
 int FUNC_5 (struct go7007*) ;
 int FUNC_6 (struct go7007*,int,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (TYPE_2__*,int ,int ,int ,struct tuner_setup*) ;
 int FUNC_12 (int ,TYPE_2__*) ;
 int FUNC_13 (int ,int ,int ,int ,int ,scalar_t__) ;
 int VAR_10 ;

int FUNC_14(struct go7007 *VAR_11, unsigned VAR_12)
{
 int VAR_13, VAR_14;

 FUNC_0(VAR_11->dev, "go7007: registering new %s\n", VAR_11->name);

 VAR_11->v4l2_dev.release = VAR_6;
 VAR_14 = FUNC_12(VAR_11->dev, &VAR_11->v4l2_dev);
 if (VAR_14 < 0)
  return VAR_14;

 FUNC_9(&VAR_11->hw_lock);
 VAR_14 = FUNC_2(VAR_11);
 FUNC_10(&VAR_11->hw_lock);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_4(VAR_11);
 if (VAR_14 < 0)
  return VAR_14;

 if (!VAR_11->i2c_adapter_online &&
   VAR_11->board_info->flags & VAR_4) {
  VAR_14 = FUNC_1(VAR_11);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_11->i2c_adapter_online = 1;
 }
 if (VAR_11->i2c_adapter_online) {
  if (VAR_11->board_id == VAR_2) {

   FUNC_6(VAR_11, 0x3c82, 0x0009);
   FUNC_8(50);
   FUNC_6(VAR_11, 0x3c82, 0x000d);
  }
  for (VAR_13 = 0; VAR_13 < VAR_12; ++VAR_13)
   FUNC_7(&VAR_11->i2c_adapter, &VAR_11->board_info->i2c_devs[VAR_13]);

  if (VAR_11->tuner_type >= 0) {
   struct tuner_setup VAR_15 = {
    .addr = VAR_0,
    .type = VAR_11->tuner_type,
    .mode_mask = VAR_5,
   };

   FUNC_11(&VAR_11->v4l2_dev, 0, VAR_9,
    VAR_8, &VAR_15);
  }
  if (VAR_11->board_id == VAR_1)
   FUNC_13(VAR_11->sd_video, VAR_10, VAR_7,
     0, 0, VAR_11->channel_number + 1);
 }

 VAR_14 = FUNC_5(VAR_11);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_11->board_info->flags & VAR_3) {
  VAR_11->audio_enabled = 1;
  FUNC_3(VAR_11);
 }
 return 0;
}
