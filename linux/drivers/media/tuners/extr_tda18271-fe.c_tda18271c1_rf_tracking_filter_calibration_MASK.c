
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tda18271_priv {unsigned char* tda18271_regs; int mode; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dvb_frontend*,int*) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int*) ;
 int FUNC_4 (struct dvb_frontend*,int*) ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (struct dvb_frontend*,int*) ;
 scalar_t__ FUNC_7 (struct dvb_frontend*,int*) ;
 int FUNC_8 (struct dvb_frontend*,size_t,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend *VAR_9,
           u32 VAR_10, u32 VAR_11)
{
 struct tda18271_priv *VAR_12 = VAR_9->tuner_priv;
 unsigned char *VAR_13 = VAR_12->tda18271_regs;
 int VAR_14;
 u32 VAR_15 = 0;


 FUNC_1(VAR_9, &VAR_10);
 FUNC_8(VAR_9, VAR_5, 1);

 VAR_13[VAR_3] &= 0x07;
 VAR_13[VAR_3] |= 0x60;
 FUNC_8(VAR_9, VAR_3, 1);

 VAR_13[VAR_4] = 0x60;
 FUNC_8(VAR_9, VAR_4, 1);

 VAR_13[VAR_1] = 0x00;
 FUNC_8(VAR_9, VAR_1, 1);

 VAR_13[VAR_2] = 0xcc;
 FUNC_8(VAR_9, VAR_2, 1);


 VAR_13[VAR_8] |= 0x03;



 switch (VAR_12->mode) {
 case 129:
  VAR_15 = VAR_10 - 1250000;
  break;
 case 128:
  VAR_15 = VAR_10 + VAR_11 / 2;
  break;
 }

 FUNC_2(VAR_9, VAR_15);



 switch (VAR_12->mode) {
 case 129:
  VAR_15 = VAR_10 - 250000;
  break;
 case 128:
  VAR_15 = VAR_10 + VAR_11 / 2 + 1000000;
  break;
 }

 FUNC_5(VAR_9, VAR_15);

 VAR_14 = FUNC_8(VAR_9, VAR_7, 11);
 if (FUNC_9(VAR_14))
  return VAR_14;

 FUNC_0(5);


 FUNC_4(VAR_9, &VAR_10);
 FUNC_8(VAR_9, VAR_0, 1);


 FUNC_6(VAR_9, &VAR_10);


 FUNC_3(VAR_9, &VAR_10);

 FUNC_8(VAR_9, VAR_6, 1);
 FUNC_8(VAR_9, VAR_5, 1);
 FUNC_8(VAR_9, VAR_6, 1);
 FUNC_8(VAR_9, VAR_5, 1);

 VAR_13[VAR_3] &= 0x07;
 VAR_13[VAR_3] |= 0x40;
 FUNC_8(VAR_9, VAR_3, 1);

 VAR_13[VAR_4] = 0x40;
 FUNC_8(VAR_9, VAR_4, 1);
 FUNC_0(10);

 VAR_13[VAR_2] = 0xec;
 FUNC_8(VAR_9, VAR_2, 1);
 FUNC_0(60);

 VAR_13[VAR_8] &= ~0x03;
 FUNC_8(VAR_9, VAR_8, 1);

 FUNC_8(VAR_9, VAR_5, 1);


 if (0 == FUNC_7(VAR_9, &VAR_10))
  FUNC_8(VAR_9, VAR_1, 1);

 return 0;
}
