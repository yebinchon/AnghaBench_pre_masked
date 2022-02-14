
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {int dummy; } ;
typedef enum mtk_mdp_comp_type { ____Placeholder_mtk_mdp_comp_type } mtk_mdp_comp_type ;
struct TYPE_3__ {int type; int alias_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct device_node*,int ) ;

int FUNC_3(struct device *VAR_3, struct device_node *VAR_4,
   enum mtk_mdp_comp_type VAR_5)
{
 int VAR_6 = FUNC_2(VAR_4, VAR_1[VAR_5]);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  if (VAR_5 == VAR_2[VAR_7].type &&
      VAR_6 == VAR_2[VAR_7].alias_id)
   return VAR_7;
 }

 FUNC_1(VAR_3, "Failed to get id. type: %d, id: %d\n", VAR_5, VAR_6);

 return -VAR_0;
}
