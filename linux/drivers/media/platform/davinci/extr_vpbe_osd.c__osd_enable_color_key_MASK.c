
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_state {int vpbe_type; } ;
typedef enum osd_win_layer { ____Placeholder_osd_win_layer } osd_win_layer ;
typedef enum osd_pix_format { ____Placeholder_osd_pix_format } osd_pix_format ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct osd_state*,int ,unsigned int,int ) ;
 int FUNC_1 (struct osd_state*,int ,int ) ;
 int FUNC_2 (struct osd_state*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct osd_state *VAR_18,
      enum osd_win_layer VAR_19,
      unsigned VAR_20,
      enum osd_pix_format VAR_21)
{
 switch (VAR_21) {
 case 135:
 case 134:
 case 133:
 case 132:
  if (VAR_18->vpbe_type == VAR_17) {
   switch (VAR_19) {
   case 137:
    FUNC_0(VAR_18, VAR_5,
       VAR_20 <<
       VAR_6,
       VAR_4);
    break;
   case 136:
    FUNC_0(VAR_18, VAR_7,
       VAR_20 <<
       VAR_8,
       VAR_4);
    break;
   }
  }
  break;
 case 131:
  if (VAR_18->vpbe_type == VAR_16)
   FUNC_2(VAR_18, VAR_20 & VAR_15,
      VAR_9);
  else if (VAR_18->vpbe_type == VAR_17)
   FUNC_2(VAR_18, VAR_20 & VAR_11,
      VAR_10);
  break;
 case 129:
 case 128:
  if (VAR_18->vpbe_type == VAR_17)
   FUNC_0(VAR_18, VAR_14, VAR_20,
       VAR_12);
  break;
 case 130:
  if (VAR_18->vpbe_type == VAR_17) {
   FUNC_2(VAR_18, VAR_20 & VAR_11,
      VAR_10);
   FUNC_0(VAR_18, VAR_13, VAR_20 >> 16,
      VAR_12);
  }
  break;
 default:
  break;
 }

 switch (VAR_19) {
 case 137:
  FUNC_1(VAR_18, VAR_1, VAR_0);
  break;
 case 136:
  FUNC_1(VAR_18, VAR_3, VAR_2);
  break;
 }
}
