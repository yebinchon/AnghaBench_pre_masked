
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_priv_tun_config {scalar_t__ tuner; int priv; } ;
struct analog_demod_ops {int (* set_config ) (TYPE_2__*,int ) ;} ;
struct TYPE_3__ {struct analog_demod_ops analog_ops; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct tuner {scalar_t__ type; TYPE_2__ fe; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 struct tuner* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0,
     const struct v4l2_priv_tun_config *VAR_1)
{
 struct tuner *VAR_2 = FUNC_2(VAR_0);
 struct analog_demod_ops *VAR_3 = &VAR_2->fe.ops.analog_ops;

 if (VAR_2->type != VAR_1->tuner)
  return 0;

 if (VAR_3->set_config) {
  VAR_3->set_config(&VAR_2->fe, VAR_1->priv);
  return 0;
 }

 FUNC_0("Tuner frontend module has no way to set config\n");
 return 0;
}
