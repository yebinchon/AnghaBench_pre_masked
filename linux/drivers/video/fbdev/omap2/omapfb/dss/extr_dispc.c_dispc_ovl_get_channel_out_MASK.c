
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static enum omap_channel FUNC_5(enum omap_plane VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 switch (VAR_6) {
 case 131:
  VAR_7 = 8;
  break;
 case 130:
 case 129:
 case 128:
  VAR_7 = 16;
  break;
 default:
  FUNC_0();
  return 0;
 }

 VAR_8 = FUNC_3(FUNC_1(VAR_6));

 if (FUNC_2(VAR_8, VAR_7, VAR_7) == 1)
  return VAR_1;

 if (!FUNC_4(VAR_0))
  return VAR_2;

 switch (FUNC_2(VAR_8, 31, 30)) {
 case 0:
 default:
  return VAR_2;
 case 1:
  return VAR_3;
 case 2:
  return VAR_4;
 case 3:
  return VAR_5;
 }
}
