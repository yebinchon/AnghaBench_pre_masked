
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 int VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char VAR_18 ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 unsigned char VAR_22 ;
 unsigned char VAR_23 ;
 unsigned char VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 unsigned char VAR_28 ;
 unsigned char VAR_29 ;
 unsigned char VAR_30 ;
 unsigned char VAR_31 ;
 scalar_t__ VAR_32 ;
 unsigned char FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned char) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;

long FUNC_6(unsigned char VAR_33,
      unsigned char VAR_34,
      unsigned char VAR_35,
      unsigned char VAR_36,
      unsigned char VAR_37,
      unsigned char VAR_38,
      unsigned char VAR_39,
      unsigned char VAR_40,
      unsigned char VAR_41,
      unsigned char VAR_42)
{
 unsigned char VAR_43;






 FUNC_5(VAR_0, VAR_1);



 if ((FUNC_3() == VAR_32) && (FUNC_2() == VAR_25)) {





  if (VAR_33 == 0)
   VAR_43 = VAR_9;
  else
   VAR_43 = VAR_10;


  if (VAR_34 == 0)
   VAR_43 |= VAR_3;
  else
   VAR_43 |= VAR_4;


  if (VAR_35 == 0)
   VAR_43 |= VAR_6;
  else
   VAR_43 |= VAR_5;


  if (VAR_36 == 0)
   VAR_43 |= VAR_8;
  else
   VAR_43 |= VAR_7;


  if (VAR_37 == 0)
   VAR_43 |= VAR_13;
  else
   VAR_43 |= VAR_12;

  FUNC_1(VAR_26, VAR_2, VAR_43);






  if (VAR_38 == 0)
   VAR_43 = VAR_23;
  else
   VAR_43 = VAR_24;

  switch (VAR_39) {
  case 0:
   VAR_43 |= VAR_15;
   break;
  case 1:
   VAR_43 |= VAR_16;
   break;
  case 2:
   VAR_43 |= VAR_17;
   break;
  case 3:
   VAR_43 |= VAR_18;
   break;
  case 4:
   VAR_43 |= VAR_19;
   break;
  case 5:
   VAR_43 |= VAR_20;
   break;
  case 6:
   VAR_43 |= VAR_21;
   break;
  case 7:
   VAR_43 |= VAR_22;
   break;
  }
  FUNC_1(VAR_26, VAR_14, VAR_43);


  if (VAR_40 == 0)
   VAR_43 = VAR_30;
  else
   VAR_43 = VAR_31;


  if (VAR_41 == 0)
   VAR_43 |= VAR_28;
  else
   VAR_43 |= VAR_29;


  VAR_43 |= ((VAR_42 & 0x07) << 1);

  FUNC_1(VAR_26, VAR_27, VAR_43);


  VAR_43 = FUNC_0(VAR_26, VAR_2);
  VAR_43 |= VAR_11;
  FUNC_1(VAR_26, VAR_2, VAR_43);

  return 0;
 }


 return -1;
}
