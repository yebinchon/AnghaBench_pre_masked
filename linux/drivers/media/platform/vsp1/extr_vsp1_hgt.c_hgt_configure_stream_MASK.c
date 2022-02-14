
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct vsp1_pipeline {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct vsp1_hgt {unsigned int* hue_areas; TYPE_1__ ctrls; } ;
struct vsp1_entity {int config; int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct v4l2_rect {unsigned int left; unsigned int top; unsigned int width; unsigned int height; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct vsp1_hgt* FUNC_3 (int *) ;
 struct v4l2_rect* FUNC_4 (struct vsp1_entity*,int ,int ,int ) ;
 int FUNC_5 (struct vsp1_hgt*,struct vsp1_dl_body*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct vsp1_entity *VAR_17,
     struct vsp1_pipeline *VAR_18,
     struct vsp1_dl_list *VAR_19,
     struct vsp1_dl_body *VAR_20)
{
 struct vsp1_hgt *VAR_21 = FUNC_3(&VAR_17->subdev);
 struct v4l2_rect *VAR_22;
 struct v4l2_rect *VAR_23;
 unsigned int VAR_24;
 unsigned int VAR_25;
 u8 VAR_26;
 u8 VAR_27;
 unsigned int VAR_28;

 VAR_23 = FUNC_4(VAR_17, VAR_17->config,
          VAR_1, VAR_3);
 VAR_22 = FUNC_4(VAR_17, VAR_17->config,
      VAR_1,
      VAR_2);

 FUNC_5(VAR_21, VAR_20, VAR_12, VAR_13);

 FUNC_5(VAR_21, VAR_20, VAR_9,
         (VAR_23->left << VAR_10) |
         (VAR_23->top << VAR_11));
 FUNC_5(VAR_21, VAR_20, VAR_14,
         (VAR_23->width << VAR_15) |
         (VAR_23->height << VAR_16));

 FUNC_1(VAR_21->ctrls.lock);
 for (VAR_28 = 0; VAR_28 < VAR_0; ++VAR_28) {
  VAR_26 = VAR_21->hue_areas[VAR_28*2 + 0];
  VAR_27 = VAR_21->hue_areas[VAR_28*2 + 1];
  FUNC_5(VAR_21, VAR_20, FUNC_0(VAR_28),
          (VAR_26 << VAR_4) |
          (VAR_27 << VAR_5));
 }
 FUNC_2(VAR_21->ctrls.lock);

 VAR_24 = VAR_23->width * 2 / VAR_22->width / 3;
 VAR_25 = VAR_23->height * 2 / VAR_22->height / 3;
 FUNC_5(VAR_21, VAR_20, VAR_6,
         (VAR_24 << VAR_7) |
         (VAR_25 << VAR_8));
}
