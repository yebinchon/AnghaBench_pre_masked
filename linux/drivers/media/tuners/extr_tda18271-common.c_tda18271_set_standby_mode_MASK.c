
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_priv {unsigned char* tda18271_regs; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_frontend*,size_t,int) ;
 int FUNC_1 (char*,int,int,int) ;

int FUNC_2(struct dvb_frontend *VAR_3,
         int VAR_4, int VAR_5, int VAR_6)
{
 struct tda18271_priv *VAR_7 = VAR_3->tuner_priv;
 unsigned char *VAR_8 = VAR_7->tda18271_regs;

 if (VAR_2 & VAR_0)
  FUNC_1("sm = %d, sm_lt = %d, sm_xt = %d\n", VAR_4, VAR_5, VAR_6);

 VAR_8[VAR_1] &= ~0xe0;
 VAR_8[VAR_1] |= (VAR_4 ? (1 << 7) : 0) |
   (VAR_5 ? (1 << 6) : 0) |
   (VAR_6 ? (1 << 5) : 0);

 return FUNC_0(VAR_3, VAR_1, 1);
}
