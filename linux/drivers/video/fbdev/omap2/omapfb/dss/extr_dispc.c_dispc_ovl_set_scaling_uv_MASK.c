
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int ) ;
 int FUNC_5 (int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(enum omap_plane VAR_5,
  u16 VAR_6, u16 VAR_7,
  u16 VAR_8, u16 VAR_9,
  bool VAR_10, bool VAR_11,
  bool VAR_12, enum omap_color_mode VAR_13,
  u8 VAR_14)
{
 int VAR_15 = VAR_8 != VAR_6;
 int VAR_16 = VAR_9 != VAR_7;
 bool VAR_17 = VAR_5 != VAR_4 ? 1 : 0;

 if (!FUNC_6(VAR_1))
  return;
 if ((VAR_13 != 128 &&
   VAR_13 != 129 &&
   VAR_13 != 130)) {

  if (VAR_5 != VAR_4)
   FUNC_3(FUNC_2(VAR_5), 0, 8, 8);
  return;
 }

 FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8,
   VAR_9, VAR_10, VAR_13, VAR_14);

 switch (VAR_13) {
 case 130:
  if (VAR_17) {

   VAR_7 >>= 1;
   VAR_6 >>= 1;
  } else {

   VAR_7 <<= 1;
   VAR_6 <<= 1;
  }

  break;
 case 128:
 case 129:

  if (VAR_14 == VAR_2 ||
    VAR_14 == VAR_3) {
   if (VAR_17)

    VAR_6 >>= 1;
   else

    VAR_6 <<= 1;
  }


  if (VAR_14 != VAR_2)
   VAR_15 = VAR_16 = 1;

  break;
 default:
  FUNC_0();
  return;
 }

 if (VAR_8 != VAR_6)
  VAR_15 = 1;
 if (VAR_9 != VAR_7)
  VAR_16 = 1;

 FUNC_5(VAR_5, VAR_6, VAR_7,
   VAR_8, VAR_9, VAR_11,
    VAR_14, VAR_0);

 if (VAR_5 != VAR_4)
  FUNC_3(FUNC_2(VAR_5),
   (VAR_15 || VAR_16) ? 1 : 0, 8, 8);


 FUNC_3(FUNC_1(VAR_5), VAR_15 ? 1 : 0, 5, 5);

 FUNC_3(FUNC_1(VAR_5), VAR_16 ? 1 : 0, 6, 6);
}
