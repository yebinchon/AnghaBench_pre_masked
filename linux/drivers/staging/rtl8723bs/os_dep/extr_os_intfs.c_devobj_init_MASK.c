
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct dvobj_priv {int* macid; int processing_dev_remove; TYPE_1__ cam_ctl; int disable_func; int lock; int setbw_mutex; int setch_mutex; int h2c_fwcmd_mutex; int hw_init_mutex; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct dvobj_priv* FUNC_2 (int) ;
 int FUNC_3 (int *) ;

struct dvobj_priv *FUNC_4(void)
{
 struct dvobj_priv *VAR_0 = ((void*)0);

 VAR_0 = FUNC_2(sizeof(*VAR_0));
 if (VAR_0 == ((void*)0))
  return ((void*)0);

 FUNC_1(&VAR_0->hw_init_mutex);
 FUNC_1(&VAR_0->h2c_fwcmd_mutex);
 FUNC_1(&VAR_0->setch_mutex);
 FUNC_1(&VAR_0->setbw_mutex);

 FUNC_3(&VAR_0->lock);

 VAR_0->macid[1] = 1;

 VAR_0->processing_dev_remove = 0;

 FUNC_0(&VAR_0->disable_func, 0);

 FUNC_3(&VAR_0->cam_ctl.lock);

 return VAR_0;
}
