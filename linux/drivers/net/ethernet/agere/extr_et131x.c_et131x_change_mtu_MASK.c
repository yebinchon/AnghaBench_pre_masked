
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; int dev_addr; } ;
struct et131x_adapter {int registry_jumbo_packet; int addr; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct et131x_adapter*) ;
 int FUNC_2 (struct et131x_adapter*) ;
 int FUNC_3 (struct et131x_adapter*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct et131x_adapter*) ;
 int FUNC_7 (struct et131x_adapter*) ;
 int FUNC_8 (struct et131x_adapter*) ;
 int FUNC_9 (int ,int ) ;
 struct et131x_adapter* FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 struct et131x_adapter *VAR_3 = FUNC_10(VAR_0);

 FUNC_4(VAR_0);

 VAR_0->mtu = VAR_1;

 FUNC_2(VAR_3);


 VAR_3->registry_jumbo_packet = VAR_1 + 14;
 FUNC_8(VAR_3);

 VAR_2 = FUNC_1(VAR_3);
 if (VAR_2 != 0) {
  FUNC_0(&VAR_3->pdev->dev,
    "Change MTU failed; couldn't re-alloc DMA memory\n");
  return VAR_2;
 }

 FUNC_7(VAR_3);
 FUNC_6(VAR_3);
 FUNC_9(VAR_0->dev_addr, VAR_3->addr);


 FUNC_3(VAR_3);
 FUNC_5(VAR_0);

 return VAR_2;
}
