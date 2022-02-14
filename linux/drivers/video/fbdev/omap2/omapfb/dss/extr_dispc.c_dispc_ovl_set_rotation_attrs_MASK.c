
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_dss_rotation_type { ____Placeholder_omap_dss_rotation_type } omap_dss_rotation_type ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_1 (int ,int,int,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(enum omap_plane VAR_5, u8 VAR_6,
  enum omap_dss_rotation_type VAR_7,
  bool VAR_8, enum omap_color_mode VAR_9)
{
 bool VAR_10 = 0;
 int VAR_11 = 0;

 if (VAR_9 == VAR_3 ||
   VAR_9 == VAR_2) {

  if (VAR_8) {
   switch (VAR_6) {
   case 131:
    VAR_11 = 2;
    break;
   case 128:
    VAR_11 = 1;
    break;
   case 130:
    VAR_11 = 0;
    break;
   case 129:
    VAR_11 = 3;
    break;
   }
  } else {
   switch (VAR_6) {
   case 131:
    VAR_11 = 0;
    break;
   case 128:
    VAR_11 = 1;
    break;
   case 130:
    VAR_11 = 2;
    break;
   case 129:
    VAR_11 = 3;
    break;
   }
  }

  if (VAR_6 == 128 || VAR_6 == 129)
   VAR_10 = 1;
  else
   VAR_10 = 0;
 }






 if (VAR_9 == VAR_1 &&
   VAR_7 != VAR_4)
  VAR_11 = 1;

 FUNC_1(FUNC_0(VAR_5), VAR_11, 13, 12);
 if (FUNC_2(VAR_0))
  FUNC_1(FUNC_0(VAR_5),
   VAR_10 ? 1 : 0, 18, 18);

 if (VAR_9 == VAR_1) {
  bool VAR_12 = (VAR_7 == VAR_4) &&
     (VAR_6 == 131 ||
     VAR_6 == 130);

  FUNC_1(FUNC_0(VAR_5), VAR_12, 22, 22);
 }

}
