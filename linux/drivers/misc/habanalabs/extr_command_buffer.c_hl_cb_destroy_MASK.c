
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct hl_device {int dev; } ;
struct hl_cb_mgr {int cb_lock; int cb_handles; } ;
struct hl_cb {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 struct hl_cb* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct hl_device *VAR_3, struct hl_cb_mgr *VAR_4, u64 VAR_5)
{
 struct hl_cb *VAR_6;
 u32 VAR_7;
 int VAR_8 = 0;





 VAR_5 >>= VAR_1;
 VAR_7 = (u32) VAR_5;

 FUNC_4(&VAR_4->cb_lock);

 VAR_6 = FUNC_1(&VAR_4->cb_handles, VAR_7);
 if (VAR_6) {
  FUNC_2(&VAR_4->cb_handles, VAR_7);
  FUNC_5(&VAR_4->cb_lock);
  FUNC_3(&VAR_6->refcount, VAR_2);
 } else {
  FUNC_5(&VAR_4->cb_lock);
  FUNC_0(VAR_3->dev,
   "CB destroy failed, no match to handle 0x%x\n", VAR_7);
  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
