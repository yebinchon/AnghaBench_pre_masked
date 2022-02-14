
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mxl111sf_demod_state {int dummy; } ;
struct dvb_frontend {struct mxl111sf_demod_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mxl111sf_demod_state*,int ,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3, u32 *VAR_4)
{
 struct mxl111sf_demod_state *VAR_5 = VAR_3->demodulator_priv;
 u32 VAR_6, VAR_7;
 u8 VAR_8;
 int VAR_9;

 *VAR_4 = 0;


 VAR_9 = FUNC_0(VAR_5, VAR_0, &VAR_8);
 if (FUNC_1(VAR_9))
  goto fail;

 VAR_6 = VAR_8;


 VAR_9 = FUNC_0(VAR_5, VAR_2, &VAR_8);
 if (FUNC_1(VAR_9))
  goto fail;

 VAR_8 &= VAR_1;
 VAR_8 *= 4;

 VAR_7 = 1 << VAR_8;

 VAR_6 *= VAR_7;

 *VAR_4 = VAR_6;
fail:
 return VAR_9;
}
