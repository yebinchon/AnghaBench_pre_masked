
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dev_addr; } ;
struct ks8851_net {int rc_ccr; struct net_device* netdev; TYPE_2__* spidev; } ;
struct TYPE_3__ {int of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int const*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,char*,int ) ;
 int * FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ks8851_net *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 const u8 *VAR_3;

 VAR_3 = FUNC_7(VAR_1->spidev->dev.of_node);
 if (!FUNC_0(VAR_3)) {
  FUNC_2(VAR_2->dev_addr, VAR_3);
  FUNC_5(VAR_2);
  return;
 }

 if (VAR_1->rc_ccr & VAR_0) {
  FUNC_4(VAR_2);
  if (FUNC_3(VAR_2->dev_addr))
   return;

  FUNC_6(VAR_1->netdev, "invalid mac address read %pM\n",
    VAR_2->dev_addr);
 }

 FUNC_1(VAR_2);
 FUNC_5(VAR_2);
}
