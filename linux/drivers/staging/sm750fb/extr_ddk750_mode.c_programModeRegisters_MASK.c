
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_value {scalar_t__ clockType; } ;
struct mode_parameter {int horizontal_total; int horizontal_display_end; unsigned int horizontal_sync_width; int horizontal_sync_start; int vertical_total; int vertical_display_end; unsigned int vertical_sync_height; int vertical_sync_start; scalar_t__ clock_phase_polarity; scalar_t__ horizontal_sync_polarity; scalar_t__ vertical_sync_polarity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
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
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 int FUNC_0 (struct mode_parameter*,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 unsigned int FUNC_3 (struct pll_value*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct mode_parameter *VAR_46,
    struct pll_value *VAR_47)
{
 int VAR_48 = 0;
 int VAR_49 = 0;
 unsigned int VAR_50, VAR_51;

 if (VAR_47->clockType == VAR_44) {

  FUNC_2(VAR_9, FUNC_3(VAR_47));

  VAR_50 = ((VAR_46->horizontal_total - 1) <<
         VAR_8) &
       VAR_7;
  VAR_50 |= (VAR_46->horizontal_display_end - 1) &
        VAR_6;

  FUNC_2(VAR_5, VAR_50);

  VAR_50 = (VAR_46->horizontal_sync_width <<
         VAR_4) &
       VAR_3;
  VAR_50 |= (VAR_46->horizontal_sync_start - 1) &
        VAR_2;

  FUNC_2(VAR_1, VAR_50);

  VAR_50 = ((VAR_46->vertical_total - 1) <<
         VAR_17) &
       VAR_16;
  VAR_50 |= (VAR_46->vertical_display_end - 1) &
        VAR_15;

  FUNC_2(VAR_14, VAR_50);

  VAR_50 = ((VAR_46->vertical_sync_height <<
         VAR_12)) &
       VAR_11;
  VAR_50 |= (VAR_46->vertical_sync_start - 1) &
        VAR_13;

  FUNC_2(VAR_10, VAR_50);

  VAR_50 = VAR_21 | VAR_20;
  if (VAR_46->vertical_sync_polarity)
   VAR_50 |= VAR_22;
  if (VAR_46->horizontal_sync_polarity)
   VAR_50 |= VAR_19;

  if (FUNC_4() == VAR_45) {
   FUNC_0(VAR_46, VAR_50);
  } else {
   VAR_51 = FUNC_1(VAR_0) &
    ~(VAR_22 |
      VAR_19 |
      VAR_21 | VAR_20);

   FUNC_2(VAR_0, VAR_50 | VAR_51);
  }

 } else if (VAR_47->clockType == VAR_43) {
  unsigned int VAR_52;

  FUNC_2(VAR_34, FUNC_3(VAR_47));

  VAR_51 = ((VAR_46->horizontal_total - 1) <<
   VAR_33) &
   VAR_32;
  VAR_51 |= ((VAR_46->horizontal_display_end - 1) &
   VAR_31);
  FUNC_2(VAR_30, VAR_51);

  FUNC_2(VAR_26,
         ((VAR_46->horizontal_sync_width <<
    VAR_29) &
   VAR_28) |
         ((VAR_46->horizontal_sync_start - 1) &
   VAR_27));

  FUNC_2(VAR_39,
         (((VAR_46->vertical_total - 1) <<
    VAR_42) &
   VAR_41) |
         ((VAR_46->vertical_display_end - 1) &
   VAR_40));

  FUNC_2(VAR_35,
         ((VAR_46->vertical_sync_height <<
    VAR_37) &
   VAR_36) |
         ((VAR_46->vertical_sync_start - 1) &
   VAR_38));

  VAR_50 = VAR_21 | VAR_20;
  if (VAR_46->vertical_sync_polarity)
   VAR_50 |= VAR_22;
  if (VAR_46->horizontal_sync_polarity)
   VAR_50 |= VAR_19;
  if (VAR_46->clock_phase_polarity)
   VAR_50 |= VAR_18;

  VAR_52 = VAR_24 |
   VAR_25;

  VAR_51 = (FUNC_1(VAR_23) & ~VAR_52) &
   ~(VAR_18 | VAR_22 |
     VAR_19 | VAR_21 |
     VAR_20);
  FUNC_2(VAR_23, VAR_50 | VAR_51);

  while ((FUNC_1(VAR_23) & ~VAR_52) !=
   (VAR_50 | VAR_51)) {
   VAR_49++;
   if (VAR_49 > 1000)
    break;
   FUNC_2(VAR_23, VAR_50 | VAR_51);
  }
 } else {
  VAR_48 = -1;
 }
 return VAR_48;
}
