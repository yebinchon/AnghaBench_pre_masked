
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
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
 unsigned short* VAR_16 ;
 unsigned short* VAR_17 ;
 unsigned short* VAR_18 ;
 unsigned short* VAR_19 ;
 unsigned short* VAR_20 ;
 unsigned short* VAR_21 ;
 unsigned short* VAR_22 ;
 unsigned short* VAR_23 ;
 unsigned short* VAR_24 ;
 unsigned short* VAR_25 ;
 unsigned short* VAR_26 ;
 unsigned short* VAR_27 ;
 unsigned short* VAR_28 ;
 unsigned short* VAR_29 ;
 unsigned short* VAR_30 ;
 unsigned short* VAR_31 ;
 unsigned short* VAR_32 ;
 unsigned short* VAR_33 ;
 unsigned short* VAR_34 ;
 unsigned short* VAR_35 ;
 unsigned short* VAR_36 ;
 unsigned short* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 unsigned int VAR_40 ;
 unsigned int VAR_41 ;
 unsigned int VAR_42 ;
 unsigned int VAR_43 ;
 unsigned int VAR_44 ;
 unsigned int VAR_45 ;

unsigned short
FUNC_0(int VAR_46, unsigned int VAR_47, int VAR_48, int VAR_49,
  int VAR_50, bool VAR_51, unsigned short VAR_52, int VAR_53, int VAR_54,
  unsigned int VAR_55)
{
   unsigned short VAR_56 = 0;

   if(VAR_55 & (VAR_43 | VAR_40)) {

      switch(VAR_48)
      {
 case 320:
      if((VAR_52 != VAR_1) && (VAR_52 != VAR_2)) {
  if(VAR_49 == 200) {
     if(!VAR_51) VAR_56 = VAR_22[VAR_50];
  } else if(VAR_49 == 240) {
     if(!VAR_51) VAR_56 = VAR_23[VAR_50];
     else if(VAR_46 == VAR_39) {
        VAR_56 = VAR_24[VAR_50];
     }
  }
      }
      break;
 case 400:
      if((VAR_52 != VAR_1) && (VAR_52 != VAR_2)) {
  if(!((VAR_46 == VAR_38) && (VAR_55 & VAR_45))) {
     if(VAR_49 == 300) VAR_56 = VAR_25[VAR_50];
  }
      }
      break;
 case 512:
      if((VAR_52 != VAR_1) && (VAR_52 != VAR_2)) {
  if(!((VAR_46 == VAR_38) && (VAR_55 & VAR_45))) {
     if(VAR_53 >= 1024 && VAR_53 != 1152 && VAR_54 >= 768) {
        if(VAR_49 == 384) {
           VAR_56 = VAR_26[VAR_50];
        }
     }
  }
      }
      break;
 case 640:
      if(VAR_49 == 480) VAR_56 = VAR_28[VAR_50];
      else if(VAR_49 == 400) {
  if((VAR_52 != VAR_1) && (VAR_52 != VAR_2))
     VAR_56 = VAR_27[VAR_50];
      }
      break;
 case 800:
      if(VAR_49 == 600) VAR_56 = VAR_33[VAR_50];
      break;
 case 848:
      if(VAR_52 == VAR_1) {
         if(VAR_49 == 480) VAR_56 = VAR_34[VAR_50];
      }
      break;
 case 856:
      if(VAR_52 == VAR_2) {
         if(VAR_49 == 480) VAR_56 = VAR_35[VAR_50];
      }
      break;
 case 1024:
      if(VAR_49 == 768) VAR_56 = VAR_5[VAR_50];
      else if(VAR_46 == VAR_38) {
  if((VAR_49 == 600) && (VAR_54 == 600)) {
     VAR_56 = VAR_4[VAR_50];
  }
      }
      break;
 case 1152:
      if(VAR_46 == VAR_38) {
  if((VAR_49 == 768) && (VAR_54 == 768)) {
     VAR_56 = VAR_6[VAR_50];
  }
      }
      break;
        case 1280:
      if(VAR_49 == 1024) VAR_56 = VAR_8[VAR_50];
      else if(VAR_46 == VAR_39) {
  if((VAR_49 == 768) && (VAR_54 == 768)) {
     VAR_56 = VAR_20[VAR_50];
  }
      }
      break;
 case 1360:
      if(VAR_46 == VAR_38) {
  if(VAR_52 == VAR_0) {
     if(VAR_49 == 1024) VAR_56 = VAR_19[VAR_50];
  }
      }
      if(VAR_52 == VAR_1) {
  if(VAR_49 == 768) VAR_56 = VAR_13[VAR_50];
      }
      break;
 case 1400:
      if(VAR_46 == VAR_39) {
  if(VAR_49 == 1050) VAR_56 = VAR_14[VAR_50];
      }
      break;
 case 1600:
      if(VAR_46 == VAR_39) {
  if(VAR_49 == 1200) VAR_56 = VAR_15[VAR_50];
      }
      break;
      }

   } else if(VAR_55 & VAR_44) {

      switch(VAR_48)
      {
 case 320:
      if(VAR_49 == 200) VAR_56 = VAR_22[VAR_50];
      else if(VAR_49 == 240) VAR_56 = VAR_23[VAR_50];
      break;
 case 400:
      if(VAR_53 >= 800 && VAR_54 >= 600) {
  if(VAR_49 == 300) VAR_56 = VAR_25[VAR_50];
      }
      break;
 case 512:
      if(VAR_53 >= 1024 && VAR_54 >= 768 && VAR_53 != 1152) {
  if(VAR_49 == 384) VAR_56 = VAR_26[VAR_50];
      }
      break;
 case 640:
      if(VAR_49 == 480) VAR_56 = VAR_28[VAR_50];
      else if(VAR_49 == 400) VAR_56 = VAR_27[VAR_50];
      break;
 case 720:
      if(VAR_46 == VAR_39) {
  if(VAR_49 == 480) VAR_56 = VAR_29[VAR_50];
  else if(VAR_49 == 576) VAR_56 = VAR_30[VAR_50];
      }
      break;
 case 768:
      if(VAR_46 == VAR_39) {
  if(VAR_49 == 576) VAR_56 = VAR_31[VAR_50];
      }
      break;
 case 800:
      if(VAR_49 == 600) VAR_56 = VAR_33[VAR_50];
      if(VAR_46 == VAR_39) {
  if(VAR_49 == 480) VAR_56 = VAR_32[VAR_50];
      }
      break;
 case 848:
      if(VAR_46 == VAR_39) {
  if(VAR_49 == 480) VAR_56 = VAR_34[VAR_50];
      }
      break;
 case 856:
      if(VAR_46 == VAR_39) {
  if(VAR_49 == 480) VAR_56 = VAR_35[VAR_50];
      }
      break;
 case 960:
      if(VAR_46 == VAR_39) {
  if(VAR_49 == 540) VAR_56 = VAR_36[VAR_50];
  else if(VAR_49 == 600) VAR_56 = VAR_37[VAR_50];
      }
      break;
 case 1024:
      if(VAR_49 == 768) VAR_56 = VAR_5[VAR_50];
      if(VAR_46 == VAR_39) {
  if(VAR_49 == 576) VAR_56 = VAR_3[VAR_50];
      }
      break;
 case 1152:
      if(VAR_46 == VAR_39) {
  if(VAR_49 == 864) VAR_56 = VAR_7[VAR_50];
      }
      break;
 case 1280:
      switch(VAR_49) {
      case 720:
  VAR_56 = VAR_9[VAR_50];
  break;
      case 768:
  if(VAR_46 == VAR_38) {
     VAR_56 = VAR_18[VAR_50];
  } else {
     VAR_56 = VAR_20[VAR_50];
  }
  break;
      case 800:
  if(VAR_46 == VAR_39) {
     VAR_56 = VAR_10[VAR_50];
  }
  break;
      case 854:
  if(VAR_46 == VAR_39) {
     VAR_56 = VAR_11[VAR_50];
  }
  break;
      case 960:
  VAR_56 = VAR_12[VAR_50];
  break;
      case 1024:
  VAR_56 = VAR_8[VAR_50];
  break;
      }
      break;
 case 1360:
      if(VAR_46 == VAR_39) {
  if(VAR_49 == 768) VAR_56 = VAR_13[VAR_50];
      }
      break;
 case 1400:
      if(VAR_46 == VAR_39) {
  if(VAR_55 & VAR_41) {
     if(VAR_49 == 1050) VAR_56 = VAR_14[VAR_50];
  }
      }
      break;
 case 1600:
      if(VAR_46 == VAR_39) {
  if(VAR_55 & VAR_41) {
     if(VAR_49 == 1200) VAR_56 = VAR_15[VAR_50];
  }
      }
      break;

 case 1680:
      if(VAR_46 == VAR_39) {
  if(VAR_55 & VAR_41) {
     if(VAR_49 == 1050) VAR_56 = VAR_16[VAR_50];
  }
      }
      break;
 case 1920:
      if(VAR_46 == VAR_39) {
  if(VAR_55 & VAR_42) {
     if(VAR_49 == 1440) VAR_56 = VAR_17[VAR_50];
  }
      }
      break;
 case 2048:
      if(VAR_46 == VAR_39) {
  if(VAR_55 & VAR_42) {
     if(VAR_49 == 1536) VAR_56 = VAR_21[VAR_50];
  }
      }
      break;

      }
   }

   return VAR_56;
}
