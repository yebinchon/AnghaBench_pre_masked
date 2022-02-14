
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long line_length; unsigned long ysize; scalar_t__ pixfmt; } ;
struct osd_window_state {TYPE_1__ lconfig; } ;
struct osd_state {scalar_t__ vpbe_type; struct osd_window_state* win; } ;
typedef enum osd_layer { ____Placeholder_osd_layer } osd_layer ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 int VAR_19 ;
 unsigned long VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned long VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 unsigned long VAR_31 ;
 int VAR_32 ;
 unsigned long VAR_33 ;
 unsigned long VAR_34 ;
 unsigned long VAR_35 ;
 unsigned long VAR_36 ;
 scalar_t__ VAR_37 ;
 unsigned long VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;




 int FUNC_0 (struct osd_state*,int ,unsigned long,int ) ;
 int FUNC_1 (struct osd_state*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct osd_state *VAR_42, enum osd_layer VAR_43,
        unsigned long VAR_44,
        unsigned long VAR_45)
{

 if (VAR_42->vpbe_type == VAR_39) {
  switch (VAR_43) {
  case 131:
   FUNC_1(VAR_42, VAR_44 & ~0x1F, VAR_2);
   break;
  case 129:
   FUNC_1(VAR_42, VAR_44 & ~0x1F, VAR_21);
   break;
  case 130:
   FUNC_1(VAR_42, VAR_44 & ~0x1F, VAR_7);
   break;
  case 128:
   FUNC_1(VAR_42, VAR_44 & ~0x1F, VAR_26);
   break;
       }
 } else if (VAR_42->vpbe_type == VAR_41) {
  unsigned long VAR_46 =
      (VAR_44 - VAR_38) >> 5;

  switch (VAR_43) {
  case 131:
   FUNC_0(VAR_42, VAR_11,
      VAR_46 >> (VAR_15 -
         VAR_12),
      VAR_10);
   FUNC_1(VAR_42, VAR_46 & VAR_1,
      VAR_0);
   break;
  case 129:
   FUNC_0(VAR_42, VAR_30,
      VAR_46 >> (VAR_15 -
         VAR_31),
      VAR_29);
   FUNC_1(VAR_42, VAR_46 & VAR_20,
      VAR_19);
   break;
  case 130:
   FUNC_0(VAR_42, VAR_13,
      VAR_46 >> (VAR_15 -
         VAR_14),
      VAR_10);
   FUNC_1(VAR_42, VAR_46 & VAR_6,
      VAR_5);
   break;
  case 128:
   FUNC_0(VAR_42, VAR_32,
      VAR_46 >> (VAR_15 -
         VAR_33),
      VAR_29);
   FUNC_1(VAR_42, VAR_46 & VAR_25,
      VAR_24);
   break;
  }
 } else if (VAR_42->vpbe_type == VAR_40) {
  struct osd_window_state *VAR_47 = &VAR_42->win[VAR_43];
  unsigned long VAR_48, VAR_49;

  VAR_48 = VAR_44 - VAR_38;
  if (VAR_45)
   VAR_49 = VAR_45;
  else
   VAR_49 = VAR_47->lconfig.line_length *
      VAR_47->lconfig.ysize;
  VAR_49 += VAR_48;
  VAR_48 = VAR_48 >> 5;
  VAR_49 = VAR_49 >> 5;




  if (VAR_47->lconfig.pixfmt == VAR_37) {
   switch (VAR_43) {
   case 129:
   case 128:

    FUNC_0(VAR_42, VAR_23,
      ((VAR_48 & VAR_17) >>
      (VAR_16 -
      VAR_35)) |
      VAR_36, VAR_22);
    FUNC_0(VAR_42, VAR_30,
       (VAR_48 & VAR_18) >>
       (VAR_15 -
       VAR_31),
        VAR_29);
    FUNC_1(VAR_42, VAR_48 & VAR_34,
       VAR_19);

    FUNC_0(VAR_42, VAR_28,
      ((VAR_49 &
      VAR_17) >>
      (VAR_16 -
      VAR_35)) |
      VAR_36, VAR_27);
    FUNC_0(VAR_42, VAR_32,
       (VAR_49 &
       VAR_18) >>
       (VAR_15 -
       VAR_33),
       VAR_29);
    FUNC_1(VAR_42, VAR_49 & VAR_34,
       VAR_24);
    break;
   default:
    break;
   }
  }

  switch (VAR_43) {
  case 131:
   FUNC_0(VAR_42, VAR_4,
     ((VAR_48 & VAR_17) >>
     (VAR_16 -
     VAR_35)) | VAR_36,
      VAR_3);
   FUNC_0(VAR_42, VAR_11,
     (VAR_48 & VAR_18) >>
     (VAR_15 -
     VAR_12), VAR_10);
   FUNC_1(VAR_42, VAR_48 & VAR_34,
     VAR_0);
   break;
  case 129:
   if (VAR_47->lconfig.pixfmt != VAR_37) {
    FUNC_0(VAR_42, VAR_23,
      ((VAR_48 & VAR_17) >>
      (VAR_16 -
      VAR_35)) |
      VAR_36, VAR_22);
    FUNC_0(VAR_42, VAR_30,
       (VAR_48 & VAR_18) >>
       (VAR_15 -
       VAR_31),
       VAR_29);
    FUNC_1(VAR_42, VAR_48 & VAR_34,
       VAR_19);
   }
   break;
  case 130:
   FUNC_0(VAR_42, VAR_9,
     ((VAR_48 & VAR_17) >>
     (VAR_16 -
     VAR_35)) | VAR_36,
      VAR_8);
   FUNC_0(VAR_42, VAR_13,
      (VAR_48 & VAR_18) >>
      (VAR_15 -
      VAR_14),
      VAR_10);
   FUNC_1(VAR_42, VAR_48 & VAR_34,
     VAR_5);
   break;
  case 128:
   if (VAR_47->lconfig.pixfmt != VAR_37) {
    FUNC_0(VAR_42, VAR_28,
      ((VAR_48 & VAR_17) >>
      (VAR_16 -
      VAR_35)) |
      VAR_36, VAR_27);
    FUNC_0(VAR_42, VAR_32,
       (VAR_48 & VAR_18) >>
       (VAR_15 -
       VAR_33),
       VAR_29);
    FUNC_1(VAR_42, VAR_48 & VAR_34,
       VAR_24);
   }
   break;
  }
 }
}
