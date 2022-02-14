
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tuner_simple_priv {int type; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;





__attribute__((used)) static void FUNC_0(struct dvb_frontend *VAR_0,
    u8 *VAR_1, u8 *VAR_2, unsigned int VAR_3)
{
 struct tuner_simple_priv *VAR_4 = VAR_0->tuner_priv;

 switch (VAR_4->type) {
 case 128:
  switch (VAR_3) {
  case 1:
   *VAR_2 |= 0x08;
   break;
  default:
   *VAR_2 &= ~0x08;
   break;
  }
  break;
 case 129:
  switch (VAR_3) {
  case 1:
   *VAR_2 |= 0x01;
   break;
  default:
   *VAR_2 &= ~0x01;
   break;
  }
  break;
 default:
  break;
 }
}
