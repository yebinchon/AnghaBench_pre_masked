
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager_info {int trans_key_type; } ;
struct omap_overlay_manager {int (* get_manager_info ) (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;} ;
typedef int ssize_t ;
typedef enum omap_dss_trans_key_type { ____Placeholder_omap_dss_trans_key_type } omap_dss_trans_key_type ;


 int FUNC_0 (char**) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,char*,char*) ;
 int FUNC_3 (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;
 char** VAR_1 ;

__attribute__((used)) static ssize_t FUNC_4(struct omap_overlay_manager *VAR_2,
        char *VAR_3)
{
 enum omap_dss_trans_key_type VAR_4;
 struct omap_overlay_manager_info VAR_5;

 VAR_2->get_manager_info(VAR_2, &VAR_5);

 VAR_4 = VAR_5.trans_key_type;
 FUNC_1(VAR_4 >= FUNC_0(VAR_1));

 return FUNC_2(VAR_3, VAR_0, "%s\n", VAR_1[VAR_4]);
}
