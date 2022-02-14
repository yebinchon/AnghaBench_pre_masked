
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_color_component { ____Placeholder_omap_color_component } omap_color_component ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int*,int*) ;

__attribute__((used)) static void FUNC_5(enum omap_plane VAR_3,
    int VAR_4, int VAR_5,
    enum omap_color_component VAR_6)
{
 u32 VAR_7;

 if (VAR_6 == VAR_0) {
  u8 VAR_8, VAR_9, VAR_10, VAR_11;

  FUNC_4(VAR_1,
     &VAR_8, &VAR_9);
  FUNC_4(VAR_2,
     &VAR_10, &VAR_11);
  VAR_7 = FUNC_2(VAR_5, VAR_10, VAR_11) |
    FUNC_2(VAR_4, VAR_8, VAR_9);

  FUNC_3(FUNC_0(VAR_3), VAR_7);
 } else {
  VAR_7 = FUNC_2(VAR_5, 28, 16) | FUNC_2(VAR_4, 12, 0);
  FUNC_3(FUNC_1(VAR_3), VAR_7);
 }
}
