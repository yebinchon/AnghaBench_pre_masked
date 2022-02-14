
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mxl111sf_reg_ctrl_info {int member_0; int member_1; int member_2; } ;
struct mxl111sf_demod_state {int dummy; } ;
struct TYPE_3__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_4__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct mxl111sf_demod_state* demodulator_priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mxl111sf_demod_state*,struct mxl111sf_reg_ctrl_info*) ;
 int FUNC_2 (struct mxl111sf_demod_state*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_0)
{
 struct mxl111sf_demod_state *VAR_1 = VAR_0->demodulator_priv;
 int VAR_2 = 0;

 struct mxl111sf_reg_ctrl_info VAR_3[] = {
  {0x00, 0xff, 0x01},
  {0x40, 0xff, 0x05},
  {0x40, 0xff, 0x01},
  {0x41, 0xff, 0xca},
  {0x41, 0xff, 0xc0},
  {0x00, 0xff, 0x00},
  {0, 0, 0}
 };

 FUNC_3("()");

 if (VAR_0->ops.tuner_ops.set_params) {
  VAR_2 = VAR_0->ops.tuner_ops.set_params(VAR_0);
  if (FUNC_4(VAR_2))
   goto fail;
  FUNC_0(50);
 }
 VAR_2 = FUNC_1(VAR_1, VAR_3);
 FUNC_4(VAR_2);
 FUNC_0(50);
 VAR_2 = FUNC_2(VAR_1);
 FUNC_4(VAR_2);
 FUNC_0(100);
fail:
 return VAR_2;
}
