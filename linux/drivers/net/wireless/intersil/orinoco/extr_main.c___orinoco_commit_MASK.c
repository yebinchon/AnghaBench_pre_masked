
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {scalar_t__ tkip_cm_active; struct net_device* ndev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct orinoco_private*) ;

__attribute__((used)) static int FUNC_2(struct orinoco_private *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->ndev;
 int VAR_2 = 0;





 VAR_0->tkip_cm_active = 0;

 VAR_2 = FUNC_1(VAR_0);


 (void) FUNC_0(VAR_1);

 return VAR_2;
}
