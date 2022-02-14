
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct media_entity {scalar_t__ pipe; } ;
struct TYPE_2__ {int graph_mutex; } ;
struct imx_media_dev {TYPE_1__ md; int pipe; } ;


 int VAR_0 ;
 int FUNC_0 (struct media_entity*,int *) ;
 int FUNC_1 (struct media_entity*) ;
 int FUNC_2 (struct media_entity*) ;
 struct v4l2_subdev* FUNC_3 (struct media_entity*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (struct v4l2_subdev*,int ,int ,int) ;
 int VAR_2 ;

int FUNC_7(struct imx_media_dev *VAR_3,
      struct media_entity *VAR_4,
      bool VAR_5)
{
 struct v4l2_subdev *VAR_6;
 int VAR_7 = 0;

 if (!FUNC_2(VAR_4))
  return -VAR_0;
 VAR_6 = FUNC_3(VAR_4);

 FUNC_4(&VAR_3->md.graph_mutex);

 if (VAR_5) {
  VAR_7 = FUNC_0(VAR_4, &VAR_3->pipe);
  if (VAR_7)
   goto out;
  VAR_7 = FUNC_6(VAR_6, VAR_2, VAR_1, 1);
  if (VAR_7)
   FUNC_1(VAR_4);
 } else {
  FUNC_6(VAR_6, VAR_2, VAR_1, 0);
  if (VAR_4->pipe)
   FUNC_1(VAR_4);
 }

out:
 FUNC_5(&VAR_3->md.graph_mutex);
 return VAR_7;
}
