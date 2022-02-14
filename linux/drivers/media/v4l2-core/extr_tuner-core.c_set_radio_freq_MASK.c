
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct analog_demod_ops {int (* set_params ) (TYPE_2__*,struct analog_parameters*) ;} ;
struct TYPE_3__ {struct analog_demod_ops analog_ops; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct tuner {scalar_t__ type; unsigned int radio_freq; int standby; int audmode; TYPE_2__ fe; int std; int mode; } ;
struct i2c_client {int dummy; } ;
struct analog_parameters {unsigned int frequency; int audmode; int std; int mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,unsigned int,unsigned int,...) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (char*) ;
 int* VAR_1 ;
 int FUNC_3 (TYPE_2__*,struct analog_parameters*) ;
 struct tuner* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_2, unsigned int VAR_3)
{
 struct tuner *VAR_4 = FUNC_4(FUNC_1(VAR_2));
 struct analog_demod_ops *VAR_5 = &VAR_4->fe.ops.analog_ops;

 struct analog_parameters VAR_6 = {
  .mode = VAR_4->mode,
  .audmode = VAR_4->audmode,
  .std = VAR_4->std
 };

 if (VAR_4->type == VAR_0) {
  FUNC_2("tuner type not set\n");
  return;
 }
 if (((void*)0) == VAR_5->set_params) {
  FUNC_2("tuner has no way to set radio frequency\n");
  return;
 }
 if (VAR_3 < VAR_1[0] * 16000 || VAR_3 > VAR_1[1] * 16000) {
  FUNC_0("radio freq (%d.%02d) out of range (%d-%d)\n",
      VAR_3 / 16000, VAR_3 % 16000 * 100 / 16000,
      VAR_1[0], VAR_1[1]);


  if (VAR_3 < VAR_1[0] * 16000)
   VAR_3 = VAR_1[0] * 16000;
  else
   VAR_3 = VAR_1[1] * 16000;
 }
 VAR_6.frequency = VAR_3;
 FUNC_0("radio freq set to %d.%02d\n",
   VAR_3 / 16000, VAR_3 % 16000 * 100 / 16000);
 VAR_4->radio_freq = VAR_3;
 VAR_4->standby = 0;

 VAR_5->set_params(&VAR_4->fe, &VAR_6);




 VAR_4->audmode = VAR_6.audmode;
}
