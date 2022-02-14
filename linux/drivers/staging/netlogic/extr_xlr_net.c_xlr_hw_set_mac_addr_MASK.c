
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xlr_net_priv {int base_addr; TYPE_1__* nd; } ;
struct net_device {int* dev_addr; } ;
struct TYPE_2__ {scalar_t__ phy_interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct xlr_net_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_11)
{
 struct xlr_net_priv *VAR_12 = FUNC_0(VAR_11);


 FUNC_1(VAR_12->base_addr, VAR_7,
       ((VAR_11->dev_addr[5] << 24) | (VAR_11->dev_addr[4] << 16) |
       (VAR_11->dev_addr[3] << 8) | (VAR_11->dev_addr[2])));
 FUNC_1(VAR_12->base_addr, VAR_7 + 1,
       ((VAR_11->dev_addr[1] << 24) | (VAR_11->dev_addr[0] << 16)));

 FUNC_1(VAR_12->base_addr, VAR_8, 0xffffffff);
 FUNC_1(VAR_12->base_addr, VAR_8 + 1, 0xffffffff);
 FUNC_1(VAR_12->base_addr, VAR_9, 0xffffffff);
 FUNC_1(VAR_12->base_addr, VAR_9 + 1, 0xffffffff);

 FUNC_1(VAR_12->base_addr, VAR_10,
       (1 << VAR_2) |
       (1 << VAR_1) |
       (1 << VAR_3));

 if (VAR_12->nd->phy_interface == VAR_4 ||
     VAR_12->nd->phy_interface == VAR_5)
  FUNC_2(VAR_12->base_addr, VAR_6, VAR_0, 0x7f);
}
