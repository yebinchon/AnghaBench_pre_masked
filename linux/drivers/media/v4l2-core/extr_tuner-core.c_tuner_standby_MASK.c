
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct analog_demod_ops {int (* standby ) (TYPE_2__*) ;} ;
struct TYPE_3__ {struct analog_demod_ops analog_ops; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct tuner {int standby; TYPE_2__ fe; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 struct tuner* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0)
{
 struct tuner *VAR_1 = FUNC_2(VAR_0);
 struct analog_demod_ops *VAR_2 = &VAR_1->fe.ops.analog_ops;

 FUNC_0("Putting tuner to sleep\n");
 VAR_1->standby = 1;
 if (VAR_2->standby)
  VAR_2->standby(&VAR_1->fe);
 return 0;
}
