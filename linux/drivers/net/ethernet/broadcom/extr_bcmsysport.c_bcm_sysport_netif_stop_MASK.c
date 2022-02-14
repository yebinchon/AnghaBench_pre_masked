
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int phydev; } ;
struct TYPE_3__ {int work; } ;
struct TYPE_4__ {TYPE_1__ dim; } ;
struct bcm_sysport_priv {TYPE_2__ dim; int napi; } ;


 int FUNC_0 (struct bcm_sysport_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct bcm_sysport_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 struct bcm_sysport_priv *VAR_1 = FUNC_3(VAR_0);


 FUNC_4(VAR_0);
 FUNC_2(&VAR_1->napi);
 FUNC_1(&VAR_1->dim.dim.work);
 FUNC_5(VAR_0->phydev);


 FUNC_0(VAR_1);
}
