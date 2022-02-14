
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cb_pool_cb_cnt; int cb_pool_cb_size; } ;
struct hl_device {int cb_pool; TYPE_1__ asic_prop; int cb_pool_lock; } ;
struct hl_cb {int is_pool; int pool_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct hl_cb* FUNC_1 (struct hl_device*,int ,int ) ;
 int FUNC_2 (struct hl_device*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct hl_device *VAR_2)
{
 struct hl_cb *VAR_3;
 int VAR_4;

 FUNC_0(&VAR_2->cb_pool);
 FUNC_4(&VAR_2->cb_pool_lock);

 for (VAR_4 = 0 ; VAR_4 < VAR_2->asic_prop.cb_pool_cb_cnt ; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2, VAR_2->asic_prop.cb_pool_cb_size,
    VAR_1);
  if (VAR_3) {
   VAR_3->is_pool = 1;
   FUNC_3(&VAR_3->pool_list, &VAR_2->cb_pool);
  } else {
   FUNC_2(VAR_2);
   return -VAR_0;
  }
 }

 return 0;
}
