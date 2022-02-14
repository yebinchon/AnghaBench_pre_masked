
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct osd_layer_config {scalar_t__ pixfmt; } ;
struct TYPE_4__ {int id; struct osd_layer_config config; } ;
struct vpbe_layer {int opslock; TYPE_2__ layer_info; int usrs; struct vpbe_display* disp_dev; } ;
struct vpbe_display {scalar_t__ cbcr_ofst; struct osd_state* osd_device; struct vpbe_device* vpbe_dev; } ;
struct vpbe_device {int v4l2_dev; } ;
struct TYPE_3__ {int (* release_layer ) (struct osd_state*,int ) ;int (* disable_layer ) (struct osd_state*,int ) ;} ;
struct osd_state {TYPE_1__ ops; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct file*,int *) ;
 struct vpbe_layer* FUNC_1 (struct vpbe_display*,struct vpbe_layer*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct osd_state*,int ) ;
 int FUNC_5 (struct osd_state*,int ) ;
 int FUNC_6 (struct osd_state*,int ) ;
 int FUNC_7 (struct osd_state*,int ) ;
 int FUNC_8 (struct osd_state*,int ) ;
 int FUNC_9 (int,int ,int *,char*) ;
 struct vpbe_layer* FUNC_10 (struct file*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_2)
{
 struct vpbe_layer *VAR_3 = FUNC_10(VAR_2);
 struct osd_layer_config *VAR_4 = &VAR_3->layer_info.config;
 struct vpbe_display *VAR_5 = VAR_3->disp_dev;
 struct vpbe_device *VAR_6 = VAR_5->vpbe_dev;
 struct osd_state *VAR_7 = VAR_5->osd_device;

 FUNC_9(1, VAR_1, &VAR_6->v4l2_dev, "vpbe_display_release\n");

 FUNC_2(&VAR_3->opslock);

 VAR_7->ops.disable_layer(VAR_7,
   VAR_3->layer_info.id);

 VAR_3->usrs--;

 if (!VAR_3->usrs) {
  if (VAR_4->pixfmt == VAR_0) {
   struct vpbe_layer *VAR_8;
   VAR_8 =
   FUNC_1(VAR_5, VAR_3);
   VAR_7->ops.disable_layer(VAR_7,
     VAR_8->layer_info.id);
   VAR_7->ops.release_layer(VAR_7,
     VAR_8->layer_info.id);
  }
  VAR_7->ops.disable_layer(VAR_7,
    VAR_3->layer_info.id);
  VAR_7->ops.release_layer(VAR_7,
    VAR_3->layer_info.id);
 }

 FUNC_0(VAR_2, ((void*)0));
 FUNC_3(&VAR_3->opslock);

 VAR_5->cbcr_ofst = 0;

 return 0;
}
