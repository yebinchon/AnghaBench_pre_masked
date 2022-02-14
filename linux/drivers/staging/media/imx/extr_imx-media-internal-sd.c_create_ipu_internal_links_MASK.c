
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_pads; struct media_pad* pads; } ;
struct v4l2_subdev {TYPE_1__ entity; } ;
struct media_pad {int flags; } ;
struct internal_subdev {struct internal_pad* pad; } ;
struct internal_pad {int num_links; struct internal_link* link; } ;
struct internal_link {size_t remote; } ;
struct imx_media_dev {struct v4l2_subdev*** sync_sd; } ;


 int VAR_0 ;
 int FUNC_0 (struct imx_media_dev*,struct v4l2_subdev*,struct v4l2_subdev*,struct internal_link const*) ;

__attribute__((used)) static int FUNC_1(struct imx_media_dev *VAR_1,
         const struct internal_subdev *VAR_2,
         struct v4l2_subdev *VAR_3,
         int VAR_4)
{
 const struct internal_pad *VAR_5;
 const struct internal_link *VAR_6;
 struct media_pad *VAR_7;
 int VAR_8, VAR_9, VAR_10;


 for (VAR_8 = 0; VAR_8 < VAR_3->entity.num_pads; VAR_8++) {
  VAR_5 = &VAR_2->pad[VAR_8];
  VAR_7 = &VAR_3->entity.pads[VAR_8];

  if (!(VAR_7->flags & VAR_0))
   continue;

  for (VAR_9 = 0; VAR_9 < VAR_5->num_links; VAR_9++) {
   struct v4l2_subdev *VAR_11;

   VAR_6 = &VAR_5->link[VAR_9];
   VAR_11 = VAR_1->sync_sd[VAR_4][VAR_6->remote];

   VAR_10 = FUNC_0(VAR_1, VAR_3, VAR_11, VAR_6);
   if (VAR_10)
    return VAR_10;
  }
 }

 return 0;
}
