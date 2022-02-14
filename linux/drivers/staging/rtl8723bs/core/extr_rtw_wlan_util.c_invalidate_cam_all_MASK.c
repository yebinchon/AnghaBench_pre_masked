
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_ctl_t {int lock; scalar_t__ bitmap; } ;
struct dvobj_priv {int cam_cache; struct cam_ctl_t cam_ctl; } ;
struct cam_entry_cache {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dvobj_priv* FUNC_0 (struct adapter*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct adapter*,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct adapter *VAR_2)
{
 struct dvobj_priv *VAR_3 = FUNC_0(VAR_2);
 struct cam_ctl_t *VAR_4 = &VAR_3->cam_ctl;

 FUNC_2(VAR_2, VAR_0, ((void*)0));

 FUNC_3(&VAR_4->lock);
 VAR_4->bitmap = 0;
 FUNC_1(VAR_3->cam_cache, 0, sizeof(struct cam_entry_cache)*VAR_1);
 FUNC_4(&VAR_4->lock);
}
