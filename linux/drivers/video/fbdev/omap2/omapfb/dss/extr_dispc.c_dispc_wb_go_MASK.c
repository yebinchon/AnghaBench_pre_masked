
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ,int,int) ;

void FUNC_4(void)
{
 enum omap_plane VAR_2 = VAR_1;
 bool VAR_3, VAR_4;

 VAR_3 = FUNC_3(FUNC_0(VAR_2), 0, 0) == 1;

 if (!VAR_3)
  return;

 VAR_4 = FUNC_3(VAR_0, 6, 6) == 1;
 if (VAR_4) {
  FUNC_1("GO bit not down for WB\n");
  return;
 }

 FUNC_2(VAR_0, 1, 6, 6);
}
