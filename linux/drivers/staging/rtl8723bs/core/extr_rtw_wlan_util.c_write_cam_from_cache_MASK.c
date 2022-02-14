
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct cam_ctl_t {int lock; } ;
struct dvobj_priv {int * cam_cache; struct cam_ctl_t cam_ctl; } ;
struct cam_entry_cache {int key; int mac; int ctrl; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,size_t,int ,int ,int ) ;
 struct dvobj_priv* FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct cam_entry_cache*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

inline void FUNC_5(struct adapter *VAR_0, u8 VAR_1)
{
 struct dvobj_priv *VAR_2 = FUNC_1(VAR_0);
 struct cam_ctl_t *VAR_3 = &VAR_2->cam_ctl;
 struct cam_entry_cache VAR_4;

 FUNC_3(&VAR_3->lock);
 FUNC_2(&VAR_4, &VAR_2->cam_cache[VAR_1], sizeof(struct cam_entry_cache));
 FUNC_4(&VAR_3->lock);

 FUNC_0(VAR_0, VAR_1, VAR_4.ctrl, VAR_4.mac, VAR_4.key);
}
