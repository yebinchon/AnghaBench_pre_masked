
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
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct dvb_frontend*,int ,int*,int*,int*) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct dvb_frontend *VAR_5, u32 VAR_6)
{

 struct tda18271_priv *VAR_7 = VAR_5->tuner_priv;
 unsigned char *VAR_8 = VAR_7->tda18271_regs;
 u8 VAR_9, VAR_10;
 u32 VAR_11;

 int VAR_12 = FUNC_0(VAR_5, VAR_0, &VAR_6, &VAR_10, &VAR_9);
 if (FUNC_1(VAR_12))
  goto fail;

 VAR_8[VAR_4] = (0x7f & VAR_10);

 VAR_11 = ((VAR_9 * (VAR_6 / 1000)) << 7) / 125;

 VAR_8[VAR_1] = 0x7f & (VAR_11 >> 16);
 VAR_8[VAR_2] = 0xff & (VAR_11 >> 8);
 VAR_8[VAR_3] = 0xff & VAR_11;
fail:
 return VAR_12;
}
