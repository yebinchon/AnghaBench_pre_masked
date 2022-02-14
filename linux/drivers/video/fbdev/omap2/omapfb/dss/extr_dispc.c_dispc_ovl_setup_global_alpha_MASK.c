
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(enum omap_plane VAR_2,
  enum omap_overlay_caps VAR_3, u8 VAR_4)
{
 static const unsigned VAR_5[] = { 0, 8, 16, 24, };
 int VAR_6;

 if ((VAR_3 & VAR_1) == 0)
  return;

 VAR_6 = VAR_5[VAR_2];
 FUNC_0(VAR_0, VAR_4, VAR_6 + 7, VAR_6);
}
