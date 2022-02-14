
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct vpbe_layer {int usrs; int opslock; TYPE_2__ layer_info; struct vpbe_display* disp_dev; } ;
struct vpbe_display {struct osd_state* osd_device; struct vpbe_device* vpbe_dev; } ;
struct vpbe_device {int v4l2_dev; } ;
struct TYPE_3__ {int (* request_layer ) (struct osd_state*,int ) ;} ;
struct osd_state {TYPE_1__ ops; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct osd_state*,int ) ;
 int FUNC_3 (int,int ,int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;
 struct vpbe_layer* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_3)
{
 struct vpbe_layer *VAR_4 = FUNC_8(VAR_3);
 struct vpbe_display *VAR_5 = VAR_4->disp_dev;
 struct vpbe_device *VAR_6 = VAR_5->vpbe_dev;
 struct osd_state *VAR_7 = VAR_5->osd_device;
 int VAR_8;


 VAR_8 = FUNC_6(VAR_3);
 if (VAR_8) {
  FUNC_4(&VAR_6->v4l2_dev, "v4l2_fh_open failed\n");
  return VAR_8;
 }


 if (!FUNC_5(VAR_3))
  return VAR_8;

 if (!VAR_4->usrs) {
  if (FUNC_0(&VAR_4->opslock))
   return -VAR_1;

  VAR_8 = VAR_7->ops.request_layer(VAR_7,
      VAR_4->layer_info.id);
  FUNC_1(&VAR_4->opslock);
  if (VAR_8 < 0) {

   FUNC_4(&VAR_6->v4l2_dev,
    "Display Manager failed to allocate layer\n");
   FUNC_7(VAR_3);
   return -VAR_0;
  }
 }

 VAR_4->usrs++;
 FUNC_3(1, VAR_2, &VAR_6->v4l2_dev,
   "vpbe display device opened successfully\n");
 return 0;
}
