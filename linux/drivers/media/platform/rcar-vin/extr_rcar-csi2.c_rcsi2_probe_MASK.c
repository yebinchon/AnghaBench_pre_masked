
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct soc_device_attribute {int data; } ;
struct TYPE_7__ {int * ops; int function; } ;
struct TYPE_6__ {TYPE_4__ entity; int flags; int name; int * dev; int owner; } ;
struct rcar_csi2 {int notifier; int lanes; int * dev; TYPE_1__ subdev; TYPE_5__* pads; scalar_t__ stream_count; int lock; int info; } ;
struct platform_device {int dev; } ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 size_t VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 char* FUNC_2 (int *) ;
 struct rcar_csi2* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (TYPE_4__*,unsigned int,TYPE_5__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct platform_device*,struct rcar_csi2*) ;
 int FUNC_8 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (struct rcar_csi2*) ;
 int FUNC_10 (struct rcar_csi2*,struct platform_device*) ;
 int FUNC_11 (int ,int ,char*,char*,char*) ;
 struct soc_device_attribute* FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,int *) ;
 int FUNC_17 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_15)
{
 const struct soc_device_attribute *VAR_16;
 struct rcar_csi2 *VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 VAR_17 = FUNC_3(&VAR_15->dev, sizeof(*VAR_17), VAR_1);
 if (!VAR_17)
  return -VAR_0;

 VAR_17->info = FUNC_6(&VAR_15->dev);





 VAR_16 = FUNC_12(VAR_12);
 if (VAR_16)
  VAR_17->info = VAR_16->data;

 VAR_17->dev = &VAR_15->dev;

 FUNC_5(&VAR_17->lock);
 VAR_17->stream_count = 0;

 VAR_19 = FUNC_10(VAR_17, VAR_15);
 if (VAR_19) {
  FUNC_0(VAR_17->dev, "Failed to get resources\n");
  return VAR_19;
 }

 FUNC_7(VAR_15, VAR_17);

 VAR_19 = FUNC_9(VAR_17);
 if (VAR_19)
  return VAR_19;

 VAR_17->subdev.owner = VAR_9;
 VAR_17->subdev.dev = &VAR_15->dev;
 FUNC_17(&VAR_17->subdev, &VAR_14);
 FUNC_16(&VAR_17->subdev, &VAR_15->dev);
 FUNC_11(VAR_17->subdev.name, VAR_11, "%s %s",
   VAR_2, FUNC_2(&VAR_15->dev));
 VAR_17->subdev.flags = VAR_10;

 VAR_17->subdev.entity.function = VAR_3;
 VAR_17->subdev.entity.ops = &VAR_13;

 VAR_17->pads[VAR_7].flags = VAR_4;
 for (VAR_18 = VAR_8; VAR_18 < VAR_6; VAR_18++)
  VAR_17->pads[VAR_18].flags = VAR_5;

 VAR_19 = FUNC_4(&VAR_17->subdev.entity, VAR_6,
         VAR_17->pads);
 if (VAR_19)
  goto error;

 FUNC_8(&VAR_15->dev);

 VAR_19 = FUNC_15(&VAR_17->subdev);
 if (VAR_19 < 0)
  goto error;

 FUNC_1(VAR_17->dev, "%d lanes found\n", VAR_17->lanes);

 return 0;

error:
 FUNC_14(&VAR_17->notifier);
 FUNC_13(&VAR_17->notifier);

 return VAR_19;
}
