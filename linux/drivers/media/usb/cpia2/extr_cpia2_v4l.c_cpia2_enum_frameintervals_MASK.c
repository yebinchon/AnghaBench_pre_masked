
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_frmivalenum {scalar_t__ pixel_format; int index; scalar_t__ width; scalar_t__ height; int discrete; int type; } ;
struct file {int dummy; } ;
struct TYPE_8__ {scalar_t__ sensor_flags; } ;
struct TYPE_7__ {scalar_t__ device_type; } ;
struct TYPE_9__ {TYPE_2__ version; TYPE_1__ pnp_id; } ;
struct camera_data {TYPE_3__ params; } ;
struct TYPE_10__ {scalar_t__ width; scalar_t__ height; int period; } ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_4__* VAR_7 ;
 struct camera_data* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_8, void *VAR_9,
        struct v4l2_frmivalenum *VAR_10)
{
 struct camera_data *VAR_11 = FUNC_1(VAR_8);
 int VAR_12 = FUNC_0(VAR_7) - 1;
 int VAR_13;

 if (VAR_10->pixel_format != VAR_5 &&
     VAR_10->pixel_format != VAR_4)
  return -VAR_2;


 if (VAR_11->params.pnp_id.device_type == VAR_1 &&
     VAR_11->params.version.sensor_flags == VAR_0)
  VAR_12 -= 2;
 if (VAR_10->index > VAR_12)
  return -VAR_2;
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_6); VAR_13++)
  if (VAR_10->width == VAR_6[VAR_13].width &&
      VAR_10->height == VAR_6[VAR_13].height)
   break;
 if (VAR_13 == FUNC_0(VAR_6))
  return -VAR_2;
 VAR_10->type = VAR_3;
 VAR_10->discrete = VAR_7[VAR_10->index].period;
 return 0;
}
