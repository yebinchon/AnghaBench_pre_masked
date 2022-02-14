
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath5k_hw {scalar_t__ ah_version; int ah_radio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ,int) ;







 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath5k_hw*,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct ath5k_hw*,int ,int ,int) ;
 int FUNC_4 (struct ath5k_hw*,int ,int ,int) ;
 int FUNC_5 (struct ath5k_hw*,int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

int
FUNC_6(struct ath5k_hw *VAR_25, u8 VAR_26, bool VAR_27)
{





 if (VAR_25->ah_version == VAR_2) {


  FUNC_3(VAR_25,
   FUNC_1(VAR_12),
   VAR_12, VAR_26);




  FUNC_4(VAR_25, FUNC_1(VAR_11),
    VAR_11, VAR_27);


  switch (VAR_25->ah_radio) {
  case 130:

   FUNC_3(VAR_25,
     FUNC_1(VAR_19),
     VAR_19, VAR_26);

   FUNC_4(VAR_25,
     FUNC_1(VAR_18),
     VAR_18, VAR_27);


   FUNC_4(VAR_25,
     FUNC_1(VAR_17),
     VAR_17, VAR_27);

   break;
  case 129:

   FUNC_3(VAR_25,
     FUNC_1(VAR_22),
     VAR_22, VAR_26);

   FUNC_4(VAR_25,
     FUNC_1(VAR_21),
     VAR_21, VAR_27);

   FUNC_4(VAR_25,
     FUNC_1(VAR_20),
     VAR_20, VAR_27);

   break;
  case 128:

   FUNC_3(VAR_25,
     FUNC_1(VAR_24),
     VAR_24, VAR_26);

   FUNC_4(VAR_25,
     FUNC_1(VAR_23),
     VAR_23, VAR_27);

   FUNC_4(VAR_25,
     FUNC_1(VAR_20),
     VAR_20, VAR_27);

   break;
  case 134:
  case 132:

   FUNC_3(VAR_25,
     FUNC_1(VAR_14),
     VAR_14, VAR_26);

   FUNC_4(VAR_25,
     FUNC_1(VAR_13),
     VAR_13, VAR_27);


   if (VAR_25->ah_radio == 134) {
    FUNC_5(VAR_25, 0x00004000,
       VAR_3);
    FUNC_5(VAR_25, 0x081b7caa,
       0xa274);
   }

   FUNC_4(VAR_25,
     FUNC_1(VAR_20),
     VAR_20, VAR_27);
   break;
  case 133:

   FUNC_3(VAR_25,
     FUNC_1(VAR_14),
     VAR_14, VAR_26);

   FUNC_4(VAR_25,
     FUNC_1(VAR_15),
     VAR_15, VAR_27);


   FUNC_5(VAR_25, 0x00180a65, VAR_4);


   FUNC_5(VAR_25, 0x00004000, VAR_3);
   FUNC_0(VAR_25, VAR_5,
    VAR_6, 0xa);
   FUNC_5(VAR_25, 0x800000a8, 0x8140);
   FUNC_5(VAR_25, 0x000000ff, 0x9958);

   FUNC_4(VAR_25,
     FUNC_1(VAR_20),
     VAR_20, VAR_27);
   break;
  case 131:

   FUNC_3(VAR_25,
     FUNC_1(VAR_16),
     VAR_16, VAR_26);

   FUNC_4(VAR_25,
     FUNC_1(VAR_15),
     VAR_15, VAR_27);

   FUNC_4(VAR_25,
     FUNC_1(VAR_20),
     VAR_20, VAR_27);
   break;
  default:
   return -VAR_7;

  }


 } else if (VAR_25->ah_version == VAR_1) {


  if (VAR_26 > 2) {
   FUNC_2(VAR_25, "unsupported channel mode: %d\n", VAR_26);
   return -VAR_7;
  }


  FUNC_3(VAR_25, FUNC_1(VAR_10),
    VAR_10, VAR_26);




  FUNC_4(VAR_25, FUNC_1(VAR_9),
    VAR_9, VAR_27);




  FUNC_4(VAR_25, FUNC_1(VAR_17),
    VAR_17, VAR_27);

 } else if (VAR_25->ah_version == VAR_0) {
  FUNC_4(VAR_25, FUNC_1(VAR_8),
    VAR_8, VAR_27);
 }

 return 0;
}
