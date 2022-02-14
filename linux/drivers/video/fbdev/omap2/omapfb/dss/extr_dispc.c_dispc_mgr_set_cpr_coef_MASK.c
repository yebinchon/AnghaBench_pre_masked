
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_dss_cpr_coefs {int bb; int bg; int br; int gb; int gg; int gr; int rb; int rg; int rr; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(enum omap_channel VAR_0,
  const struct omap_dss_cpr_coefs *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;

 if (!FUNC_5(VAR_0))
  return;

 VAR_2 = FUNC_3(VAR_1->rr, 31, 22) | FUNC_3(VAR_1->rg, 20, 11) |
  FUNC_3(VAR_1->rb, 9, 0);
 VAR_3 = FUNC_3(VAR_1->gr, 31, 22) | FUNC_3(VAR_1->gg, 20, 11) |
  FUNC_3(VAR_1->gb, 9, 0);
 VAR_4 = FUNC_3(VAR_1->br, 31, 22) | FUNC_3(VAR_1->bg, 20, 11) |
  FUNC_3(VAR_1->bb, 9, 0);

 FUNC_4(FUNC_2(VAR_0), VAR_2);
 FUNC_4(FUNC_1(VAR_0), VAR_3);
 FUNC_4(FUNC_0(VAR_0), VAR_4);
}
