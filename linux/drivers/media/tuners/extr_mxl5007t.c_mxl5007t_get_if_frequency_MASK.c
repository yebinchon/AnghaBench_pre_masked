
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxl5007t_state {int if_freq; } ;
struct dvb_frontend {struct mxl5007t_state* tuner_priv; } ;
__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct mxl5007t_state *VAR_2 = VAR_0->tuner_priv;

 *VAR_1 = 0;

 switch (VAR_2->if_freq) {
 case 133:
  *VAR_1 = 4000000;
  break;
 case 134:
  *VAR_1 = 4500000;
  break;
 case 135:
  *VAR_1 = 4570000;
  break;
 case 131:
  *VAR_1 = 5000000;
  break;
 case 132:
  *VAR_1 = 5380000;
  break;
 case 129:
  *VAR_1 = 6000000;
  break;
 case 130:
  *VAR_1 = 6280000;
  break;
 case 128:
  *VAR_1 = 9191500;
  break;
 case 138:
  *VAR_1 = 35250000;
  break;
 case 137:
  *VAR_1 = 36150000;
  break;
 case 136:
  *VAR_1 = 44000000;
  break;
 }
 return 0;
}
