
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * ctrl_handler; } ;
struct TYPE_10__ {TYPE_2__ subdev; } ;
struct TYPE_9__ {TYPE_5__ entity; } ;
struct TYPE_8__ {int handler; void* num_bins; void* max_rgb; } ;
struct vsp1_hgo {int max_rgb; int num_bins; TYPE_4__ histo; TYPE_3__ ctrls; } ;
struct vsp1_device {TYPE_1__* info; int dev; } ;
struct TYPE_6__ {int gen; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct vsp1_hgo* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vsp1_hgo* FUNC_2 (int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (struct vsp1_device*,TYPE_4__*,int ,char*,int *,int ,int ,int ,int ) ;

struct vsp1_hgo *FUNC_7(struct vsp1_device *VAR_9)
{
 struct vsp1_hgo *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_9->dev, sizeof(*VAR_10), VAR_1);
 if (VAR_10 == ((void*)0))
  return FUNC_1(-VAR_0);


 FUNC_3(&VAR_10->ctrls.handler,
          VAR_9->info->gen == 3 ? 2 : 1);
 VAR_10->ctrls.max_rgb = FUNC_4(&VAR_10->ctrls.handler,
        &VAR_6, ((void*)0));
 if (VAR_9->info->gen == 3)
  VAR_10->ctrls.num_bins =
   FUNC_4(&VAR_10->ctrls.handler,
          &VAR_8, ((void*)0));

 VAR_10->max_rgb = 0;
 VAR_10->num_bins = 64;

 VAR_10->histo.entity.subdev.ctrl_handler = &VAR_10->ctrls.handler;


 VAR_11 = FUNC_6(VAR_9, &VAR_10->histo, VAR_4, "hgo",
      &VAR_5, VAR_7,
      FUNC_0(VAR_7),
      VAR_2, VAR_3);
 if (VAR_11 < 0) {
  FUNC_5(&VAR_10->histo.entity);
  return FUNC_1(VAR_11);
 }

 return VAR_10;
}
