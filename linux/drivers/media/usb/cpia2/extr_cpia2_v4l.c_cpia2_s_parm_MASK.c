
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_fract {int numerator; int denominator; } ;
struct v4l2_captureparm {struct v4l2_fract timeperframe; } ;
struct TYPE_7__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {TYPE_1__ parm; } ;
struct file {int dummy; } ;
struct TYPE_9__ {scalar_t__ sensor_flags; } ;
struct TYPE_8__ {scalar_t__ device_type; } ;
struct TYPE_10__ {TYPE_3__ version; TYPE_2__ pnp_id; } ;
struct camera_data {TYPE_4__ params; } ;
struct TYPE_11__ {int value; struct v4l2_fract period; } ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct file*,void*,struct v4l2_streamparm*) ;
 int FUNC_2 (struct camera_data*,int ) ;
 TYPE_5__* VAR_2 ;
 struct camera_data* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4, struct v4l2_streamparm *VAR_5)
{
 struct camera_data *VAR_6 = FUNC_3(VAR_3);
 struct v4l2_captureparm *VAR_7 = &VAR_5->parm.capture;
 struct v4l2_fract VAR_8 = VAR_7->timeperframe;
 int VAR_9 = FUNC_0(VAR_2) - 1;
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_10 || !VAR_8.denominator || !VAR_8.numerator)
  return VAR_10;


 if (VAR_6->params.pnp_id.device_type == VAR_1 &&
     VAR_6->params.version.sensor_flags == VAR_0)
  VAR_9 -= 2;
 for (VAR_11 = 0; VAR_11 <= VAR_9; VAR_11++) {
  struct v4l2_fract VAR_12 = VAR_8;
  struct v4l2_fract VAR_13 = VAR_2[VAR_11].period;

  VAR_12 *= VAR_13;
  VAR_13 *= VAR_12;
  if (VAR_12 >= VAR_13)
   break;
 }
 if (VAR_11 > VAR_9)
  VAR_11 = VAR_9;
 VAR_7->timeperframe = VAR_2[VAR_11].period;
 return FUNC_2(VAR_6, VAR_2[VAR_11].value);
}
