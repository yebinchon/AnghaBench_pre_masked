
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int s8 ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;


 int FUNC_0 () ;







 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;

__attribute__((used)) static void FUNC_3(enum omap_plane VAR_0,
  u16 VAR_1, u16 VAR_2, u16 VAR_3, u16 VAR_4,
  bool VAR_5, enum omap_color_mode VAR_6, u8 VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;

 struct accu {
  s8 h0_m, h0_n;
  s8 h1_m, h1_n;
  s8 v0_m, v0_n;
  s8 v1_m, v1_n;
 };

 const struct accu *VAR_15;
 const struct accu *VAR_16;

 static const struct accu VAR_17[4] = {
  { 0, 1, 0, 1 , -1, 2, 0, 1 },
  { 1, 2, -3, 4 , 0, 1, 0, 1 },
  { -1, 1, 0, 1 , -1, 2, 0, 1 },
  { -1, 2, -1, 2 , -1, 1, 0, 1 },
 };

 static const struct accu VAR_18[4] = {
  { 0, 1, 0, 1 , -3, 4, -1, 4 },
  { -1, 4, -3, 4 , 0, 1, 0, 1 },
  { -1, 1, 0, 1 , -1, 4, -3, 4 },
  { -3, 4, -3, 4 , -1, 1, 0, 1 },
 };

 static const struct accu VAR_19[4] = {
  { 0, 1, 0, 1, 0, 1, 0, 1 },
  { 0, 1, 0, 1, 0, 1, 0, 1 },
  { -1, 1, 0, 1, 0, 1, 0, 1 },
  { 0, 1, 0, 1, -1, 1, 0, 1 },
 };

 switch (VAR_7) {
 case 131:
  VAR_14 = 0;
  break;
 case 128:
  VAR_14 = 1;
  break;
 case 130:
  VAR_14 = 2;
  break;
 case 129:
  VAR_14 = 3;
  break;
 default:
  FUNC_0();
  return;
 }

 switch (VAR_6) {
 case 134:
  if (VAR_5)
   VAR_15 = VAR_18;
  else
   VAR_15 = VAR_17;
  break;
 case 132:
 case 133:
  VAR_15 = VAR_19;
  break;
 default:
  FUNC_0();
  return;
 }

 VAR_16 = &VAR_15[VAR_14];

 VAR_12 = 1024 * VAR_1 / VAR_3;
 VAR_13 = 1024 * VAR_2 / VAR_4;

 VAR_8 = (VAR_16->h0_m * VAR_12 / VAR_16->h0_n) % 1024;
 VAR_9 = (VAR_16->h1_m * VAR_12 / VAR_16->h1_n) % 1024;
 VAR_10 = (VAR_16->v0_m * VAR_13 / VAR_16->v0_n) % 1024;
 VAR_11 = (VAR_16->v1_m * VAR_13 / VAR_16->v1_n) % 1024;

 FUNC_1(VAR_0, VAR_8, VAR_10);
 FUNC_2(VAR_0, VAR_9, VAR_11);
}
