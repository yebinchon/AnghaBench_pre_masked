
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvobj_priv {int setbw_mutex; int setch_mutex; int h2c_fwcmd_mutex; int hw_init_mutex; } ;


 int FUNC_0 (struct dvobj_priv*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct dvobj_priv *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(&VAR_0->hw_init_mutex);
 FUNC_1(&VAR_0->h2c_fwcmd_mutex);
 FUNC_1(&VAR_0->setch_mutex);
 FUNC_1(&VAR_0->setbw_mutex);

 FUNC_0(VAR_0);
}
