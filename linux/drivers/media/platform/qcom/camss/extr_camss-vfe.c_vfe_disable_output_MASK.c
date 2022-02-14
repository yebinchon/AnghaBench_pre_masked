
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_output {int wait_sof; unsigned int wm_num; int wait_reg_update; int * wm_idx; int reg_update; int sof; } ;
struct vfe_line {int id; struct vfe_output output; } ;
struct vfe_hw_ops {int (* camif_wait_for_stop ) (struct vfe_device*,int ) ;int (* set_camif_cmd ) (struct vfe_device*,int ) ;int (* set_xbar_cfg ) (struct vfe_device*,struct vfe_output*,int ) ;int (* set_realign_cfg ) (struct vfe_device*,struct vfe_line*,int ) ;int (* set_module_cfg ) (struct vfe_device*,int ) ;int (* enable_irq_pix_line ) (struct vfe_device*,int ,int ,int ) ;int (* set_cgc_override ) (struct vfe_device*,int ,int ) ;int (* wm_line_based ) (struct vfe_device*,int ,int *,unsigned int,int ) ;int (* enable_irq_wm_line ) (struct vfe_device*,int ,int ,int ) ;int (* bus_disconnect_wm_from_rdi ) (struct vfe_device*,int ,int ) ;int (* wm_frame_based ) (struct vfe_device*,int ,int ) ;int (* reg_update ) (struct vfe_device*,int ) ;int (* wm_enable ) (struct vfe_device*,int ,int ) ;} ;
struct vfe_device {TYPE_1__* camss; int output_lock; struct vfe_hw_ops* ops; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct vfe_device*,int ,int ) ;
 int FUNC_5 (struct vfe_device*,int ) ;
 int FUNC_6 (struct vfe_device*,struct vfe_line*,int ) ;
 int FUNC_7 (struct vfe_device*,struct vfe_output*,int ) ;
 int FUNC_8 (struct vfe_device*,int ) ;
 int FUNC_9 (struct vfe_device*,int ) ;
 int FUNC_10 (struct vfe_device*,int ) ;
 int FUNC_11 (struct vfe_device*,int ,int ) ;
 int FUNC_12 (struct vfe_device*,int ,int ) ;
 int FUNC_13 (struct vfe_device*,int ,int ,int ) ;
 int FUNC_14 (struct vfe_device*,int ,int ) ;
 int FUNC_15 (struct vfe_device*,int ,int *,unsigned int,int ) ;
 int FUNC_16 (struct vfe_device*,int ,int ) ;
 int FUNC_17 (struct vfe_device*,int ,int ,int ) ;
 struct vfe_device* FUNC_18 (struct vfe_line*) ;
 unsigned long FUNC_19 (int *,int ) ;

__attribute__((used)) static int FUNC_20(struct vfe_line *VAR_2)
{
 struct vfe_device *VAR_3 = FUNC_18(VAR_2);
 struct vfe_output *VAR_4 = &VAR_2->output;
 const struct vfe_hw_ops *VAR_5 = VAR_3->ops;
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned int VAR_8;

 FUNC_2(&VAR_3->output_lock, VAR_6);

 VAR_4->wait_sof = 1;
 FUNC_3(&VAR_3->output_lock, VAR_6);

 VAR_7 = FUNC_19(&VAR_4->sof,
        FUNC_1(VAR_1));
 if (!VAR_7)
  FUNC_0(VAR_3->camss->dev, "VFE sof timeout\n");

 FUNC_2(&VAR_3->output_lock, VAR_6);
 for (VAR_8 = 0; VAR_8 < VAR_4->wm_num; VAR_8++)
  VAR_5->wm_enable(VAR_3, VAR_4->wm_idx[VAR_8], 0);

 VAR_5->reg_update(VAR_3, VAR_2->id);
 VAR_4->wait_reg_update = 1;
 FUNC_3(&VAR_3->output_lock, VAR_6);

 VAR_7 = FUNC_19(&VAR_4->reg_update,
        FUNC_1(VAR_1));
 if (!VAR_7)
  FUNC_0(VAR_3->camss->dev, "VFE reg update timeout\n");

 FUNC_2(&VAR_3->output_lock, VAR_6);

 if (VAR_2->id != VAR_0) {
  VAR_5->wm_frame_based(VAR_3, VAR_4->wm_idx[0], 0);
  VAR_5->bus_disconnect_wm_from_rdi(VAR_3, VAR_4->wm_idx[0],
      VAR_2->id);
  VAR_5->enable_irq_wm_line(VAR_3, VAR_4->wm_idx[0], VAR_2->id, 0);
  VAR_5->set_cgc_override(VAR_3, VAR_4->wm_idx[0], 0);
  FUNC_3(&VAR_3->output_lock, VAR_6);
 } else {
  for (VAR_8 = 0; VAR_8 < VAR_4->wm_num; VAR_8++) {
   VAR_5->wm_line_based(VAR_3, VAR_4->wm_idx[VAR_8], ((void*)0), VAR_8, 0);
   VAR_5->set_cgc_override(VAR_3, VAR_4->wm_idx[VAR_8], 0);
  }

  VAR_5->enable_irq_pix_line(VAR_3, 0, VAR_2->id, 0);
  VAR_5->set_module_cfg(VAR_3, 0);
  VAR_5->set_realign_cfg(VAR_3, VAR_2, 0);
  VAR_5->set_xbar_cfg(VAR_3, VAR_4, 0);

  VAR_5->set_camif_cmd(VAR_3, 0);
  FUNC_3(&VAR_3->output_lock, VAR_6);

  VAR_5->camif_wait_for_stop(VAR_3, VAR_3->camss->dev);
 }

 return 0;
}
