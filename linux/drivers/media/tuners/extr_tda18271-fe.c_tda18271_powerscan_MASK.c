
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct tda18271_priv {unsigned char* tda18271_regs; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dvb_frontend*,scalar_t__*) ;
 int FUNC_2 (struct dvb_frontend*,scalar_t__) ;
 int FUNC_3 (struct dvb_frontend*,scalar_t__*) ;
 int FUNC_4 (struct dvb_frontend*,scalar_t__*) ;
 int FUNC_5 (struct dvb_frontend*,scalar_t__*,unsigned char*,int*) ;
 int FUNC_6 (struct dvb_frontend*) ;
 int FUNC_7 (struct dvb_frontend*,size_t,int) ;
 int FUNC_8 (char*,int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct dvb_frontend *VAR_5,
         u32 *VAR_6, u32 *VAR_7)
{
 struct tda18271_priv *VAR_8 = VAR_5->tuner_priv;
 unsigned char *VAR_9 = VAR_8->tda18271_regs;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u8 VAR_15;
 u16 VAR_16;
 u32 VAR_17;

 VAR_17 = *VAR_6;

 FUNC_3(VAR_5, &VAR_17);
 FUNC_4(VAR_5, &VAR_17);
 FUNC_1(VAR_5, &VAR_17);
 FUNC_5(VAR_5, &VAR_17, &VAR_15, &VAR_16);

 FUNC_7(VAR_5, VAR_2, 1);
 FUNC_7(VAR_5, VAR_1, 1);


 VAR_17 += 1000000;

 FUNC_2(VAR_5, VAR_17);
 FUNC_7(VAR_5, VAR_4, 4);

 FUNC_0(5);


 VAR_9[VAR_3] &= ~0x03;
 VAR_9[VAR_3] |= 0x01;
 FUNC_7(VAR_5, VAR_3, 1);


 FUNC_7(VAR_5, VAR_2, 1);


 VAR_14 = FUNC_6(VAR_5);
 if (FUNC_9(VAR_14))
  return VAR_14;


 VAR_10 = 1;
 *VAR_7 = *VAR_6;
 VAR_11 = 0;
 VAR_12 = 0;
 VAR_13 = 0;

 while ((VAR_9[VAR_0] & 0x3f) < VAR_15) {

  VAR_17 = *VAR_6 + (VAR_10 * VAR_12) + 1000000;

  FUNC_2(VAR_5, VAR_17);
  FUNC_7(VAR_5, VAR_4, 4);

  if (VAR_13) {
   FUNC_0(5);
   VAR_13 = 0;
  } else
   FUNC_10(100);


  FUNC_7(VAR_5, VAR_2, 1);


  VAR_14 = FUNC_6(VAR_5);
  if (FUNC_9(VAR_14))
   return VAR_14;

  VAR_12 += 200;

  if (VAR_12 <= VAR_16)
   continue;

  if (VAR_10 <= 0)
   break;

  VAR_10 = -1 * VAR_10;
  VAR_12 = 200;
  VAR_13 = 1;
 }

 if ((VAR_9[VAR_0] & 0x3f) >= VAR_15) {
  VAR_11 = 1;
  *VAR_7 = VAR_17 - 1000000;
 } else
  VAR_11 = 0;

 FUNC_8("bcal = %d, freq_in = %d, freq_out = %d (freq = %d)\n",
  VAR_11, *VAR_6, *VAR_7, VAR_17);

 return VAR_11;
}
