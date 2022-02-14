
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct analog_demod_ops {int (* standby ) (TYPE_2__*) ;} ;
struct TYPE_3__ {struct analog_demod_ops analog_ops; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct tuner {int mode; int standby; TYPE_2__ fe; } ;
typedef enum v4l2_tuner_type { ____Placeholder_v4l2_tuner_type } v4l2_tuner_type ;


 int VAR_0 ;
 int FUNC_0 (struct tuner*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct tuner *VAR_1, enum v4l2_tuner_type VAR_2)
{
 struct analog_demod_ops *VAR_3 = &VAR_1->fe.ops.analog_ops;

 if (VAR_2 != VAR_1->mode) {
  if (FUNC_0(VAR_1, VAR_2) == -VAR_0) {
   FUNC_1("Tuner doesn't support mode %d. Putting tuner to sleep\n",
      VAR_2);
   VAR_1->standby = 1;
   if (VAR_3->standby)
    VAR_3->standby(&VAR_1->fe);
   return -VAR_0;
  }
  VAR_1->mode = VAR_2;
  FUNC_1("Changing to mode %d\n", VAR_2);
 }
 return 0;
}
