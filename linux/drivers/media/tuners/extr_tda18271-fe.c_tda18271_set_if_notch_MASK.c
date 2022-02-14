
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_priv {unsigned char* tda18271_regs; int mode; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 size_t VAR_0 ;



__attribute__((used)) static inline void FUNC_0(struct dvb_frontend *VAR_1)
{
 struct tda18271_priv *VAR_2 = VAR_1->tuner_priv;
 unsigned char *VAR_3 = VAR_2->tda18271_regs;

 switch (VAR_2->mode) {
 case 129:
  VAR_3[VAR_0] &= ~0x80;
  break;
 case 128:
  VAR_3[VAR_0] |= 0x80;
  break;
 }
}
