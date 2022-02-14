
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rr; int rg; int rb; int gr; int gg; int gb; int br; int bg; int bb; } ;
struct omap_overlay_manager_info {TYPE_1__ cpr_coefs; } ;
struct omap_overlay_manager {int (* get_manager_info ) (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;} ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;

__attribute__((used)) static ssize_t FUNC_2(struct omap_overlay_manager *VAR_1,
  char *VAR_2)
{
 struct omap_overlay_manager_info VAR_3;

 VAR_1->get_manager_info(VAR_1, &VAR_3);

 return FUNC_0(VAR_2, VAR_0,
   "%d %d %d %d %d %d %d %d %d\n",
   VAR_3.cpr_coefs.rr,
   VAR_3.cpr_coefs.rg,
   VAR_3.cpr_coefs.rb,
   VAR_3.cpr_coefs.gr,
   VAR_3.cpr_coefs.gg,
   VAR_3.cpr_coefs.gb,
   VAR_3.cpr_coefs.br,
   VAR_3.cpr_coefs.bg,
   VAR_3.cpr_coefs.bb);
}
