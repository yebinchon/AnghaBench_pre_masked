
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {scalar_t__ grp_id; TYPE_1__* dev; } ;
struct ipu_soc {int dummy; } ;
struct internal_subdev {scalar_t__ grp_id; int (* sync_unregister ) (struct v4l2_subdev*) ;struct v4l2_subdev* (* sync_register ) (int *,struct device*,struct ipu_soc*,scalar_t__) ;} ;
struct imx_media_dev {int mutex; struct v4l2_subdev*** sync_sd; int v4l2_dev; struct ipu_soc** ipu; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct v4l2_subdev*) ;
 int VAR_1 ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct imx_media_dev*,struct internal_subdev const*,struct v4l2_subdev*,int) ;
 struct ipu_soc* FUNC_3 (struct device*) ;
 int FUNC_4 (struct imx_media_dev*) ;
 struct internal_subdev* VAR_2 ;
 int FUNC_5 (struct ipu_soc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct v4l2_subdev* FUNC_8 (int *,struct device*,struct ipu_soc*,scalar_t__) ;
 int FUNC_9 (struct v4l2_subdev*) ;
 int FUNC_10 (int *,char*,...) ;

int FUNC_11(struct imx_media_dev *VAR_3,
         struct v4l2_subdev *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev->parent;
 const struct internal_subdev *VAR_6;
 struct v4l2_subdev *VAR_7;
 struct ipu_soc *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_3(VAR_5);
 if (!VAR_8) {
  FUNC_10(&VAR_3->v4l2_dev, "invalid IPU device!\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10 > 1) {
  FUNC_10(&VAR_3->v4l2_dev, "invalid IPU id %d!\n", VAR_10);
  return -VAR_0;
 }

 FUNC_6(&VAR_3->mutex);


 if (!VAR_3->ipu[VAR_10])
  VAR_3->ipu[VAR_10] = VAR_8;


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_6 = &VAR_2[VAR_9];

  VAR_7 = VAR_3->sync_sd[VAR_10][VAR_9];





  if (VAR_7 || !VAR_6->sync_register)
   continue;

  FUNC_7(&VAR_3->mutex);
  VAR_7 = VAR_6->sync_register(&VAR_3->v4l2_dev, VAR_5, VAR_8,
       VAR_6->grp_id);
  FUNC_6(&VAR_3->mutex);
  if (FUNC_0(VAR_7)) {
   VAR_11 = FUNC_1(VAR_7);
   goto err_unwind;
  }

  VAR_3->sync_sd[VAR_10][VAR_9] = VAR_7;
 }





 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_6 = &VAR_2[VAR_9];

  if (VAR_6->grp_id == VAR_4->grp_id) {
   VAR_7 = VAR_4;
  } else {
   VAR_7 = VAR_3->sync_sd[VAR_10][VAR_9];
   if (!VAR_7)
    continue;
  }

  VAR_11 = FUNC_2(VAR_3, VAR_6, VAR_7, VAR_10);
  if (VAR_11) {
   FUNC_7(&VAR_3->mutex);
   FUNC_4(VAR_3);
   return VAR_11;
  }
 }

 FUNC_7(&VAR_3->mutex);
 return 0;

err_unwind:
 while (--VAR_9 >= 0) {
  VAR_6 = &VAR_2[VAR_9];
  VAR_7 = VAR_3->sync_sd[VAR_10][VAR_9];
  if (!VAR_7 || !VAR_6->sync_unregister)
   continue;
  FUNC_7(&VAR_3->mutex);
  VAR_6->sync_unregister(VAR_7);
  FUNC_6(&VAR_3->mutex);
 }

 FUNC_7(&VAR_3->mutex);
 return VAR_11;
}
