
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_adapter {int reset_lock; } ;


 int FUNC_0 (struct emac_adapter*) ;
 int FUNC_1 (struct emac_adapter*) ;
 int FUNC_2 (struct emac_adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct emac_adapter *VAR_0)
{
 int VAR_1;

 FUNC_3(&VAR_0->reset_lock);

 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
 VAR_1 = FUNC_1(VAR_0);

 FUNC_4(&VAR_0->reset_lock);

 return VAR_1;
}
