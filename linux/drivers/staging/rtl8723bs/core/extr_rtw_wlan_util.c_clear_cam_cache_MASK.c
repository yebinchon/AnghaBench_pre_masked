
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct cam_ctl_t {int lock; } ;
struct dvobj_priv {int * cam_cache; struct cam_ctl_t cam_ctl; } ;
struct cam_entry_cache {int dummy; } ;
struct adapter {int dummy; } ;


 struct dvobj_priv* FUNC_0 (struct adapter*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct adapter *VAR_0, u8 VAR_1)
{
 struct dvobj_priv *VAR_2 = FUNC_0(VAR_0);
 struct cam_ctl_t *VAR_3 = &VAR_2->cam_ctl;

 FUNC_2(&VAR_3->lock);

 FUNC_1(&(VAR_2->cam_cache[VAR_1]), 0, sizeof(struct cam_entry_cache));

 FUNC_3(&VAR_3->lock);
}
