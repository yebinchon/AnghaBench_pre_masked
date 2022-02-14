
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct vpe_q_data {int width; int height; int nplanes; int* bytesperline; int* sizeimage; scalar_t__ flags; TYPE_2__ c_rect; int field; int colorspace; TYPE_3__* fmt; } ;
struct vpe_mmr_adb {int dummy; } ;
struct vpe_dev {int dev_mutex; int num_instances; int m2m_dev; } ;
struct TYPE_10__ {int m2m_ctx; struct v4l2_ctrl_handler* ctrl_handler; } ;
struct v4l2_ctrl_handler {int error; } ;
struct vpe_ctx {int load_mmrs; int desc_list; int mmr_adb; int sc_coeff_h; int sc_coeff_v; TYPE_4__ fh; int bufs_per_job; struct vpe_q_data* q_data; struct v4l2_ctrl_handler hdl; struct vpe_dev* dev; } ;
struct file {TYPE_4__* private_data; } ;
struct TYPE_9__ {TYPE_1__** vpdma_fmt; } ;
struct TYPE_7__ {int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vpe_ctx*) ;
 int FUNC_4 (struct vpe_ctx*) ;
 struct vpe_ctx* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_12 ;
 int FUNC_8 (struct vpe_ctx*) ;
 int FUNC_9 (struct vpe_ctx*) ;
 int FUNC_10 (struct vpe_ctx*) ;
 int FUNC_11 (struct vpe_ctx*) ;
 int FUNC_12 (struct v4l2_ctrl_handler*) ;
 int FUNC_13 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_14 (struct v4l2_ctrl_handler*) ;
 int FUNC_15 (struct v4l2_ctrl_handler*,int *,int *) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*,int ) ;
 int FUNC_19 (int ,struct vpe_ctx*,int *) ;
 int FUNC_20 (struct file*) ;
 struct vpe_dev* FUNC_21 (struct file*) ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (int *,int ,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int VAR_13 ;
 int FUNC_26 (struct vpe_dev*,char*,...) ;
 TYPE_3__* VAR_14 ;

__attribute__((used)) static int FUNC_27(struct file *VAR_15)
{
 struct vpe_dev *VAR_16 = FUNC_21(VAR_15);
 struct vpe_q_data *VAR_17;
 struct v4l2_ctrl_handler *VAR_18;
 struct vpe_ctx *VAR_19;
 int VAR_20;

 FUNC_26(VAR_16, "vpe_open\n");

 VAR_19 = FUNC_5(sizeof(*VAR_19), VAR_2);
 if (!VAR_19)
  return -VAR_0;

 VAR_19->dev = VAR_16;

 if (FUNC_6(&VAR_16->dev_mutex)) {
  VAR_20 = -VAR_1;
  goto free_ctx;
 }

 VAR_20 = FUNC_23(&VAR_19->desc_list, VAR_10,
   VAR_8);
 if (VAR_20 != 0)
  goto unlock;

 VAR_20 = FUNC_22(&VAR_19->mmr_adb, sizeof(struct vpe_mmr_adb));
 if (VAR_20 != 0)
  goto free_desc_list;

 VAR_20 = FUNC_22(&VAR_19->sc_coeff_h, VAR_5);
 if (VAR_20 != 0)
  goto free_mmr_adb;

 VAR_20 = FUNC_22(&VAR_19->sc_coeff_v, VAR_5);
 if (VAR_20 != 0)
  goto free_sc_h;

 FUNC_3(VAR_19);

 FUNC_18(&VAR_19->fh, FUNC_20(VAR_15));
 VAR_15->private_data = &VAR_19->fh;

 VAR_18 = &VAR_19->hdl;
 FUNC_13(VAR_18, 1);
 FUNC_15(VAR_18, &VAR_13, ((void*)0));
 if (VAR_18->error) {
  VAR_20 = VAR_18->error;
  goto exit_fh;
 }
 VAR_19->fh.ctrl_handler = VAR_18;
 FUNC_14(VAR_18);

 VAR_17 = &VAR_19->q_data[VAR_4];
 VAR_17->fmt = &VAR_14[2];
 VAR_17->width = 1920;
 VAR_17->height = 1080;
 VAR_17->nplanes = 1;
 VAR_17->bytesperline[VAR_11] = (VAR_17->width *
   VAR_17->fmt->vpdma_fmt[VAR_11]->depth) >> 3;
 VAR_17->sizeimage[VAR_11] = (VAR_17->bytesperline[VAR_11] *
   VAR_17->height);
 VAR_17->colorspace = VAR_6;
 VAR_17->field = VAR_7;
 VAR_17->c_rect.left = 0;
 VAR_17->c_rect.top = 0;
 VAR_17->c_rect.width = VAR_17->width;
 VAR_17->c_rect.height = VAR_17->height;
 VAR_17->flags = 0;

 VAR_19->q_data[VAR_3] = *VAR_17;

 FUNC_8(VAR_19);
 FUNC_10(VAR_19);
 FUNC_9(VAR_19);
 VAR_20 = FUNC_11(VAR_19);
 if (VAR_20)
  goto exit_fh;

 VAR_19->fh.m2m_ctx = FUNC_19(VAR_16->m2m_dev, VAR_19, &VAR_12);

 if (FUNC_0(VAR_19->fh.m2m_ctx)) {
  VAR_20 = FUNC_1(VAR_19->fh.m2m_ctx);
  goto exit_fh;
 }

 FUNC_16(&VAR_19->fh);






 if (FUNC_2(&VAR_16->num_instances) == 1)
  FUNC_26(VAR_16, "first instance created\n");

 VAR_19->bufs_per_job = VAR_9;

 VAR_19->load_mmrs = 1;

 FUNC_26(VAR_16, "created instance %p, m2m_ctx: %p\n",
  VAR_19, VAR_19->fh.m2m_ctx);

 FUNC_7(&VAR_16->dev_mutex);

 return 0;
exit_fh:
 FUNC_12(VAR_18);
 FUNC_17(&VAR_19->fh);
 FUNC_24(&VAR_19->sc_coeff_v);
free_sc_h:
 FUNC_24(&VAR_19->sc_coeff_h);
free_mmr_adb:
 FUNC_24(&VAR_19->mmr_adb);
free_desc_list:
 FUNC_25(&VAR_19->desc_list);
unlock:
 FUNC_7(&VAR_16->dev_mutex);
free_ctx:
 FUNC_4(VAR_19);
 return VAR_20;
}
