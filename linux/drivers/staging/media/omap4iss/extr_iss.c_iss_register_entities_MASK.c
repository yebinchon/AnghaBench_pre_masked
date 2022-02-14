
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct v4l2_subdev {int entity; struct iss_v4l2_subdevs_group* host_priv; } ;
struct media_entity {int dummy; } ;
struct iss_v4l2_subdevs_group {int interface; scalar_t__ subdevs; } ;
struct iss_platform_data {struct iss_v4l2_subdevs_group* subdevs; } ;
struct TYPE_11__ {TYPE_9__* mdev; } ;
struct TYPE_10__ {struct media_entity entity; } ;
struct TYPE_12__ {TYPE_1__ subdev; } ;
struct TYPE_13__ {int * ops; int hw_revision; int model; int dev; } ;
struct iss_device {TYPE_2__ v4l2_dev; int dev; TYPE_7__ csi2b; TYPE_7__ csi2a; int resizer; int ipipe; int ipipeif; TYPE_9__ media_dev; int revision; struct iss_platform_data* pdata; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;


 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_4 ;
 struct v4l2_subdev* FUNC_1 (struct iss_device*,scalar_t__) ;
 int FUNC_2 (struct iss_device*) ;
 int FUNC_3 (int *,int ,struct media_entity*,unsigned int,unsigned int) ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (TYPE_7__*,TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(struct iss_device *VAR_5)
{
 struct iss_platform_data *VAR_6 = VAR_5->pdata;
 struct iss_v4l2_subdevs_group *VAR_7;
 int VAR_8;

 VAR_5->media_dev.dev = VAR_5->dev;
 FUNC_9(VAR_5->media_dev.model, "TI OMAP4 ISS",
  sizeof(VAR_5->media_dev.model));
 VAR_5->media_dev.hw_revision = VAR_5->revision;
 VAR_5->media_dev.ops = &VAR_4;
 VAR_8 = FUNC_4(&VAR_5->media_dev);
 if (VAR_8 < 0) {
  FUNC_0(VAR_5->dev, "Media device registration failed (%d)\n",
   VAR_8);
  return VAR_8;
 }

 VAR_5->v4l2_dev.mdev = &VAR_5->media_dev;
 VAR_8 = FUNC_10(VAR_5->dev, &VAR_5->v4l2_dev);
 if (VAR_8 < 0) {
  FUNC_0(VAR_5->dev, "V4L2 device registration failed (%d)\n",
   VAR_8);
  goto done;
 }


 VAR_8 = FUNC_5(&VAR_5->csi2a, &VAR_5->v4l2_dev);
 if (VAR_8 < 0)
  goto done;

 VAR_8 = FUNC_5(&VAR_5->csi2b, &VAR_5->v4l2_dev);
 if (VAR_8 < 0)
  goto done;

 VAR_8 = FUNC_7(&VAR_5->ipipeif, &VAR_5->v4l2_dev);
 if (VAR_8 < 0)
  goto done;

 VAR_8 = FUNC_6(&VAR_5->ipipe, &VAR_5->v4l2_dev);
 if (VAR_8 < 0)
  goto done;

 VAR_8 = FUNC_8(&VAR_5->resizer, &VAR_5->v4l2_dev);
 if (VAR_8 < 0)
  goto done;


 for (VAR_7 = VAR_6->subdevs; VAR_7 && VAR_7->subdevs; ++VAR_7) {
  struct v4l2_subdev *VAR_9;
  struct media_entity *VAR_10;
  unsigned int VAR_11;
  unsigned int VAR_12;

  VAR_9 = FUNC_1(VAR_5, VAR_7->subdevs);
  if (!VAR_9)
   continue;

  VAR_9->host_priv = VAR_7;





  switch (VAR_7->interface) {
  case 129:
   VAR_10 = &VAR_5->csi2a.subdev.entity;
   VAR_12 = VAR_0;
   VAR_11 = VAR_3
         | VAR_2;
   break;

  case 128:
   VAR_10 = &VAR_5->csi2b.subdev.entity;
   VAR_12 = VAR_0;
   VAR_11 = VAR_3
         | VAR_2;
   break;

  default:
   FUNC_0(VAR_5->dev, "invalid interface type %u\n",
    VAR_7->interface);
   VAR_8 = -VAR_1;
   goto done;
  }

  VAR_8 = FUNC_3(&VAR_9->entity, 0, VAR_10, VAR_12,
         VAR_11);
  if (VAR_8 < 0)
   goto done;
 }

 VAR_8 = FUNC_11(&VAR_5->v4l2_dev);

done:
 if (VAR_8 < 0)
  FUNC_2(VAR_5);

 return VAR_8;
}
