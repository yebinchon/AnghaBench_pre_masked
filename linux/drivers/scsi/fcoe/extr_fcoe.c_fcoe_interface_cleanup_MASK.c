
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fcoe_interface {struct net_device* netdev; } ;
struct fcoe_ctlr {TYPE_1__* lp; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct fcoe_ctlr*) ;
 struct fcoe_ctlr* FUNC_2 (struct fcoe_interface*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct fcoe_interface *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 struct fcoe_ctlr *VAR_3 = FUNC_2(VAR_1);



 FUNC_1(VAR_3);
 FUNC_4(VAR_3->lp->host);
 FUNC_0(VAR_2);
 FUNC_3(VAR_0);
}
