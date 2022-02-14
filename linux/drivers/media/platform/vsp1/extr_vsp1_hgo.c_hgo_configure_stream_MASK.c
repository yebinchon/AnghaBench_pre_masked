
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vsp1_pipeline {int dummy; } ;
struct TYPE_11__ {int lock; } ;
struct TYPE_12__ {TYPE_5__ handler; TYPE_4__* num_bins; TYPE_2__* max_rgb; } ;
struct vsp1_hgo {int num_bins; scalar_t__ max_rgb; TYPE_6__ ctrls; } ;
struct vsp1_entity {int config; int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct v4l2_rect {unsigned int left; unsigned int top; unsigned int width; unsigned int height; } ;
struct TYPE_9__ {size_t val; } ;
struct TYPE_10__ {TYPE_3__ cur; } ;
struct TYPE_7__ {scalar_t__ val; } ;
struct TYPE_8__ {TYPE_1__ cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int* VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct vsp1_hgo* FUNC_2 (int *) ;
 struct v4l2_rect* FUNC_3 (struct vsp1_entity*,int ,int ,int ) ;
 int FUNC_4 (struct vsp1_hgo*,struct vsp1_dl_body*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct vsp1_entity *VAR_17,
     struct vsp1_pipeline *VAR_18,
     struct vsp1_dl_list *VAR_19,
     struct vsp1_dl_body *VAR_20)
{
 struct vsp1_hgo *VAR_21 = FUNC_2(&VAR_17->subdev);
 struct v4l2_rect *VAR_22;
 struct v4l2_rect *VAR_23;
 unsigned int VAR_24;
 unsigned int VAR_25;

 VAR_23 = FUNC_3(VAR_17, VAR_17->config,
          VAR_0, VAR_2);
 VAR_22 = FUNC_3(VAR_17, VAR_17->config,
      VAR_0,
      VAR_1);

 FUNC_4(VAR_21, VAR_20, VAR_11, VAR_12);

 FUNC_4(VAR_21, VAR_20, VAR_8,
         (VAR_23->left << VAR_9) |
         (VAR_23->top << VAR_10));
 FUNC_4(VAR_21, VAR_20, VAR_13,
         (VAR_23->width << VAR_14) |
         (VAR_23->height << VAR_15));

 FUNC_0(VAR_21->ctrls.handler.lock);
 VAR_21->max_rgb = VAR_21->ctrls.max_rgb->cur.val;
 if (VAR_21->ctrls.num_bins)
  VAR_21->num_bins = VAR_16[VAR_21->ctrls.num_bins->cur.val];
 FUNC_1(VAR_21->ctrls.handler.lock);

 VAR_24 = VAR_23->width * 2 / VAR_22->width / 3;
 VAR_25 = VAR_23->height * 2 / VAR_22->height / 3;
 FUNC_4(VAR_21, VAR_20, VAR_3,
         (VAR_21->num_bins == 256 ? VAR_6 : 0) |
         (VAR_21->max_rgb ? VAR_5 : 0) |
         (VAR_24 << VAR_4) |
         (VAR_25 << VAR_7));
}
