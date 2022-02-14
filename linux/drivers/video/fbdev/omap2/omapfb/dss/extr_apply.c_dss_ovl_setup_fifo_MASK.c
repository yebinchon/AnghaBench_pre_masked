
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ovl_priv_data {int enabling; int enabled; } ;
struct omap_overlay {int id; } ;


 int FUNC_0 (int ,int *,int *,int,int ) ;
 int FUNC_1 (struct omap_overlay*,int ,int ) ;
 struct ovl_priv_data* FUNC_2 (struct omap_overlay*) ;
 int FUNC_3 (struct omap_overlay*) ;

__attribute__((used)) static void FUNC_4(struct omap_overlay *VAR_0)
{
 struct ovl_priv_data *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2, VAR_3;
 bool VAR_4 = 0;

 if (!VAR_1->enabled && !VAR_1->enabling)
  return;

 FUNC_0(VAR_0->id, &VAR_2, &VAR_3,
   VAR_4, FUNC_3(VAR_0));

 FUNC_1(VAR_0, VAR_2, VAR_3);
}
