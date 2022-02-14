
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_8__ {int function; int * ops; } ;
struct TYPE_7__ {int flags; int ctrl_handler; TYPE_3__ entity; int * internal_ops; } ;
struct TYPE_9__ {int flags; } ;
struct imx355 {scalar_t__ link_def_freq; int mutex; TYPE_1__ sd; TYPE_4__ pad; int * cur_mode; TYPE_6__* hwcfg; } ;
struct i2c_client {int dev; } ;
struct TYPE_10__ {size_t nr_of_link_freqs; scalar_t__* link_freqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*,...) ;
 struct imx355* FUNC_2 (int *,int,int ) ;
 TYPE_6__* FUNC_3 (int *) ;
 int FUNC_4 (struct imx355*) ;
 int FUNC_5 (struct imx355*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__* VAR_12 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int,TYPE_4__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * VAR_13 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_14)
{
 struct imx355 *VAR_15;
 int VAR_16;
 u32 VAR_17;

 VAR_15 = FUNC_2(&VAR_14->dev, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_2;

 FUNC_9(&VAR_15->mutex);


 FUNC_15(&VAR_15->sd, VAR_14, &VAR_11);


 VAR_16 = FUNC_4(VAR_15);
 if (VAR_16) {
  FUNC_1(&VAR_14->dev, "failed to find sensor: %d", VAR_16);
  goto error_probe;
 }

 VAR_15->hwcfg = FUNC_3(&VAR_14->dev);
 if (!VAR_15->hwcfg) {
  FUNC_1(&VAR_14->dev, "failed to get hwcfg");
  VAR_16 = -VAR_1;
  goto error_probe;
 }

 VAR_15->link_def_freq = VAR_12[VAR_4];
 for (VAR_17 = 0; VAR_17 < VAR_15->hwcfg->nr_of_link_freqs; VAR_17++) {
  if (VAR_15->hwcfg->link_freqs[VAR_17] == VAR_15->link_def_freq) {
   FUNC_0(&VAR_14->dev, "link freq index %d matched", VAR_17);
   break;
  }
 }

 if (VAR_17 == VAR_15->hwcfg->nr_of_link_freqs) {
  FUNC_1(&VAR_14->dev, "no link frequency supported");
  VAR_16 = -VAR_0;
  goto error_probe;
 }


 VAR_15->cur_mode = &VAR_13[0];

 VAR_16 = FUNC_5(VAR_15);
 if (VAR_16) {
  FUNC_1(&VAR_14->dev, "failed to init controls: %d", VAR_16);
  goto error_probe;
 }


 VAR_15->sd.internal_ops = &VAR_9;
 VAR_15->sd.flags |= VAR_7 |
  VAR_8;
 VAR_15->sd.entity.ops = &VAR_10;
 VAR_15->sd.entity.function = VAR_5;


 VAR_15->pad.flags = VAR_6;
 VAR_16 = FUNC_7(&VAR_15->sd.entity, 1, &VAR_15->pad);
 if (VAR_16) {
  FUNC_1(&VAR_14->dev, "failed to init entity pads: %d", VAR_16);
  goto error_handler_free;
 }

 VAR_16 = FUNC_13(&VAR_15->sd);
 if (VAR_16 < 0)
  goto error_media_entity;





 FUNC_12(&VAR_14->dev);
 FUNC_10(&VAR_14->dev);
 FUNC_11(&VAR_14->dev);

 return 0;

error_media_entity:
 FUNC_6(&VAR_15->sd.entity);

error_handler_free:
 FUNC_14(VAR_15->sd.ctrl_handler);

error_probe:
 FUNC_8(&VAR_15->mutex);

 return VAR_16;
}
