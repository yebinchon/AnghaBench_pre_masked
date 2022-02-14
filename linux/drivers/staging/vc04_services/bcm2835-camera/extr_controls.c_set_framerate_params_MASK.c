
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int num; int den; } ;
struct TYPE_8__ {int num; int den; } ;
struct mmal_parameter_fps_range {TYPE_4__ fps_high; TYPE_3__ fps_low; } ;
struct TYPE_6__ {int denominator; int numerator; } ;
struct TYPE_7__ {TYPE_1__ timeperframe; } ;
struct bm2835_mmal_dev {scalar_t__ exposure_mode_active; int v4l2_dev; TYPE_5__** component; int instance; TYPE_2__ capture; scalar_t__ exp_auto_priority; } ;
typedef int fps_range ;
struct TYPE_10__ {int * output; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int *,char*,int,...) ;
 int FUNC_1 (int ,int *,int ,struct mmal_parameter_fps_range*,int) ;

int FUNC_2(struct bm2835_mmal_dev *VAR_7)
{
 struct mmal_parameter_fps_range VAR_8;
 int VAR_9;

 if ((VAR_7->exposure_mode_active != VAR_5) &&
     (VAR_7->exp_auto_priority)) {



  VAR_8.fps_low.num = 1;
  VAR_8.fps_low.den = 1;
  VAR_8.fps_high.num = VAR_7->capture.timeperframe.denominator;
  VAR_8.fps_high.den = VAR_7->capture.timeperframe.numerator;
 } else {

  VAR_8.fps_low.num = VAR_8.fps_high.num =
   VAR_7->capture.timeperframe.denominator;
  VAR_8.fps_low.den = VAR_8.fps_high.den =
   VAR_7->capture.timeperframe.numerator;
 }

 FUNC_0(1, VAR_6, &VAR_7->v4l2_dev,
   "Set fps range to %d/%d to %d/%d\n",
   VAR_8.fps_low.num,
   VAR_8.fps_low.den,
   VAR_8.fps_high.num,
   VAR_8.fps_high.den);

 VAR_9 = FUNC_1(VAR_7->instance,
         &VAR_7->component[VAR_3]->output[VAR_1],
         VAR_4,
         &VAR_8, sizeof(VAR_8));
 VAR_9 += FUNC_1(VAR_7->instance,
          &VAR_7->component[VAR_3]->output[VAR_2],
          VAR_4,
          &VAR_8, sizeof(VAR_8));
 VAR_9 += FUNC_1(VAR_7->instance,
          &VAR_7->component[VAR_3]->output[VAR_0],
          VAR_4,
          &VAR_8, sizeof(VAR_8));
 if (VAR_9)
  FUNC_0(0, VAR_6, &VAR_7->v4l2_dev,
    "Failed to set fps ret %d\n", VAR_9);

 return VAR_9;
}
