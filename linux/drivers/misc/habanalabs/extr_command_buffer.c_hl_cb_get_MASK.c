
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_device {int dev; } ;
struct hl_cb_mgr {int cb_lock; int cb_handles; } ;
struct hl_cb {int refcount; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct hl_cb* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct hl_cb *FUNC_5(struct hl_device *VAR_0, struct hl_cb_mgr *VAR_1,
   u32 VAR_2)
{
 struct hl_cb *VAR_3;

 FUNC_3(&VAR_1->cb_lock);
 VAR_3 = FUNC_1(&VAR_1->cb_handles, VAR_2);

 if (!VAR_3) {
  FUNC_4(&VAR_1->cb_lock);
  FUNC_0(VAR_0->dev,
   "CB get failed, no match to handle %d\n", VAR_2);
  return ((void*)0);
 }

 FUNC_2(&VAR_3->refcount);

 FUNC_4(&VAR_1->cb_lock);

 return VAR_3;

}
