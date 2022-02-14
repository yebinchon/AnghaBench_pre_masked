
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct osd_layer_config {scalar_t__ pixfmt; } ;
struct TYPE_8__ {int enable; int id; struct osd_layer_config config; } ;
struct vpbe_layer {TYPE_4__ layer_info; TYPE_2__* cur_frm; } ;
struct vpbe_display {int cbcr_ofst; struct vpbe_device* vpbe_dev; struct osd_state* osd_device; } ;
struct vpbe_device {int v4l2_dev; } ;
struct TYPE_7__ {int (* enable_layer ) (struct osd_state*,int ,int) ;int (* start_layer ) (struct osd_state*,int ,unsigned long,int ) ;} ;
struct osd_state {TYPE_3__ ops; } ;
struct TYPE_5__ {int vb2_buf; } ;
struct TYPE_6__ {TYPE_1__ vb; } ;


 scalar_t__ VAR_0 ;
 struct vpbe_layer* FUNC_0 (struct vpbe_display*,struct vpbe_layer*) ;
 int FUNC_1 (struct osd_state*,int ,unsigned long,int ) ;
 int FUNC_2 (struct osd_state*,int ,int) ;
 int FUNC_3 (struct osd_state*,int ,int) ;
 int FUNC_4 (int *,char*) ;
 unsigned long FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct vpbe_display *VAR_1,
   struct vpbe_layer *VAR_2)
{
 struct osd_layer_config *VAR_3 = &VAR_2->layer_info.config;
 struct osd_state *VAR_4 = VAR_1->osd_device;
 struct vpbe_device *VAR_5 = VAR_1->vpbe_dev;
 unsigned long VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(&VAR_2->cur_frm->vb.vb2_buf, 0);

 VAR_4->ops.start_layer(VAR_4,
        VAR_2->layer_info.id,
        VAR_6,
        VAR_1->cbcr_ofst);

 VAR_7 = VAR_4->ops.enable_layer(VAR_4,
    VAR_2->layer_info.id, 0);
 if (VAR_7 < 0) {
  FUNC_4(&VAR_5->v4l2_dev,
   "Error in enabling osd window layer 0\n");
  return -1;
 }


 VAR_2->layer_info.enable = 1;
 if (VAR_3->pixfmt == VAR_0) {
  struct vpbe_layer *VAR_8 =
   FUNC_0(VAR_1, VAR_2);

  VAR_7 = VAR_4->ops.enable_layer(VAR_4,
    VAR_8->layer_info.id, 1);
  if (VAR_7 < 0) {
   FUNC_4(&VAR_5->v4l2_dev,
    "Error in enabling osd window layer 1\n");
   return -1;
  }
  VAR_8->layer_info.enable = 1;
 }
 return 0;
}
