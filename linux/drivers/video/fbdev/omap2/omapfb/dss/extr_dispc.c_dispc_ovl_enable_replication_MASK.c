
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(enum omap_plane VAR_1,
  enum omap_overlay_caps VAR_2, bool VAR_3)
{
 static const unsigned VAR_4[] = { 5, 10, 10, 10 };
 int VAR_5;

 if ((VAR_2 & VAR_0) == 0)
  return;

 VAR_5 = VAR_4[VAR_1];
 FUNC_1(FUNC_0(VAR_1), VAR_3, VAR_5, VAR_5);
}
