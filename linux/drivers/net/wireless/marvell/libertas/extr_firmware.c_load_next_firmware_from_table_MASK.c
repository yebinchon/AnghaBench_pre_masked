
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {scalar_t__ fw_model; struct lbs_fw_table const* fw_iter; int * helper_fw; struct lbs_fw_table const* fw_table; } ;
typedef struct lbs_fw_table {scalar_t__ model; int helper; } const lbs_fw_table ;


 int VAR_0 ;
 int FUNC_0 (struct lbs_private*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct lbs_private*,int ,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct lbs_private *VAR_2)
{
 const struct lbs_fw_table *VAR_3;

 if (!VAR_2->fw_iter)
  VAR_3 = VAR_2->fw_table;
 else
  VAR_3 = ++VAR_2->fw_iter;

 if (VAR_2->helper_fw) {
  FUNC_2(VAR_2->helper_fw);
  VAR_2->helper_fw = ((void*)0);
 }

next:
 if (!VAR_3->helper) {

  FUNC_1(VAR_2, -VAR_0, ((void*)0), ((void*)0));
  return;
 }

 if (VAR_3->model != VAR_2->fw_model) {
  VAR_3++;
  goto next;
 }

 VAR_2->fw_iter = VAR_3;
 FUNC_0(VAR_2, VAR_3->helper, VAR_1);
}
