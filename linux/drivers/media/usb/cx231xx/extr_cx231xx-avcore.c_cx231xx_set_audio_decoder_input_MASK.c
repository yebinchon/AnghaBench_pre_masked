
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int tuner_type; } ;
struct cx231xx {int dev; TYPE_1__ board; } ;
typedef enum AUDIO_INPUT { ____Placeholder_AUDIO_INPUT } AUDIO_INPUT ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;


 int VAR_32 ;
 int FUNC_0 (struct cx231xx*,int ,int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct cx231xx*) ;
 int FUNC_4 (struct cx231xx*) ;
 int FUNC_5 (struct cx231xx*,int ,int*) ;
 int FUNC_6 (struct cx231xx*,int ,int*) ;
 int FUNC_7 (struct cx231xx*,int ,int) ;
 int FUNC_8 (struct cx231xx*,int ,int) ;

int FUNC_9(struct cx231xx *VAR_33,
        enum AUDIO_INPUT VAR_34)
{
 u32 VAR_35;
 int VAR_36;
 u8 VAR_37;
 u32 VAR_38 = 0;


 VAR_36 = FUNC_5(VAR_33, VAR_28, &VAR_37);
 VAR_37 |= 1;
 VAR_36 = FUNC_7(VAR_33, VAR_28, VAR_37);

 switch (VAR_34) {
 case 133:

  VAR_38 = FUNC_1(VAR_8,
       VAR_1);
  VAR_36 = FUNC_8(VAR_33, VAR_2, VAR_38);




  VAR_36 = FUNC_6(VAR_33, VAR_0, &VAR_35);

  VAR_36 = FUNC_8(VAR_33, VAR_0,
        (VAR_35 | VAR_7));


  VAR_36 = FUNC_8(VAR_33, VAR_3,
    FUNC_1(VAR_21, 0x0) |
    FUNC_1(VAR_20, 0x0) |
    FUNC_1(VAR_15, 0x0));



  VAR_36 = FUNC_8(VAR_33, VAR_5, 0x3000001);
  VAR_36 = FUNC_8(VAR_33, VAR_29, 0x00063073);


  VAR_36 = FUNC_6(VAR_33, VAR_31, &VAR_35);
  VAR_36 = FUNC_8(VAR_33, VAR_31,
        (VAR_35 | VAR_17));


  VAR_36 = FUNC_6(VAR_33, VAR_30, &VAR_35);
  VAR_36 = FUNC_8(VAR_33, VAR_30,
        (VAR_35 | VAR_18));
  break;

 case 130:
 default:
  VAR_36 = FUNC_4(VAR_33);

  VAR_36 = FUNC_8(VAR_33, VAR_3,
   FUNC_1(VAR_27, 0x00) |
   FUNC_1(VAR_26, 0x01) |
   FUNC_1(VAR_25, 0x00) |
   FUNC_1(VAR_24, 0x02) |
   FUNC_1(VAR_23, 0x02) |
   FUNC_1(VAR_22, 0x03) |
   FUNC_1(VAR_21, 0x00) |
   FUNC_1(VAR_20, 0x00) |
   FUNC_1(VAR_11, 0x00) |
   FUNC_1(VAR_6, 0x03) |
   FUNC_1(VAR_14, 0x00) |
   FUNC_1(VAR_16, 0x02) |
   FUNC_1(VAR_15, 0x01));


  VAR_36 = FUNC_8(VAR_33, VAR_2,
   FUNC_1(VAR_13, 0x00) |
   FUNC_1(VAR_12, 0x00) |
   FUNC_1(VAR_10, 0x00) |
   FUNC_1(VAR_9, 0x00) |
   FUNC_1(VAR_8, 0x03));

  VAR_36 = FUNC_8(VAR_33, VAR_29, 0x1F063870);


  VAR_36 = FUNC_8(VAR_33, VAR_29, 0x00063870);

  VAR_36 = FUNC_3(VAR_33);

  switch (VAR_33->board.tuner_type) {
  case 128:

   VAR_36 = FUNC_0(VAR_33,
     VAR_32,
     VAR_4,
     VAR_19,
     FUNC_1(VAR_19, 1));
   break;
  case 129:

   VAR_36 = FUNC_0(VAR_33,
     VAR_32,
     VAR_4,
     VAR_19,
     FUNC_1(VAR_19, 0));
   break;
  default:



   FUNC_2(VAR_33->dev,
     "Unknown tuner type configuring SIF");
   break;
  }
  break;

 case 131:




  break;

 case 132:
  VAR_36 = FUNC_8(VAR_33, VAR_29, 0x1F011012);
  break;
 }


 VAR_36 = FUNC_5(VAR_33, VAR_28, &VAR_37);
 VAR_37 &= ~1;
 VAR_36 = FUNC_7(VAR_33, VAR_28, VAR_37);

 return VAR_36;
}
