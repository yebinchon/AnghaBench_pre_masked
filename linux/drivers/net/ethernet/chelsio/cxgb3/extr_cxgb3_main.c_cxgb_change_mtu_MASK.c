
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port_info {int mac; struct adapter* adapter; } ;
struct net_device {int mtu; } ;
struct TYPE_3__ {scalar_t__ rev; int b_wnd; int a_wnd; int mtus; } ;
struct adapter {TYPE_2__** port; TYPE_1__ params; } ;
struct TYPE_4__ {int mtu; } ;


 int FUNC_0 (struct adapter*) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, int VAR_1)
{
 struct port_info *VAR_2 = FUNC_1(VAR_0);
 struct adapter *VAR_3 = VAR_2->adapter;
 int VAR_4;

 if ((VAR_4 = FUNC_4(&VAR_2->mac, VAR_1)))
  return VAR_4;
 VAR_0->mtu = VAR_1;
 FUNC_0(VAR_3);
 if (VAR_3->params.rev == 0 && FUNC_2(VAR_3))
  FUNC_3(VAR_3, VAR_3->params.mtus,
        VAR_3->params.a_wnd, VAR_3->params.b_wnd,
        VAR_3->port[0]->mtu);
 return 0;
}
