
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t num_pads; TYPE_1__* pads; } ;
struct v4l2_subdev {TYPE_3__ entity; int name; int v4l2_dev; } ;
struct v4l2_fwnode_link {size_t local_port; int remote_port; int remote_node; } ;
struct imx_media_dev {int dummy; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_subdev* FUNC_0 (struct imx_media_dev*,int ) ;
 int FUNC_1 (TYPE_3__*,int,TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int ,char*,int ,int,int ,int) ;

__attribute__((used)) static int FUNC_4(struct imx_media_dev *VAR_2,
     struct v4l2_subdev *VAR_3,
     struct v4l2_fwnode_link *VAR_4)
{
 struct v4l2_subdev *VAR_5, *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_4->local_port >= VAR_3->entity.num_pads)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_4->remote_node);
 if (!VAR_5)
  return 0;

 if (VAR_3->entity.pads[VAR_4->local_port].flags & VAR_1) {
  VAR_6 = VAR_5;
  VAR_8 = VAR_4->remote_port;
  VAR_7 = VAR_3;
  VAR_9 = VAR_4->local_port;
 } else {
  VAR_6 = VAR_3;
  VAR_8 = VAR_4->local_port;
  VAR_7 = VAR_5;
  VAR_9 = VAR_4->remote_port;
 }


 if (FUNC_2(&VAR_6->entity.pads[VAR_8],
       &VAR_7->entity.pads[VAR_9]))
  return 0;

 FUNC_3(VAR_3->v4l2_dev, "%s:%d -> %s:%d\n",
    VAR_6->name, VAR_8, VAR_7->name, VAR_9);

 return FUNC_1(&VAR_6->entity, VAR_8,
         &VAR_7->entity, VAR_9, 0);
}
