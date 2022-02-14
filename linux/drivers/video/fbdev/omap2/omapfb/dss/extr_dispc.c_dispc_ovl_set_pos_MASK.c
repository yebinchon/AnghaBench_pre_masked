
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(enum omap_plane VAR_1,
  enum omap_overlay_caps VAR_2, int VAR_3, int VAR_4)
{
 u32 VAR_5;

 if ((VAR_2 & VAR_0) == 0)
  return;

 VAR_5 = FUNC_1(VAR_4, 26, 16) | FUNC_1(VAR_3, 10, 0);

 FUNC_2(FUNC_0(VAR_1), VAR_5);
}
