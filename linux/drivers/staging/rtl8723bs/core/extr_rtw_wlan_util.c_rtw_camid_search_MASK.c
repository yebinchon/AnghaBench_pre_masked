
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cam_ctl_t {int lock; } ;
struct dvobj_priv {struct cam_ctl_t cam_ctl; } ;
struct adapter {int dummy; } ;
typedef int s16 ;


 int FUNC_0 (struct adapter*,int *,int) ;
 struct dvobj_priv* FUNC_1 (struct adapter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

s16 FUNC_4(struct adapter *VAR_0, u8 *VAR_1, s16 VAR_2)
{
 struct dvobj_priv *VAR_3 = FUNC_1(VAR_0);
 struct cam_ctl_t *VAR_4 = &VAR_3->cam_ctl;
 s16 VAR_5 = -1;

 FUNC_2(&VAR_4->lock);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_3(&VAR_4->lock);

 return VAR_5;
}
