
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int cb_pool_lock; int cb_pool; } ;
struct hl_cb {int pool_list; scalar_t__ is_pool; } ;


 int FUNC_0 (struct hl_device*,struct hl_cb*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hl_device *VAR_0, struct hl_cb *VAR_1)
{
 if (VAR_1->is_pool) {
  FUNC_2(&VAR_0->cb_pool_lock);
  FUNC_1(&VAR_1->pool_list, &VAR_0->cb_pool);
  FUNC_3(&VAR_0->cb_pool_lock);
 } else {
  FUNC_0(VAR_0, VAR_1);
 }
}
