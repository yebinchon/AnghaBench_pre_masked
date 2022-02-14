
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
 int FUNC_0 (struct dvb_frontend*,int,int ,int ) ;
 int FUNC_1 (struct dvb_frontend*,size_t,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_4)
{
 struct tda18271_priv *VAR_5 = VAR_4->tuner_priv;
 unsigned char *VAR_6 = VAR_5->tda18271_regs;
 int VAR_7;


 VAR_6[VAR_0] &= ~0x20;
 VAR_7 = FUNC_1(VAR_4, VAR_0, 1);
 if (FUNC_2(VAR_7))
  goto fail;

 VAR_6[VAR_1] &= ~0x80;
 VAR_6[VAR_1] &= ~0x03;
 VAR_7 = FUNC_1(VAR_4, VAR_1, 1);
 if (FUNC_2(VAR_7))
  goto fail;

 VAR_6[VAR_2] |= 0x03;


 VAR_7 = FUNC_0(VAR_4, 1, 0, 0);
 if (FUNC_2(VAR_7))
  goto fail;


 VAR_6[VAR_3] &= ~0x04;
 VAR_6[VAR_3] &= ~0x02;
 VAR_7 = FUNC_1(VAR_4, VAR_2, 3);
fail:
 return VAR_7;
}
