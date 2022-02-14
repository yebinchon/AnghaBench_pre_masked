
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxlflash_cfg {int ctx_tbl_list_mutex; int ctx_err_recovery; struct ctx_info** ctx_tbl; } ;
struct ctx_info {int err_recovery_active; int mutex; int * ctrl_map; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ctx_info*) ;

int FUNC_4(struct cxlflash_cfg *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 struct ctx_info *VAR_4 = ((void*)0);

 FUNC_1(&VAR_1->ctx_tbl_list_mutex);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_4 = VAR_1->ctx_tbl[VAR_2];
  if (VAR_4) {
   FUNC_1(&VAR_4->mutex);
   VAR_1->ctx_tbl[VAR_2] = ((void*)0);
   FUNC_0(&VAR_4->list, &VAR_1->ctx_err_recovery);
   VAR_4->err_recovery_active = 1;
   VAR_4->ctrl_map = ((void*)0);
   FUNC_3(VAR_4);
   FUNC_2(&VAR_4->mutex);
  }
 }

 FUNC_2(&VAR_1->ctx_tbl_list_mutex);
 return VAR_3;
}
