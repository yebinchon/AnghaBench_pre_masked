
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* netdev; } ;
struct nfp_net {TYPE_2__ dp; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int real_num_tx_queues; } ;


 int FUNC_0 (struct net_device*,int) ;
 struct nfp_net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfp_net*,char*,...) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct nfp_net *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->dp.netdev->real_num_tx_queues; VAR_2++) {
  if (!FUNC_2(FUNC_0(VAR_0, VAR_2)))
   continue;
  FUNC_3(VAR_1, "TX timeout on ring: %d\n", VAR_2);
 }
 FUNC_3(VAR_1, "TX watchdog timeout\n");
}
