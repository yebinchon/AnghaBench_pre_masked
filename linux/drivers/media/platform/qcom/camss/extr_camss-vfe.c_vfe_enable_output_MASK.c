
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct vfe_output {int state; int* wm_idx; int wm_num; int reg_update; int sof; scalar_t__ wait_reg_update; scalar_t__ wait_sof; scalar_t__ sequence; int ** buf; } ;
struct TYPE_6__ {int pix_mp; } ;
struct TYPE_7__ {TYPE_1__ fmt; } ;
struct TYPE_8__ {TYPE_2__ active_fmt; } ;
struct TYPE_9__ {int entity; } ;
struct vfe_line {int id; TYPE_3__ video_out; TYPE_4__ subdev; struct vfe_output output; } ;
struct vfe_hw_ops {int (* get_ub_size ) (int ) ;int (* reg_update ) (struct vfe_device*,int ) ;int (* set_camif_cmd ) (struct vfe_device*,int) ;int (* set_clamp_cfg ) (struct vfe_device*) ;int (* set_crop_cfg ) (struct vfe_device*,struct vfe_line*) ;int (* set_scale_cfg ) (struct vfe_device*,struct vfe_line*) ;int (* set_demux_cfg ) (struct vfe_device*,struct vfe_line*) ;int (* set_xbar_cfg ) (struct vfe_device*,struct vfe_output*,int) ;int (* set_realign_cfg ) (struct vfe_device*,struct vfe_line*,int) ;int (* set_camif_cfg ) (struct vfe_device*,struct vfe_line*) ;int (* set_module_cfg ) (struct vfe_device*,int) ;int (* enable_irq_pix_line ) (struct vfe_device*,int ,int ,int) ;int (* bus_reload_wm ) (struct vfe_device*,int) ;int (* wm_enable ) (struct vfe_device*,int,int) ;int (* wm_line_based ) (struct vfe_device*,int,int *,unsigned int,int) ;int (* wm_set_ub_cfg ) (struct vfe_device*,int,int,int) ;int (* wm_set_subsample ) (struct vfe_device*,int) ;int (* set_cgc_override ) (struct vfe_device*,int,int) ;int (* wm_frame_based ) (struct vfe_device*,int,int) ;int (* set_rdi_cid ) (struct vfe_device*,int ,int ) ;int (* bus_connect_wm_to_rdi ) (struct vfe_device*,int,int ) ;int (* enable_irq_wm_line ) (struct vfe_device*,int,int ,int) ;int (* reg_update_clear ) (struct vfe_device*,int ) ;} ;
struct vfe_device {int output_lock; TYPE_5__* camss; int id; struct vfe_hw_ops* ops; } ;
struct v4l2_subdev {int dummy; } ;
struct media_entity {int dummy; } ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;

 struct media_entity* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_5 ;
 struct v4l2_subdev* FUNC_2 (struct media_entity*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct vfe_device*,int,int) ;
 int FUNC_8 (struct vfe_device*,int) ;
 int FUNC_9 (struct vfe_device*,int,int) ;
 int FUNC_10 (struct vfe_device*,int) ;
 int FUNC_11 (struct vfe_device*,int,int,int) ;
 int FUNC_12 (struct vfe_device*,int,int *,unsigned int,int) ;
 int FUNC_13 (struct vfe_device*,int,int) ;
 int FUNC_14 (struct vfe_device*,int) ;
 int FUNC_15 (struct vfe_device*,int ,int ,int) ;
 int FUNC_16 (struct vfe_device*,int) ;
 int FUNC_17 (struct vfe_device*,int ) ;
 int FUNC_18 (struct vfe_device*,struct vfe_line*) ;
 int FUNC_19 (struct vfe_device*,struct vfe_line*,int) ;
 int FUNC_20 (struct vfe_device*,struct vfe_output*,int) ;
 int FUNC_21 (struct vfe_device*,struct vfe_line*) ;
 int FUNC_22 (struct vfe_device*,struct vfe_line*) ;
 int FUNC_23 (struct vfe_device*,struct vfe_line*) ;
 int FUNC_24 (struct vfe_device*) ;
 int FUNC_25 (struct vfe_device*,int) ;
 int FUNC_26 (struct vfe_device*,int ) ;
 int FUNC_27 (struct vfe_device*,int,int) ;
 int FUNC_28 (struct vfe_device*,int,int ,int) ;
 int FUNC_29 (struct vfe_device*,int,int ) ;
 int FUNC_30 (struct vfe_device*,int) ;
 int FUNC_31 (struct vfe_device*,int ,int ) ;
 int FUNC_32 (struct vfe_device*,int,int,int) ;
 int FUNC_33 (struct vfe_device*,int,int) ;
 struct vfe_device* FUNC_34 (struct vfe_line*) ;
 int FUNC_35 (struct v4l2_subdev*,struct media_entity*,int ,unsigned int*) ;
 void* FUNC_36 (struct vfe_output*) ;
 int FUNC_37 (struct vfe_device*,struct vfe_output*,int) ;
 int FUNC_38 (struct vfe_device*,struct vfe_output*,int ) ;

__attribute__((used)) static int FUNC_39(struct vfe_line *VAR_6)
{
 struct vfe_device *VAR_7 = FUNC_34(VAR_6);
 struct vfe_output *VAR_8 = &VAR_6->output;
 const struct vfe_hw_ops *VAR_9 = VAR_7->ops;
 struct media_entity *VAR_10;
 unsigned long VAR_11;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13;
 u16 VAR_14;

 VAR_14 = VAR_9->get_ub_size(VAR_7->id);
 if (!VAR_14)
  return -VAR_0;

 VAR_10 = FUNC_0(&VAR_6->subdev.entity);
 if (VAR_10) {
  struct v4l2_subdev *VAR_15 =
     FUNC_2(VAR_10);

  FUNC_35(VAR_15, VAR_10, VAR_5, &VAR_12);

  if (VAR_12 > VAR_1 - 1)
   VAR_12 = VAR_1 - 1;
 }

 FUNC_4(&VAR_7->output_lock, VAR_11);

 VAR_9->reg_update_clear(VAR_7, VAR_6->id);

 if (VAR_8->state != VAR_4) {
  FUNC_1(VAR_7->camss->dev, "Output is not in reserved state %d\n",
   VAR_8->state);
  FUNC_5(&VAR_7->output_lock, VAR_11);
  return -VAR_0;
 }
 VAR_8->state = VAR_3;

 VAR_8->buf[0] = FUNC_36(VAR_8);
 VAR_8->buf[1] = FUNC_36(VAR_8);

 if (!VAR_8->buf[0] && VAR_8->buf[1]) {
  VAR_8->buf[0] = VAR_8->buf[1];
  VAR_8->buf[1] = ((void*)0);
 }

 if (VAR_8->buf[0])
  VAR_8->state = 128;

 if (VAR_8->buf[1])
  VAR_8->state = 129;

 switch (VAR_8->state) {
 case 128:
  FUNC_37(VAR_7, VAR_8, 1 << VAR_12);
  break;
 case 129:
  FUNC_37(VAR_7, VAR_8, 3 << VAR_12);
  break;
 default:
  FUNC_37(VAR_7, VAR_8, 0);
  break;
 }

 VAR_8->sequence = 0;
 VAR_8->wait_sof = 0;
 VAR_8->wait_reg_update = 0;
 FUNC_3(&VAR_8->sof);
 FUNC_3(&VAR_8->reg_update);

 FUNC_38(VAR_7, VAR_8, 0);

 if (VAR_6->id != VAR_2) {
  VAR_9->set_cgc_override(VAR_7, VAR_8->wm_idx[0], 1);
  VAR_9->enable_irq_wm_line(VAR_7, VAR_8->wm_idx[0], VAR_6->id, 1);
  VAR_9->bus_connect_wm_to_rdi(VAR_7, VAR_8->wm_idx[0], VAR_6->id);
  VAR_9->wm_set_subsample(VAR_7, VAR_8->wm_idx[0]);
  VAR_9->set_rdi_cid(VAR_7, VAR_6->id, 0);
  VAR_9->wm_set_ub_cfg(VAR_7, VAR_8->wm_idx[0],
       (VAR_14 + 1) * VAR_8->wm_idx[0], VAR_14);
  VAR_9->wm_frame_based(VAR_7, VAR_8->wm_idx[0], 1);
  VAR_9->wm_enable(VAR_7, VAR_8->wm_idx[0], 1);
  VAR_9->bus_reload_wm(VAR_7, VAR_8->wm_idx[0]);
 } else {
  VAR_14 /= VAR_8->wm_num;
  for (VAR_13 = 0; VAR_13 < VAR_8->wm_num; VAR_13++) {
   VAR_9->set_cgc_override(VAR_7, VAR_8->wm_idx[VAR_13], 1);
   VAR_9->wm_set_subsample(VAR_7, VAR_8->wm_idx[VAR_13]);
   VAR_9->wm_set_ub_cfg(VAR_7, VAR_8->wm_idx[VAR_13],
        (VAR_14 + 1) * VAR_8->wm_idx[VAR_13],
        VAR_14);
   VAR_9->wm_line_based(VAR_7, VAR_8->wm_idx[VAR_13],
     &VAR_6->video_out.active_fmt.fmt.pix_mp,
     VAR_13, 1);
   VAR_9->wm_enable(VAR_7, VAR_8->wm_idx[VAR_13], 1);
   VAR_9->bus_reload_wm(VAR_7, VAR_8->wm_idx[VAR_13]);
  }
  VAR_9->enable_irq_pix_line(VAR_7, 0, VAR_6->id, 1);
  VAR_9->set_module_cfg(VAR_7, 1);
  VAR_9->set_camif_cfg(VAR_7, VAR_6);
  VAR_9->set_realign_cfg(VAR_7, VAR_6, 1);
  VAR_9->set_xbar_cfg(VAR_7, VAR_8, 1);
  VAR_9->set_demux_cfg(VAR_7, VAR_6);
  VAR_9->set_scale_cfg(VAR_7, VAR_6);
  VAR_9->set_crop_cfg(VAR_7, VAR_6);
  VAR_9->set_clamp_cfg(VAR_7);
  VAR_9->set_camif_cmd(VAR_7, 1);
 }

 VAR_9->reg_update(VAR_7, VAR_6->id);

 FUNC_5(&VAR_7->output_lock, VAR_11);

 return 0;
}
