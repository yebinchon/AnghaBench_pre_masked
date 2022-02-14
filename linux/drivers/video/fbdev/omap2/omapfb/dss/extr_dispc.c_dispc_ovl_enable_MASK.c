
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,int,int ,int ) ;

int FUNC_3(enum omap_plane VAR_0, bool VAR_1)
{
 FUNC_1("dispc_enable_plane %d, %d\n", VAR_0, VAR_1);

 FUNC_2(FUNC_0(VAR_0), VAR_1 ? 1 : 0, 0, 0);

 return 0;
}
