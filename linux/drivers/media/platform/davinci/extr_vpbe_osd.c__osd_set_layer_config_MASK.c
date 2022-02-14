
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct osd_state {int vpbe_type; } ;
struct osd_layer_config {int pixfmt; int line_length; int xpos; int xsize; int ypos; int ysize; int interlaced; } ;
typedef enum osd_layer { ____Placeholder_osd_layer } osd_layer ;


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
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;




 int VAR_45 ;
 int VAR_46 ;




 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;




 int FUNC_0 (struct osd_state*,int ) ;
 int FUNC_1 (struct osd_state*,int) ;
 int FUNC_2 (struct osd_state*,int,int,int ) ;
 int FUNC_3 (struct osd_state*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct osd_state *VAR_50, enum osd_layer VAR_51,
      const struct osd_layer_config *VAR_52)
{
 u32 VAR_53 = 0, VAR_54 = 0, VAR_55 = 0;

 FUNC_1(VAR_50, VAR_52->pixfmt);

 switch (VAR_51) {
 case 131:
  if (VAR_50->vpbe_type == VAR_47) {
   VAR_54 |= VAR_10;
   if (VAR_52->pixfmt == 135)
    VAR_53 |= VAR_10;
  } else if ((VAR_50->vpbe_type == VAR_49) ||
    (VAR_50->vpbe_type == VAR_48)) {
   VAR_54 |= VAR_5;
   switch (VAR_52->pixfmt) {
   case 135:
     VAR_53 |= (1 <<
     VAR_6);
     break;
   case 134:
    VAR_53 |= (2 << VAR_6);
    FUNC_0(VAR_50, VAR_0);
    break;
   case 133:
   case 132:
    VAR_53 |= (3 << VAR_6);
    break;
   default:
    break;
   }
  }

  VAR_54 |= VAR_7 | VAR_9;

  switch (VAR_52->pixfmt) {
  case 139:
   VAR_55 = 0;
   break;
  case 138:
   VAR_55 = 1;
   break;
  case 137:
   VAR_55 = 2;
   break;
  case 136:
   VAR_55 = 3;
   break;
  default:
   break;
  }
  VAR_53 |= (VAR_55 << VAR_8);

  if (VAR_52->interlaced)
   VAR_53 |= VAR_9;

  FUNC_2(VAR_50, VAR_54, VAR_53, VAR_4);
  FUNC_3(VAR_50, VAR_52->line_length >> 5, VAR_11);
  FUNC_3(VAR_50, VAR_52->xpos, VAR_13);
  FUNC_3(VAR_50, VAR_52->xsize, VAR_12);
  if (VAR_52->interlaced) {
   FUNC_3(VAR_50, VAR_52->ypos >> 1, VAR_15);
   FUNC_3(VAR_50, VAR_52->ysize >> 1, VAR_14);
  } else {
   FUNC_3(VAR_50, VAR_52->ypos, VAR_15);
   FUNC_3(VAR_50, VAR_52->ysize, VAR_14);
  }
  break;
 case 129:
  VAR_54 |= VAR_43;
  if (VAR_52->interlaced)
   VAR_53 |= VAR_43;

  FUNC_2(VAR_50, VAR_54, VAR_53, VAR_42);
  FUNC_3(VAR_50, VAR_52->line_length >> 5, VAR_32);
  FUNC_3(VAR_50, VAR_52->xpos, VAR_34);
  FUNC_3(VAR_50, VAR_52->xsize, VAR_33);




  if ((VAR_50->vpbe_type == VAR_48) &&
    (VAR_52->pixfmt == VAR_45)) {

   if (VAR_52->interlaced) {
    VAR_54 |= VAR_44;
    VAR_53 |= VAR_44;
    FUNC_2(VAR_50, VAR_54, VAR_53,
       VAR_42);
   }

   FUNC_2(VAR_50, VAR_3,
        VAR_3, VAR_2);
   FUNC_3(VAR_50, VAR_52->line_length >> 5,
      VAR_37);
   FUNC_3(VAR_50, VAR_52->xpos, VAR_39);
   FUNC_3(VAR_50, VAR_52->xsize, VAR_38);





   if (VAR_52->xsize % 32) {
    FUNC_3(VAR_50,
       ((VAR_52->xsize + 31) & ~31),
       VAR_38);
    FUNC_3(VAR_50,
       ((VAR_52->xsize + 31) & ~31),
       VAR_33);
   }
  } else if ((VAR_50->vpbe_type == VAR_48) &&
    (VAR_52->pixfmt != VAR_45)) {
   FUNC_2(VAR_50, VAR_3, ~VAR_3,
      VAR_2);
  }

  if (VAR_52->interlaced) {
   FUNC_3(VAR_50, VAR_52->ypos >> 1, VAR_36);
   FUNC_3(VAR_50, VAR_52->ysize >> 1, VAR_35);
   if ((VAR_50->vpbe_type == VAR_48) &&
    VAR_52->pixfmt == VAR_45) {
    FUNC_3(VAR_50, VAR_52->ypos >> 1,
       VAR_41);
    FUNC_3(VAR_50, VAR_52->ysize >> 1,
       VAR_40);
   }
  } else {
   FUNC_3(VAR_50, VAR_52->ypos, VAR_36);
   FUNC_3(VAR_50, VAR_52->ysize, VAR_35);
   if ((VAR_50->vpbe_type == VAR_48) &&
    VAR_52->pixfmt == VAR_45) {
    FUNC_3(VAR_50, VAR_52->ypos, VAR_41);
    FUNC_3(VAR_50, VAR_52->ysize, VAR_40);
   }
  }
  break;
 case 130:





  if (VAR_52->pixfmt == VAR_46) {
   if (VAR_50->vpbe_type == VAR_47) {
    VAR_54 |= VAR_17 |
    VAR_25 | VAR_23 |
    VAR_18 | VAR_26;
   } else {
    VAR_54 |= VAR_19 |
    VAR_23 | VAR_18 |
    VAR_26;
   }
  } else {
   if (VAR_50->vpbe_type == VAR_47) {
    VAR_54 |= VAR_25;
    if (VAR_52->pixfmt == 135)
     VAR_53 |= VAR_25;
   } else if ((VAR_50->vpbe_type == VAR_49)
       || (VAR_50->vpbe_type == VAR_48)) {
    VAR_54 |= VAR_19;
    switch (VAR_52->pixfmt) {
    case 135:
     VAR_53 |=
         (1 << VAR_20);
     break;
    case 134:
     VAR_53 |=
         (2 << VAR_20);
     FUNC_0(VAR_50,
       VAR_1);
     break;
    case 133:
    case 132:
     VAR_53 |=
         (3 << VAR_20);
     break;
    default:
     break;
    }
   }

   VAR_54 |= VAR_21;
   switch (VAR_52->pixfmt) {
   case 139:
    VAR_55 = 0;
    break;
   case 138:
    VAR_55 = 1;
    break;
   case 137:
    VAR_55 = 2;
    break;
   case 136:
    VAR_55 = 3;
    break;
   default:
    break;
   }
   VAR_53 |= (VAR_55 << VAR_22);
  }

  VAR_54 |= VAR_24;
  if (VAR_52->interlaced)
   VAR_53 |= VAR_24;

  FUNC_2(VAR_50, VAR_54, VAR_53, VAR_16);
  FUNC_3(VAR_50, VAR_52->line_length >> 5, VAR_27);
  FUNC_3(VAR_50, VAR_52->xpos, VAR_29);
  FUNC_3(VAR_50, VAR_52->xsize, VAR_28);
  if (VAR_52->interlaced) {
   FUNC_3(VAR_50, VAR_52->ypos >> 1, VAR_31);
   FUNC_3(VAR_50, VAR_52->ysize >> 1, VAR_30);
  } else {
   FUNC_3(VAR_50, VAR_52->ypos, VAR_31);
   FUNC_3(VAR_50, VAR_52->ysize, VAR_30);
  }
  break;
 case 128:
  VAR_54 |= VAR_44;
  if (VAR_52->interlaced)
   VAR_53 |= VAR_44;

  FUNC_2(VAR_50, VAR_54, VAR_53, VAR_42);
  FUNC_3(VAR_50, VAR_52->line_length >> 5, VAR_37);
  FUNC_3(VAR_50, VAR_52->xpos, VAR_39);
  FUNC_3(VAR_50, VAR_52->xsize, VAR_38);




  if (VAR_50->vpbe_type == VAR_48) {
   if (VAR_52->pixfmt == VAR_45) {

    if (VAR_52->interlaced) {
     VAR_54 |= VAR_43;
     VAR_53 |= VAR_43;
     FUNC_2(VAR_50, VAR_54, VAR_53,
        VAR_42);
    }
    FUNC_2(VAR_50, VAR_3,
        VAR_3, VAR_2);
    FUNC_3(VAR_50, VAR_52->line_length >> 5,
       VAR_32);
    FUNC_3(VAR_50, VAR_52->xpos, VAR_34);
    FUNC_3(VAR_50, VAR_52->xsize, VAR_33);
   } else {
    FUNC_2(VAR_50, VAR_3,
        ~VAR_3, VAR_2);
   }
  }

  if (VAR_52->interlaced) {
   FUNC_3(VAR_50, VAR_52->ypos >> 1, VAR_41);
   FUNC_3(VAR_50, VAR_52->ysize >> 1, VAR_40);
   if ((VAR_50->vpbe_type == VAR_48) &&
    VAR_52->pixfmt == VAR_45) {
    FUNC_3(VAR_50, VAR_52->ypos >> 1,
       VAR_36);
    FUNC_3(VAR_50, VAR_52->ysize >> 1,
       VAR_35);
   }
  } else {
   FUNC_3(VAR_50, VAR_52->ypos, VAR_41);
   FUNC_3(VAR_50, VAR_52->ysize, VAR_40);
   if ((VAR_50->vpbe_type == VAR_48) &&
    VAR_52->pixfmt == VAR_45) {
    FUNC_3(VAR_50, VAR_52->ypos, VAR_36);
    FUNC_3(VAR_50, VAR_52->ysize, VAR_35);
   }
  }
  break;
 }
}
