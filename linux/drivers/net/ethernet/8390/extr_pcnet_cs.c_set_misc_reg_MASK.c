
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcnet_dev {int flags; int eth_phy; int mii_reset; } ;
struct net_device {unsigned int base_addr; int if_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct pcnet_dev* FUNC_0 (struct net_device*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_2 (scalar_t__,int ,int,int) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_11)
{
    unsigned int VAR_12 = VAR_11->base_addr;
    struct pcnet_dev *VAR_13 = FUNC_0(VAR_11);
    u_char VAR_14;

    if (VAR_13->flags & VAR_4) {
 VAR_14 = FUNC_1(VAR_12 + VAR_7) & ~3;
 if (VAR_11->if_port == 2)
     VAR_14 |= 1;
 if (VAR_13->flags & VAR_8)
     VAR_14 |= 2;
 if (VAR_13->flags & VAR_2)
     VAR_14 |= 8;
 FUNC_4(VAR_14, VAR_12 + VAR_7);
    }
    if (VAR_13->flags & VAR_6) {
 if (VAR_13->flags & VAR_3) {

     FUNC_2(VAR_12 + VAR_1, VAR_13->eth_phy, 4, 0x01e1);

     FUNC_2(VAR_12 + VAR_1, VAR_13->eth_phy, 0, 0x0000);
     FUNC_2(VAR_12 + VAR_1, VAR_13->eth_phy, 0, 0x1200);
     VAR_13->mii_reset = VAR_10;
 } else {
     FUNC_3(VAR_9 ? 4 : 0, VAR_12 + VAR_0);
 }
    } else if (VAR_13->flags & VAR_5) {

 FUNC_2(VAR_12 + VAR_1, VAR_13->eth_phy, 4, 0x01e1);

 FUNC_2(VAR_12 + VAR_1, VAR_13->eth_phy, 0, 0x0000);
 FUNC_2(VAR_12 + VAR_1, VAR_13->eth_phy, 0, 0x1200);
    }
}
