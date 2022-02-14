
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct media_entity {scalar_t__ function; } ;
struct v4l2_subdev {scalar_t__ grp_id; TYPE_2__* dev; struct media_entity entity; } ;
struct v4l2_fwnode_endpoint {int dummy; } ;
struct media_pad {int index; int entity; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct media_entity entity; } ;
struct csi_priv {TYPE_1__ sd; struct v4l2_subdev* src_sd; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 scalar_t__ VAR_5 ;
 struct media_pad* FUNC_2 (struct media_entity*,int ,int ,int) ;
 struct v4l2_subdev* FUNC_3 (struct media_entity*,scalar_t__,int) ;
 struct v4l2_subdev* FUNC_4 (int ) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (struct device_node*,int *) ;
 struct device_node* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_10(struct csi_priv *VAR_6,
         struct v4l2_fwnode_endpoint *VAR_7)
{
 struct device_node *VAR_8, *VAR_9;
 struct media_entity *VAR_10;
 struct v4l2_subdev *VAR_11;
 struct media_pad *VAR_12;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 if (!VAR_6->src_sd)
  return -VAR_3;

 VAR_11 = VAR_6->src_sd;
 VAR_10 = &VAR_11->entity;

 if (VAR_10->function == VAR_5) {





  VAR_11 = FUNC_3(VAR_10, VAR_4,
            1);
  if (!FUNC_1(VAR_11))
   VAR_10 = &VAR_11->entity;
 }





 if (VAR_10->function != VAR_5 &&
     VAR_11->grp_id != VAR_4)
  VAR_10 = &VAR_6->sd.entity;


 VAR_12 = FUNC_2(VAR_10, 0, 0, 1);
 if (!VAR_12)
  return -VAR_1;

 VAR_11 = FUNC_4(VAR_12->entity);





 VAR_9 = FUNC_7(VAR_11->dev->of_node, VAR_12->index);
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_6(VAR_9, ((void*)0));
 FUNC_8(VAR_9);
 if (!VAR_8)
  return -VAR_1;

 FUNC_9(FUNC_5(VAR_8), VAR_7);
 FUNC_8(VAR_8);

 return 0;
}
