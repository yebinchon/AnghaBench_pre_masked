
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_uif {scalar_t__ m3w_quirk; } ;
struct vsp1_pipeline {int dummy; } ;
struct vsp1_entity {int config; int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct v4l2_rect {unsigned int left; unsigned int width; unsigned int top; unsigned int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct vsp1_uif* FUNC_1 (int *) ;
 struct v4l2_rect* FUNC_2 (struct vsp1_entity*,int ,int ,int ) ;
 int FUNC_3 (struct vsp1_uif*,struct vsp1_dl_body*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct vsp1_entity *VAR_9,
     struct vsp1_pipeline *VAR_10,
     struct vsp1_dl_list *VAR_11,
     struct vsp1_dl_body *VAR_12)
{
 struct vsp1_uif *VAR_13 = FUNC_1(&VAR_9->subdev);
 const struct v4l2_rect *VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;

 FUNC_3(VAR_13, VAR_12, VAR_4,
         FUNC_0(9));

 VAR_14 = FUNC_2(VAR_9, VAR_9->config,
          VAR_0, VAR_1);

 VAR_15 = VAR_14->left;
 VAR_16 = VAR_14->width;


 if (VAR_13->m3w_quirk) {
  VAR_15 /= 2;
  VAR_16 /= 2;
 }

 FUNC_3(VAR_13, VAR_12, VAR_5, VAR_15);
 FUNC_3(VAR_13, VAR_12, VAR_6, VAR_14->top);
 FUNC_3(VAR_13, VAR_12, VAR_7, VAR_16);
 FUNC_3(VAR_13, VAR_12, VAR_8, VAR_14->height);

 FUNC_3(VAR_13, VAR_12, VAR_2,
         VAR_3);
}
