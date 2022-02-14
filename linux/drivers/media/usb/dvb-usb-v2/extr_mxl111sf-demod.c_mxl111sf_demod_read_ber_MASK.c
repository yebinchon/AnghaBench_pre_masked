
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mxl111sf_demod_state {int dummy; } ;
struct dvb_frontend {struct mxl111sf_demod_state* demodulator_priv; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mxl111sf_demod_state*,int ,int*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_3, u32 *VAR_4)
{
 struct mxl111sf_demod_state *VAR_5 = VAR_3->demodulator_priv;
 u8 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 *VAR_4 = 0;

 VAR_9 = FUNC_1(VAR_5, VAR_1, &VAR_6);
 if (FUNC_2(VAR_9))
  goto fail;
 VAR_9 = FUNC_1(VAR_5, VAR_2, &VAR_7);
 if (FUNC_2(VAR_9))
  goto fail;
 VAR_9 = FUNC_1(VAR_5, VAR_0, &VAR_8);
 if (FUNC_2(VAR_9))
  goto fail;

 *VAR_4 = FUNC_0((VAR_6 | (VAR_7 << 8)), VAR_8);
fail:
 return VAR_9;
}
