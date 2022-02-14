
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mxl111sf_demod_state {int dummy; } ;
struct dvb_frontend {struct mxl111sf_demod_state* demodulator_priv; } ;
typedef enum fe_modulation { ____Placeholder_fe_modulation } fe_modulation ;


 int VAR_0 ;



 int FUNC_0 (int,int) ;
 int FUNC_1 (struct mxl111sf_demod_state*,int*) ;
 int FUNC_2 (struct mxl111sf_demod_state*,int*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1,
            u16 *VAR_2)
{
 struct mxl111sf_demod_state *VAR_3 = VAR_1->demodulator_priv;
 enum fe_modulation VAR_4;
 int VAR_5;
 u16 VAR_6;

 VAR_5 = FUNC_1(VAR_3, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_5 = FUNC_2(VAR_3, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 switch (VAR_4) {
 case 128:
  *VAR_2 = (VAR_6 >= 1300) ?
   FUNC_0(65535, VAR_6 * 44) : VAR_6 * 38;
  break;
 case 130:
  *VAR_2 = (VAR_6 >= 1500) ?
   FUNC_0(65535, VAR_6 * 38) : VAR_6 * 33;
  break;
 case 129:
  *VAR_2 = (VAR_6 >= 2000) ?
   FUNC_0(65535, VAR_6 * 29) : VAR_6 * 25;
  break;
 default:
  *VAR_2 = 0;
  return -VAR_0;
 }

 return 0;
}
