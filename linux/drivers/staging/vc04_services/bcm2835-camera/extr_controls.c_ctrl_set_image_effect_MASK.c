
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vchiq_mmal_port {int dummy; } ;
struct v4l2_ctrl {scalar_t__ val; int id; } ;
struct mmal_parameter_imagefx_parameters {int num_effect_params; int v; int u; scalar_t__ enable; int effect; int * effect_parameter; } ;
struct bm2835_mmal_v4l2_ctrl {int dummy; } ;
struct bm2835_mmal_dev {struct mmal_parameter_imagefx_parameters colourfx; int v4l2_dev; int instance; TYPE_1__** component; } ;
typedef int imagefx ;
struct TYPE_5__ {scalar_t__ v4l2_effect; int num_effect_params; int v; int u; int col_fx_fixed_cbcr; scalar_t__ col_fx_enable; int * effect_params; int mmal_effect; } ;
struct TYPE_4__ {struct vchiq_mmal_port control; } ;


 int FUNC_0 (TYPE_2__*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,int *,char*,struct bm2835_mmal_v4l2_ctrl const*,int ,scalar_t__,int ,char*,int ,int ,int,int) ;
 TYPE_2__* VAR_6 ;
 int FUNC_2 (int ,struct vchiq_mmal_port*,int ,struct mmal_parameter_imagefx_parameters*,int) ;

__attribute__((used)) static int FUNC_3(struct bm2835_mmal_dev *VAR_7,
     struct v4l2_ctrl *VAR_8,
     const struct bm2835_mmal_v4l2_ctrl *VAR_9)
{
 int VAR_10 = -VAR_1;
 int VAR_11, VAR_12;
 struct vchiq_mmal_port *VAR_13;
 struct mmal_parameter_imagefx_parameters VAR_14;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_6); VAR_11++) {
  if (VAR_8->val == VAR_6[VAR_11].v4l2_effect) {
   VAR_14.effect =
    VAR_6[VAR_11].mmal_effect;
   VAR_14.num_effect_params =
    VAR_6[VAR_11].num_effect_params;

   if (VAR_14.num_effect_params > VAR_2)
    VAR_14.num_effect_params = VAR_2;

   for (VAR_12 = 0; VAR_12 < VAR_14.num_effect_params; VAR_12++)
    VAR_14.effect_parameter[VAR_12] =
     VAR_6[VAR_11].effect_params[VAR_12];

   VAR_7->colourfx.enable =
    VAR_6[VAR_11].col_fx_enable;
   if (!VAR_6[VAR_11].col_fx_fixed_cbcr) {
    VAR_7->colourfx.u =
     VAR_6[VAR_11].u;
    VAR_7->colourfx.v =
     VAR_6[VAR_11].v;
   }

   VAR_13 = &VAR_7->component[VAR_0]->control;

   VAR_10 = FUNC_2(
     VAR_7->instance, VAR_13,
     VAR_4,
     &VAR_14, sizeof(VAR_14));
   if (VAR_10)
    goto exit;

   VAR_10 = FUNC_2(
     VAR_7->instance, VAR_13,
     VAR_3,
     &VAR_7->colourfx, sizeof(VAR_7->colourfx));
  }
 }

exit:
 FUNC_1(1, VAR_5, &VAR_7->v4l2_dev,
   "mmal_ctrl:%p ctrl id:0x%x ctrl val:%d imagefx:0x%x color_effect:%s u:%d v:%d ret %d(%d)\n",
    VAR_9, VAR_8->id, VAR_8->val, VAR_14.effect,
    VAR_7->colourfx.enable ? "true" : "false",
    VAR_7->colourfx.u, VAR_7->colourfx.v,
    VAR_10, (VAR_10 == 0 ? 0 : -VAR_1));
 return (VAR_10 == 0 ? 0 : -VAR_1);
}
