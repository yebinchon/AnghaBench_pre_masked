
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tda18271_priv {unsigned char* tda18271_regs; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,int ,int *,int*) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct dvb_frontend *VAR_2, u32 *VAR_3)
{

 struct tda18271_priv *VAR_4 = VAR_2->tuner_priv;
 unsigned char *VAR_5 = VAR_4->tda18271_regs;
 u8 VAR_6;

 int VAR_7 = FUNC_0(VAR_2, VAR_0, VAR_3, &VAR_6);
 if (FUNC_1(VAR_7))
  goto fail;

 VAR_5[VAR_1] &= ~0x1f;
 VAR_5[VAR_1] |= (0x1f & VAR_6);
fail:
 return VAR_7;
}
