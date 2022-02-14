
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mxl5005s_state {scalar_t__ Mode; int Chan_Bandwidth; int IF_Mode; int AGC_Mode; int TOP; int IF_OUT_LOAD; unsigned long IF_OUT; int DIV_OUT; unsigned long Fxtal; scalar_t__ EN_RSSI; scalar_t__ Mod_Type; scalar_t__ CAPSELECT; scalar_t__ CLOCK_OUT; } ;
struct dvb_frontend {struct mxl5005s_state* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (unsigned long,int) ;
 scalar_t__ FUNC_1 (struct dvb_frontend*,int ,int) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_2 (struct dvb_frontend*) ;
 scalar_t__ FUNC_3 (struct dvb_frontend*) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;

__attribute__((used)) static u16 FUNC_4(struct dvb_frontend *VAR_41)
{
 struct mxl5005s_state *VAR_42 = VAR_41->tuner_priv;
 u16 VAR_43 = 0;

 VAR_43 += FUNC_3(VAR_41);


 VAR_43 += FUNC_1(VAR_41, VAR_10, VAR_42->Mode ? 1 : 0);


 VAR_43 += FUNC_1(VAR_41, VAR_9, VAR_42->Mode ? 0 : 1);
 VAR_43 += FUNC_1(VAR_41, VAR_4, VAR_42->Mode ? 3 : 2);
 VAR_43 += FUNC_1(VAR_41, VAR_5, VAR_42->Mode ? 1 : 0);
 VAR_43 += FUNC_1(VAR_41, VAR_8, VAR_42->Mode ? 0 : 1);
 VAR_43 += FUNC_1(VAR_41, VAR_7, 0);


 if (VAR_42->Mode) {
  switch (VAR_42->Chan_Bandwidth) {
  case 8000000:
   VAR_43 += FUNC_1(VAR_41, VAR_6, 0);
   break;
  case 7000000:
   VAR_43 += FUNC_1(VAR_41, VAR_6, 2);
   break;
  case 6000000:
   VAR_43 += FUNC_1(VAR_41,
     VAR_6, 3);
   break;
  }
 } else {
  switch (VAR_42->Chan_Bandwidth) {
  case 8000000:
   VAR_43 += FUNC_1(VAR_41, VAR_3,
     (VAR_42->IF_Mode ? 0 : 3));
   break;
  case 7000000:
   VAR_43 += FUNC_1(VAR_41, VAR_3,
     (VAR_42->IF_Mode ? 1 : 4));
   break;
  case 6000000:
   VAR_43 += FUNC_1(VAR_41, VAR_3,
     (VAR_42->IF_Mode ? 2 : 5));
   break;
  }
 }


 VAR_43 += FUNC_1(VAR_41, VAR_30, VAR_42->Mode ? 5 : 8);
 VAR_43 += FUNC_1(VAR_41,
  VAR_31, VAR_42->Mode ? 1 : 1);
 VAR_43 += FUNC_1(VAR_41, VAR_15, VAR_42->Mode ? 0 : 0);


 if (VAR_42->AGC_Mode == 0) {
  VAR_43 += FUNC_1(VAR_41, VAR_1, 15);
  VAR_43 += FUNC_1(VAR_41, VAR_2, 15);
 } else
  VAR_43 += FUNC_1(VAR_41, VAR_2, VAR_42->Mode ? 15 : 12);

 if (VAR_42->TOP == 55)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0x0);

 if (VAR_42->TOP == 72)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0x1);

 if (VAR_42->TOP == 92)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0x2);

 if (VAR_42->TOP == 110)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0x3);

 if (VAR_42->TOP == 129)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0x4);

 if (VAR_42->TOP == 147)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0x5);

 if (VAR_42->TOP == 168)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0x6);

 if (VAR_42->TOP == 194)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0x7);

 if (VAR_42->TOP == 212)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0x9);

 if (VAR_42->TOP == 232)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0xA);

 if (VAR_42->TOP == 252)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0xB);

 if (VAR_42->TOP == 271)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0xC);

 if (VAR_42->TOP == 292)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0xD);

 if (VAR_42->TOP == 317)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0xE);

 if (VAR_42->TOP == 349)
  VAR_43 += FUNC_1(VAR_41, VAR_1, 0xF);


 VAR_43 += FUNC_2(VAR_41);


 if (VAR_42->IF_OUT_LOAD == 200) {
  VAR_43 += FUNC_1(VAR_41, VAR_11, 6);
  VAR_43 += FUNC_1(VAR_41, VAR_17, 2);
 }
 if (VAR_42->IF_OUT_LOAD == 300) {
  VAR_43 += FUNC_1(VAR_41, VAR_11, 4);
  VAR_43 += FUNC_1(VAR_41, VAR_17, 1);
 }




 if (VAR_42->Mode) {
  if (VAR_42->IF_OUT >= 4000000UL && VAR_42->IF_OUT <= 6280000UL) {
   VAR_43 += FUNC_1(VAR_41, VAR_13, 1);
   VAR_43 += FUNC_1(VAR_41, VAR_12, 1);
   VAR_43 += FUNC_1(VAR_41, VAR_14, 1);
   VAR_43 += FUNC_1(VAR_41, VAR_33, 0);
  }
  if ((VAR_42->IF_OUT == 36125000UL) ||
   (VAR_42->IF_OUT == 36150000UL)) {
   VAR_43 += FUNC_1(VAR_41, VAR_13, 1);
   VAR_43 += FUNC_1(VAR_41, VAR_12, 1);
   VAR_43 += FUNC_1(VAR_41, VAR_14, 1);
   VAR_43 += FUNC_1(VAR_41, VAR_33, 1);
  }
  if (VAR_42->IF_OUT > 36150000UL) {
   VAR_43 += FUNC_1(VAR_41, VAR_13, 0);
   VAR_43 += FUNC_1(VAR_41, VAR_12, 1);
   VAR_43 += FUNC_1(VAR_41, VAR_14, 1);
   VAR_43 += FUNC_1(VAR_41, VAR_33, 1);
  }
 } else {
  if (VAR_42->IF_OUT >= 4000000UL && VAR_42->IF_OUT <= 5000000UL) {
   VAR_43 += FUNC_1(VAR_41, VAR_13, 1);
   VAR_43 += FUNC_1(VAR_41, VAR_12, 1);
   VAR_43 += FUNC_1(VAR_41, VAR_14, 1);
   VAR_43 += FUNC_1(VAR_41, VAR_33, 0);
  }
  if (VAR_42->IF_OUT > 5000000UL) {
   VAR_43 += FUNC_1(VAR_41, VAR_13, 0);
   VAR_43 += FUNC_1(VAR_41, VAR_12, 0);
   VAR_43 += FUNC_1(VAR_41, VAR_14, 0);
   VAR_43 += FUNC_1(VAR_41, VAR_33, 0);
  }
 }


 if (VAR_42->CLOCK_OUT)
  VAR_43 += FUNC_1(VAR_41, VAR_34, 1);
 else
  VAR_43 += FUNC_1(VAR_41, VAR_34, 0);

 if (VAR_42->DIV_OUT == 1)
  VAR_43 += FUNC_1(VAR_41, VAR_38, 1);
 if (VAR_42->DIV_OUT == 0)
  VAR_43 += FUNC_1(VAR_41, VAR_38, 0);


 if (VAR_42->CAPSELECT)
  VAR_43 += FUNC_1(VAR_41, VAR_40, 1);
 else
  VAR_43 += FUNC_1(VAR_41, VAR_40, 0);

 if (VAR_42->Fxtal >= 12000000UL && VAR_42->Fxtal <= 16000000UL)
  VAR_43 += FUNC_1(VAR_41, VAR_16, 1);
 if (VAR_42->Fxtal > 16000000UL && VAR_42->Fxtal <= 32000000UL)
  VAR_43 += FUNC_1(VAR_41, VAR_16, 0);

 if (VAR_42->Fxtal >= 12000000UL && VAR_42->Fxtal <= 22000000UL)
  VAR_43 += FUNC_1(VAR_41, VAR_32, 3);
 if (VAR_42->Fxtal > 22000000UL && VAR_42->Fxtal <= 32000000UL)
  VAR_43 += FUNC_1(VAR_41, VAR_32, 0);


 if (VAR_42->Mode == 0 && VAR_42->IF_Mode == 1)
  VAR_43 += FUNC_1(VAR_41, VAR_36, 0);
 else
  VAR_43 += FUNC_1(VAR_41, VAR_36, 1);




 VAR_43 += FUNC_1(VAR_41, VAR_39,
  FUNC_0(VAR_42->Fxtal, 1000000));




 if (VAR_42->EN_RSSI) {
  VAR_43 += FUNC_1(VAR_41, VAR_37, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_35, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_0, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_25, 1);


  VAR_43 += FUNC_1(VAR_41, VAR_27, 2);
  VAR_43 += FUNC_1(VAR_41, VAR_28, 3);
  VAR_43 += FUNC_1(VAR_41, VAR_29, 1);


  VAR_43 += FUNC_1(VAR_41, VAR_26, 0);
  VAR_43 += FUNC_1(VAR_41, VAR_24, 12);
 }




 if (VAR_42->Mod_Type == VAR_22) {
  VAR_42->AGC_Mode = 1;


  VAR_43 += FUNC_1(VAR_41, VAR_37, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_35, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_0, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_25, 1);


  VAR_43 += FUNC_1(VAR_41, VAR_27, 3);
  VAR_43 += FUNC_1(VAR_41, VAR_28, 5);
  VAR_43 += FUNC_1(VAR_41, VAR_29, 1);


  VAR_43 += FUNC_1(VAR_41, VAR_26, 2);
  VAR_43 += FUNC_1(VAR_41, VAR_24, 13);
  if (VAR_42->IF_OUT <= 6280000UL)
   VAR_43 += FUNC_1(VAR_41, VAR_8, 0);
  else
   VAR_43 += FUNC_1(VAR_41, VAR_8, 1);

 }
 if (VAR_42->Mod_Type == VAR_20) {
  VAR_42->AGC_Mode = 1;


  VAR_43 += FUNC_1(VAR_41, VAR_37, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_35, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_0, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_25, 1);


  VAR_43 += FUNC_1(VAR_41, VAR_27, 2);
  VAR_43 += FUNC_1(VAR_41, VAR_28, 4);
  VAR_43 += FUNC_1(VAR_41, VAR_29, 1);


  VAR_43 += FUNC_1(VAR_41, VAR_26, 2);
  VAR_43 += FUNC_1(VAR_41, VAR_24, 13);
  VAR_43 += FUNC_1(VAR_41, VAR_7, 1);

  VAR_43 += FUNC_1(VAR_41, VAR_30, 5);

  if (VAR_42->IF_OUT <= 6280000UL)
   VAR_43 += FUNC_1(VAR_41, VAR_8, 0);
  else
   VAR_43 += FUNC_1(VAR_41, VAR_8, 1);
 }
 if (VAR_42->Mod_Type == VAR_23) {
  VAR_42->Mode = VAR_21;




  VAR_43 += FUNC_1(VAR_41, VAR_37, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_35, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_0, 0);
  VAR_43 += FUNC_1(VAR_41, VAR_25, 1);


  VAR_43 += FUNC_1(VAR_41, VAR_28, 5);
  VAR_43 += FUNC_1(VAR_41, VAR_27, 3);
  VAR_43 += FUNC_1(VAR_41, VAR_29, 2);

  VAR_43 += FUNC_1(VAR_41, VAR_30, 3);

  if (VAR_42->IF_OUT <= 6280000UL)
   VAR_43 += FUNC_1(VAR_41, VAR_8, 0);
  else
   VAR_43 += FUNC_1(VAR_41, VAR_8, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_30, 2);

 }
 if (VAR_42->Mod_Type == VAR_18) {



  VAR_42->AGC_Mode = 1;


  VAR_43 += FUNC_1(VAR_41, VAR_37, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_35, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_0, 0);
  VAR_43 += FUNC_1(VAR_41, VAR_25, 1);

  VAR_43 += FUNC_1(VAR_41, VAR_1, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_2, 15);
  VAR_43 += FUNC_1(VAR_41, VAR_8, 1);
 }

 if (VAR_42->Mod_Type == VAR_19) {




  VAR_43 += FUNC_1(VAR_41, VAR_37, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_35, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_0, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_25, 1);


  VAR_43 += FUNC_1(VAR_41, VAR_28, 5);
  VAR_43 += FUNC_1(VAR_41, VAR_27, 3);
  VAR_43 += FUNC_1(VAR_41, VAR_29, 2);
  VAR_43 += FUNC_1(VAR_41, VAR_30, 3);
  VAR_43 += FUNC_1(VAR_41, VAR_8, 1);
 }


 if (VAR_42->EN_RSSI == 0) {
  VAR_43 += FUNC_1(VAR_41, VAR_37, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_35, 1);
  VAR_43 += FUNC_1(VAR_41, VAR_0, 0);
  VAR_43 += FUNC_1(VAR_41, VAR_25, 1);
 }

 return VAR_43;
}
