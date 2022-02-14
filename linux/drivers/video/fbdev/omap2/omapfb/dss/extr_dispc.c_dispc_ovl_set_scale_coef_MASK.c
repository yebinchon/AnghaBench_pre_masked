
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dispc_coef {int hc4_vc22; int hc0_vc00; int hc3_vc2; int hc2_vc1; int hc1_vc0; } ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_color_component { ____Placeholder_omap_color_component } omap_color_component ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 struct dispc_coef* FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (int,int,int) ;

__attribute__((used)) static void FUNC_8(enum omap_plane VAR_1, int VAR_2,
    int VAR_3, int VAR_4,
    enum omap_color_component VAR_5)
{
 const struct dispc_coef *VAR_6, *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_2, 1);
 VAR_7 = FUNC_1(VAR_3, VAR_4);

 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  u32 VAR_9, VAR_10;

  VAR_9 = FUNC_0(VAR_6[VAR_8].hc0_vc00, 7, 0)
   | FUNC_0(VAR_6[VAR_8].hc1_vc0, 15, 8)
   | FUNC_0(VAR_6[VAR_8].hc2_vc1, 23, 16)
   | FUNC_0(VAR_6[VAR_8].hc3_vc2, 31, 24);
  VAR_10 = FUNC_0(VAR_6[VAR_8].hc4_vc22, 7, 0)
   | FUNC_0(VAR_7[VAR_8].hc1_vc0, 15, 8)
   | FUNC_0(VAR_7[VAR_8].hc2_vc1, 23, 16)
   | FUNC_0(VAR_7[VAR_8].hc3_vc2, 31, 24);

  if (VAR_5 == VAR_0) {
   FUNC_3(VAR_1, VAR_8, VAR_9);
   FUNC_5(VAR_1, VAR_8, VAR_10);
  } else {
   FUNC_2(VAR_1, VAR_8, VAR_9);
   FUNC_4(VAR_1, VAR_8, VAR_10);
  }

 }

 if (VAR_4) {
  for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
   u32 VAR_11;
   VAR_11 = FUNC_0(VAR_7[VAR_8].hc0_vc00, 7, 0)
    | FUNC_0(VAR_7[VAR_8].hc4_vc22, 15, 8);
   if (VAR_5 == VAR_0)
    FUNC_7(VAR_1, VAR_8, VAR_11);
   else
    FUNC_6(VAR_1, VAR_8, VAR_11);
  }
 }
}
