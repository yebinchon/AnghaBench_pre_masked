
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct internal_subdev {int (* sync_unregister ) (struct v4l2_subdev*) ;} ;
struct imx_media_dev {int mutex; struct v4l2_subdev*** sync_sd; } ;


 int VAR_0 ;
 struct internal_subdev* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct v4l2_subdev*) ;

void FUNC_3(struct imx_media_dev *VAR_2)
{
 const struct internal_subdev *VAR_3;
 struct v4l2_subdev *VAR_4;
 int VAR_5, VAR_6;

 FUNC_0(&VAR_2->mutex);

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   VAR_3 = &VAR_1[VAR_6];
   VAR_4 = VAR_2->sync_sd[VAR_5][VAR_6];

   if (!VAR_4 || !VAR_3->sync_unregister)
    continue;

   FUNC_1(&VAR_2->mutex);
   VAR_3->sync_unregister(VAR_4);
   FUNC_0(&VAR_2->mutex);
  }
 }

 FUNC_1(&VAR_2->mutex);
}
