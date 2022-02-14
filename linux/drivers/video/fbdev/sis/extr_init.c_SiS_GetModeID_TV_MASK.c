
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short* VAR_0 ;
 unsigned short* VAR_1 ;
 unsigned short* VAR_2 ;
 unsigned short* VAR_3 ;
 unsigned short* VAR_4 ;
 unsigned short* VAR_5 ;
 unsigned short* VAR_6 ;
 unsigned short* VAR_7 ;
 unsigned short* VAR_8 ;
 unsigned short* VAR_9 ;
 unsigned short* VAR_10 ;
 unsigned short* VAR_11 ;
 unsigned short* VAR_12 ;
 unsigned short* VAR_13 ;
 unsigned short* VAR_14 ;
 unsigned short* VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;

unsigned short
FUNC_0(int VAR_26, unsigned int VAR_27, int VAR_28, int VAR_29, int VAR_30,
   unsigned int VAR_31)
{
   unsigned short VAR_32 = 0;

   if(VAR_31 & VAR_24) {

      switch(VAR_28)
      {
 case 512:
      if(VAR_26 == VAR_16) {
  if(VAR_29 == 384) VAR_32 = VAR_7[VAR_30];
      }
      break;
 case 640:
      if(VAR_29 == 480) VAR_32 = VAR_9[VAR_30];
      else if(VAR_29 == 400) VAR_32 = VAR_8[VAR_30];
      break;
 case 800:
      if(VAR_29 == 600) VAR_32 = VAR_14[VAR_30];
      break;
 case 1024:
      if(VAR_26 == VAR_16) {
  if(VAR_29 == 768) VAR_32 = VAR_1[VAR_30];
      }
      break;
      }

   } else if(VAR_31 & VAR_25) {

      switch(VAR_28)
      {
 case 320:
      if(VAR_29 == 200) VAR_32 = VAR_4[VAR_30];
      else if(VAR_29 == 240) VAR_32 = VAR_5[VAR_30];
      break;
 case 400:
      if(VAR_29 == 300) VAR_32 = VAR_6[VAR_30];
      break;
 case 512:
      if( ((VAR_27 & VAR_20) && (VAR_27 & (VAR_22 | VAR_21))) ||
   (VAR_27 & VAR_17) ||
   ((!(VAR_27 & (VAR_20 | VAR_19))) && (VAR_27 & VAR_18)) ) {
  if(VAR_29 == 384) VAR_32 = VAR_7[VAR_30];
      }
      break;
 case 640:
      if(VAR_29 == 480) VAR_32 = VAR_9[VAR_30];
      else if(VAR_29 == 400) VAR_32 = VAR_8[VAR_30];
      break;
 case 720:
      if((!(VAR_27 & VAR_17)) && (!((VAR_27 & VAR_20) && (VAR_27 & VAR_21)))) {
  if(VAR_29 == 480) {
     VAR_32 = VAR_10[VAR_30];
  } else if(VAR_29 == 576) {
     if( ((VAR_27 & VAR_20) && (VAR_27 & VAR_22)) ||
         ((!(VAR_27 & (VAR_20 | VAR_19))) && (VAR_27 & VAR_18)) )
        VAR_32 = VAR_11[VAR_30];
  }
      }
             break;
 case 768:
      if((!(VAR_27 & VAR_17)) && (!((VAR_27 & VAR_20) && (VAR_27 & VAR_21)))) {
  if( ((VAR_27 & VAR_20) && (VAR_27 & VAR_22)) ||
      ((!(VAR_27 & (VAR_20 | VAR_19))) && (VAR_27 & VAR_18)) ) {
     if(VAR_29 == 576) VAR_32 = VAR_12[VAR_30];
  }
             }
      break;
 case 800:
      if(VAR_29 == 600) VAR_32 = VAR_14[VAR_30];
      else if(VAR_29 == 480) {
  if(!((VAR_27 & VAR_20) && (VAR_27 & VAR_22))) {
     VAR_32 = VAR_13[VAR_30];
  }
      }
      break;
 case 960:
      if(VAR_26 == VAR_16) {
  if(VAR_29 == 600) {
     if((VAR_27 & VAR_17) || ((VAR_27 & VAR_20) && (VAR_27 & VAR_21))) {
        VAR_32 = VAR_15[VAR_30];
     }
  }
      }
      break;
 case 1024:
      if(VAR_29 == 768) {
  if(VAR_31 & VAR_23) {
     VAR_32 = VAR_1[VAR_30];
  }
      } else if(VAR_29 == 576) {
  if( (VAR_27 & VAR_17) ||
      ((VAR_27 & VAR_20) && (VAR_27 & VAR_21)) ||
      ((VAR_31 & VAR_23) &&
       ((!(VAR_27 & (VAR_20 | VAR_19))) && (VAR_27 & VAR_18))) ) {
     VAR_32 = VAR_0[VAR_30];
  }
      }
      break;
 case 1280:
      if(VAR_29 == 720) {
  if((VAR_27 & VAR_17) ||
     ((VAR_27 & VAR_20) && (VAR_27 & (VAR_21 | VAR_22)))) {
     VAR_32 = VAR_3[VAR_30];
  }
      } else if(VAR_29 == 1024) {
  if((VAR_27 & VAR_17) ||
     ((VAR_27 & VAR_20) && (VAR_27 & VAR_21))) {
     VAR_32 = VAR_2[VAR_30];
  }
      }
      break;
      }
   }
   return VAR_32;
}
