
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_ctrl_config {scalar_t__ id; int flags; int def; int step; int max; int min; int menu_skip_mask; } ;
struct v4l2_flash_ctrl_data {scalar_t__ cid; struct v4l2_ctrl_config config; } ;
struct v4l2_flash_config {int dummy; } ;
struct TYPE_8__ {int error; } ;
struct TYPE_7__ {TYPE_2__* ctrl_handler; int dev; } ;
struct v4l2_flash {TYPE_2__ hdl; TYPE_1__ sd; struct v4l2_ctrl** ctrls; } ;
struct v4l2_ctrl {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct v4l2_flash*,struct v4l2_flash_config*,struct v4l2_flash_ctrl_data*) ;
 struct v4l2_ctrl** FUNC_1 (int ,int,int,int ) ;
 struct v4l2_flash_ctrl_data* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct v4l2_flash_ctrl_data*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 struct v4l2_ctrl* FUNC_7 (TYPE_2__*,int *,scalar_t__,int ,int ,int ,int ) ;
 struct v4l2_ctrl* FUNC_8 (TYPE_2__*,int *,scalar_t__,int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct v4l2_flash *VAR_7,
    struct v4l2_flash_config *VAR_8)

{
 struct v4l2_flash_ctrl_data *VAR_9;
 struct v4l2_ctrl *VAR_10;
 struct v4l2_ctrl_config *VAR_11;
 int VAR_12, VAR_13, VAR_14 = 0;

 VAR_7->ctrls = FUNC_1(VAR_7->sd.dev,
     VAR_3 + 1,
     sizeof(*VAR_7->ctrls),
     VAR_1);
 if (!VAR_7->ctrls)
  return -VAR_0;


 VAR_9 = FUNC_2(VAR_2, sizeof(*VAR_9),
     VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_0(VAR_7, VAR_8, VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12)
  if (VAR_9[VAR_12].cid)
   ++VAR_14;

 FUNC_5(&VAR_7->hdl, VAR_14);

 for (VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12) {
  VAR_11 = &VAR_9[VAR_12].config;
  if (!VAR_9[VAR_12].cid)
   continue;

  if (VAR_11->id == VAR_4 ||
      VAR_11->id == VAR_5)
   VAR_10 = FUNC_8(&VAR_7->hdl,
      &VAR_6,
      VAR_11->id,
      VAR_11->max,
      VAR_11->menu_skip_mask,
      VAR_11->def);
  else
   VAR_10 = FUNC_7(&VAR_7->hdl,
      &VAR_6,
      VAR_11->id,
      VAR_11->min,
      VAR_11->max,
      VAR_11->step,
      VAR_11->def);

  if (VAR_10)
   VAR_10->flags |= VAR_11->flags;

  if (VAR_12 <= VAR_3)
   VAR_7->ctrls[VAR_12] = VAR_10;
 }

 FUNC_3(VAR_9);

 if (VAR_7->hdl.error) {
  VAR_13 = VAR_7->hdl.error;
  goto error_free_handler;
 }

 FUNC_6(&VAR_7->hdl);

 VAR_7->sd.ctrl_handler = &VAR_7->hdl;

 return 0;

error_free_handler:
 FUNC_4(&VAR_7->hdl);
 return VAR_13;
}
