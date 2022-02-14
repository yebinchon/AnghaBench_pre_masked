
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cam_ctl_t {int lock; int bitmap; } ;
struct dvobj_priv {struct cam_ctl_t cam_ctl; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 struct dvobj_priv* FUNC_1 (struct adapter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct adapter *VAR_1, u8 VAR_2)
{
 struct dvobj_priv *VAR_3 = FUNC_1(VAR_1);
 struct cam_ctl_t *VAR_4 = &VAR_3->cam_ctl;

 FUNC_2(&VAR_4->lock);

 if (VAR_2 < VAR_0)
  VAR_4->bitmap &= ~(FUNC_0(VAR_2));

 FUNC_3(&VAR_4->lock);
}
