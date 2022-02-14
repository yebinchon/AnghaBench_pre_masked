
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_priv {unsigned char* tda18271_regs; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct dvb_frontend*,size_t,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_5)
{
 struct tda18271_priv *VAR_6 = VAR_5->tuner_priv;
 unsigned char *VAR_7 = VAR_6->tda18271_regs;
 int VAR_8;


 VAR_7[VAR_3] &= ~0x1f;
 VAR_7[VAR_3] |= 0x12;


 VAR_7[VAR_4] &= ~0x03;


 VAR_7[VAR_4] &= ~0x1c;

 VAR_8 = FUNC_0(VAR_5, VAR_3, 2);
 if (FUNC_1(VAR_8))
  goto fail;

 VAR_7[VAR_0] &= ~0x03;
 VAR_8 = FUNC_0(VAR_5, VAR_0, 1);
 if (FUNC_1(VAR_8))
  goto fail;

 VAR_7[VAR_1] &= ~0x03;


 VAR_7[VAR_2] |= 0x04;
 VAR_7[VAR_2] |= 0x02;

 VAR_8 = FUNC_0(VAR_5, VAR_1, 3);
fail:
 return VAR_8;
}
