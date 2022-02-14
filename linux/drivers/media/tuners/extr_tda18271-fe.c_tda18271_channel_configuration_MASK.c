
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tda18271_std_map_item {int agc_mode; int std; int if_lvl; int fm_rfn; unsigned char rfagc_top; int if_freq; } ;
struct tda18271_priv {unsigned char* tda18271_regs; scalar_t__ id; int role; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;


 int FUNC_0 (struct dvb_frontend*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*,scalar_t__*) ;
 int FUNC_3 (struct dvb_frontend*,scalar_t__) ;
 int FUNC_4 (struct dvb_frontend*,scalar_t__*) ;
 int FUNC_5 (struct dvb_frontend*,scalar_t__*) ;
 int FUNC_6 (struct dvb_frontend*,scalar_t__) ;
 int FUNC_7 (struct dvb_frontend*,scalar_t__*) ;
 int FUNC_8 (struct dvb_frontend*) ;
 int FUNC_9 (struct dvb_frontend*,size_t,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct dvb_frontend *VAR_9,
       struct tda18271_std_map_item *VAR_10,
       u32 VAR_11, u32 VAR_12)
{
 struct tda18271_priv *VAR_13 = VAR_9->tuner_priv;
 unsigned char *VAR_14 = VAR_13->tda18271_regs;
 int VAR_15;
 u32 VAR_16;




 VAR_14[VAR_4] &= ~0x1f;
 VAR_14[VAR_4] |= (VAR_10->agc_mode << 3) | VAR_10->std;

 if (VAR_13->id == VAR_8) {

  VAR_14[VAR_4] &= ~0x04;
 }


 VAR_14[VAR_5] &= ~0x03;


 VAR_14[VAR_5] &= ~0x1c;
 VAR_14[VAR_5] |= (VAR_10->if_lvl << 2);


 VAR_14[VAR_5] &= ~0x80;
 VAR_14[VAR_5] |= VAR_10->fm_rfn << 7;


 VAR_14[VAR_2] = 0x00;
 VAR_14[VAR_2] |= VAR_10->rfagc_top;
 VAR_15 = FUNC_9(VAR_9, VAR_2, 1);
 if (FUNC_10(VAR_15))
  goto fail;




 VAR_14[VAR_3] |= 0x40;


 VAR_14[VAR_7] &= ~0x10;



 FUNC_5(VAR_9, &VAR_11);

 FUNC_2(VAR_9, &VAR_11);

 FUNC_7(VAR_9, &VAR_11);

 FUNC_4(VAR_9, &VAR_11);





 switch (VAR_13->role) {
 case 129:
  VAR_14[VAR_1] |= 0x04;
  break;
 case 128:
  VAR_14[VAR_1] &= ~0x04;
  break;
 }


 VAR_14[VAR_1] &= ~0x02;


 VAR_14[VAR_1] &= ~0x01;

 VAR_15 = FUNC_9(VAR_9, VAR_1, 1);
 if (FUNC_10(VAR_15))
  goto fail;



 VAR_16 = VAR_10->if_freq * 1000 + VAR_11;

 switch (VAR_13->role) {
 case 129:
  FUNC_6(VAR_9, VAR_16);
  FUNC_8(VAR_9);
  FUNC_9(VAR_9, VAR_6, 4);
  break;
 case 128:
  FUNC_3(VAR_9, VAR_16);
  FUNC_9(VAR_9, VAR_0, 4);

  VAR_14[VAR_6] = VAR_14[VAR_0] & 0x7f;
  FUNC_8(VAR_9);
  FUNC_9(VAR_9, VAR_6, 1);
  break;
 }

 VAR_15 = FUNC_9(VAR_9, VAR_7, 7);
 if (FUNC_10(VAR_15))
  goto fail;


 FUNC_0(VAR_9, 1);

 FUNC_1(1);


 FUNC_0(VAR_9, 0);

 FUNC_1(20);

 if (VAR_13->id == VAR_8) {

  if (VAR_10->fm_rfn)
   VAR_14[VAR_4] &= ~0x04;
  else
   VAR_14[VAR_4] |= 0x04;
  VAR_15 = FUNC_9(VAR_9, VAR_4, 1);
 }
fail:
 return VAR_15;
}
