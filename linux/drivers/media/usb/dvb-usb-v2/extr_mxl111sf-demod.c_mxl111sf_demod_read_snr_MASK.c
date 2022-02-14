
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mxl111sf_demod_state {int dummy; } ;
struct dvb_frontend {struct mxl111sf_demod_state* demodulator_priv; } ;


 int FUNC_0 (struct mxl111sf_demod_state*,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u16 *VAR_1)
{
 struct mxl111sf_demod_state *VAR_2 = VAR_0->demodulator_priv;

 int VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (FUNC_1(VAR_3))
  goto fail;

 *VAR_1 /= 10;
fail:
 return VAR_3;
}
