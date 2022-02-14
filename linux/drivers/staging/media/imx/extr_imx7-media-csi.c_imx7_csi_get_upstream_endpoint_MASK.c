
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct media_entity {scalar_t__ function; } ;
struct v4l2_subdev {TYPE_3__* dev; struct media_entity entity; } ;
struct v4l2_fwnode_endpoint {int dummy; } ;
struct media_pad {int index; int entity; } ;
struct TYPE_5__ {struct media_entity entity; } ;
struct imx7_csi {TYPE_2__ sd; TYPE_1__* src_sd; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int of_node; } ;
struct TYPE_4__ {struct media_entity entity; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct media_pad* FUNC_0 (struct media_entity*,int ,int ,int) ;
 struct v4l2_subdev* FUNC_1 (int ) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*,int *) ;
 struct device_node* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_7(struct imx7_csi *VAR_4,
       struct v4l2_fwnode_endpoint *VAR_5,
       bool VAR_6)
{
 struct device_node *VAR_7, *VAR_8;
 struct media_entity *VAR_9;
 struct v4l2_subdev *VAR_10;
 struct media_pad *VAR_11;

 if (!VAR_4->src_sd)
  return -VAR_1;

 VAR_9 = &VAR_4->src_sd->entity;





 if (VAR_9->function != VAR_2 &&
     VAR_9->function != VAR_3)
  VAR_9 = &VAR_4->sd.entity;

skip_video_mux:

 VAR_11 = FUNC_0(VAR_9, 0, 0, 1);
 if (!VAR_11)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_11->entity);


 if (VAR_6 && VAR_9->function == VAR_3) {
  VAR_9 = &VAR_10->entity;
  goto skip_video_mux;
 }





 VAR_8 = FUNC_4(VAR_10->dev->of_node, VAR_11->index);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_8, ((void*)0));
 FUNC_5(VAR_8);
 if (!VAR_7)
  return -VAR_0;

 FUNC_6(FUNC_2(VAR_7), VAR_5);
 FUNC_5(VAR_7);

 return 0;
}
