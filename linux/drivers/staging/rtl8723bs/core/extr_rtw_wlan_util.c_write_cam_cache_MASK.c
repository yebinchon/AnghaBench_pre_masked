
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct cam_ctl_t {int lock; } ;
struct dvobj_priv {TYPE_1__* cam_cache; struct cam_ctl_t cam_ctl; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {int key; int mac; int ctrl; } ;


 int VAR_0 ;
 struct dvobj_priv* FUNC_0 (struct adapter*) ;
 int FUNC_1 (int ,size_t*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct adapter *VAR_1, u8 VAR_2, u16 VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 struct dvobj_priv *VAR_6 = FUNC_0(VAR_1);
 struct cam_ctl_t *VAR_7 = &VAR_6->cam_ctl;

 FUNC_2(&VAR_7->lock);

 VAR_6->cam_cache[VAR_2].ctrl = VAR_3;
 FUNC_1(VAR_6->cam_cache[VAR_2].mac, VAR_4, VAR_0);
 FUNC_1(VAR_6->cam_cache[VAR_2].key, VAR_5, 16);

 FUNC_3(&VAR_7->lock);
}
