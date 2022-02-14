
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int denominator; int numerator; } ;
struct TYPE_6__ {int readbuffers; TYPE_1__ timeperframe; } ;
struct TYPE_5__ {TYPE_3__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;
struct v4l2_fract {int denominator; int numerator; } ;
struct file {int dummy; } ;
struct cobalt_stream {int timings; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct v4l2_fract FUNC_0 (int *) ;
 struct cobalt_stream* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_streamparm *VAR_4)
{
 struct cobalt_stream *VAR_5 = FUNC_1(VAR_2);
 struct v4l2_fract VAR_6;

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 VAR_6 = FUNC_0(&VAR_5->timings);
 VAR_4->parm.capture.timeperframe.numerator = VAR_6.numerator;
 VAR_4->parm.capture.timeperframe.denominator = VAR_6.denominator;
 VAR_4->parm.capture.readbuffers = 3;
 return 0;
}
