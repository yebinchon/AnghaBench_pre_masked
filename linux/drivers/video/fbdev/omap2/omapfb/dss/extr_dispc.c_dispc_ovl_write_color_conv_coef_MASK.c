
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct color_conv_coef {int full_range; int bcb; int by; int bcr; int gcr; int gcb; int rcb; int gy; int ry; int rcr; } ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(enum omap_plane VAR_0,
  const struct color_conv_coef *VAR_1)
{


 FUNC_4(FUNC_2(VAR_0, 0), (FUNC_0(VAR_1->rcr, 26, 16) | FUNC_0(VAR_1->ry, 10, 0)));
 FUNC_4(FUNC_2(VAR_0, 1), (FUNC_0(VAR_1->gy, 26, 16) | FUNC_0(VAR_1->rcb, 10, 0)));
 FUNC_4(FUNC_2(VAR_0, 2), (FUNC_0(VAR_1->gcb, 26, 16) | FUNC_0(VAR_1->gcr, 10, 0)));
 FUNC_4(FUNC_2(VAR_0, 3), (FUNC_0(VAR_1->bcr, 26, 16) | FUNC_0(VAR_1->by, 10, 0)));
 FUNC_4(FUNC_2(VAR_0, 4), (FUNC_0(0, 26, 16) | FUNC_0(VAR_1->bcb, 10, 0)));

 FUNC_3(FUNC_1(VAR_0), VAR_1->full_range, 11, 11);


}
