
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl111sf_demod_state {int dummy; } ;
struct dvb_frontend {struct mxl111sf_demod_state* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mxl111sf_demod_state*,int*) ;
 int FUNC_1 (struct mxl111sf_demod_state*,int*) ;
 int FUNC_2 (struct mxl111sf_demod_state*,int*) ;
 int FUNC_3 (struct mxl111sf_demod_state*,int*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_5,
          enum fe_status *VAR_6)
{
 struct mxl111sf_demod_state *VAR_7 = VAR_5->demodulator_priv;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 *VAR_6 = 0;

 VAR_8 = FUNC_1(VAR_7, &VAR_9);
 if (FUNC_4(VAR_8))
  goto fail;
 VAR_8 = FUNC_3(VAR_7, &VAR_10);
 if (FUNC_4(VAR_8))
  goto fail;
 VAR_8 = FUNC_2(VAR_7, &VAR_11);
 if (FUNC_4(VAR_8))
  goto fail;
 VAR_8 = FUNC_0(VAR_7, &VAR_12);
 if (FUNC_4(VAR_8))
  goto fail;

 if (VAR_9)
  *VAR_6 |= VAR_2;
 if (VAR_10)
  *VAR_6 |= VAR_0;
 if (VAR_11)
  *VAR_6 |= VAR_3;
 if (VAR_12)
  *VAR_6 |= VAR_4;

 if ((VAR_9) && (VAR_10) && (VAR_11))
  *VAR_6 |= VAR_1;
fail:
 return VAR_8;
}
