
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct osd_layer_config {void* ypos; void* xpos; scalar_t__ ysize; scalar_t__ xsize; } ;
struct TYPE_4__ {struct osd_layer_config config; } ;
struct vpbe_layer {TYPE_2__ layer_info; } ;
struct vpbe_display {struct vpbe_device* vpbe_dev; } ;
struct TYPE_3__ {scalar_t__ yres; scalar_t__ xres; } ;
struct vpbe_device {int v4l2_dev; TYPE_1__ current_timings; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (int,int ,int *,char*,void*,void*) ;

__attribute__((used)) static void FUNC_2(struct vpbe_display *VAR_1,
   struct vpbe_layer *VAR_2,
   int VAR_3, int VAR_4)
{
 struct osd_layer_config *VAR_5 = &VAR_2->layer_info.config;
 struct vpbe_device *VAR_6 = VAR_1->vpbe_dev;

 VAR_5->xpos = FUNC_0((unsigned int)VAR_4,
   VAR_6->current_timings.xres - VAR_5->xsize);
 VAR_5->ypos = FUNC_0((unsigned int)VAR_3,
   VAR_6->current_timings.yres - VAR_5->ysize);

 FUNC_1(1, VAR_0, &VAR_6->v4l2_dev,
  "new xpos = %d, ypos = %d\n",
  VAR_5->xpos, VAR_5->ypos);
}
