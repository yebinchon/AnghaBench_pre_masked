
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct pcnet_dev {int pna_phy; int eth_phy; } ;
struct net_device {unsigned int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pcnet_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (unsigned int,int,int) ;
 int FUNC_2 (struct net_device*,char*,int,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_6)
{
    struct pcnet_dev *VAR_7 = FUNC_0(VAR_6);
    unsigned int VAR_8 = VAR_6->base_addr + VAR_2;
    int VAR_9;
    u_int VAR_10, VAR_11;

    for (VAR_9 = 31; VAR_9 >= 0; VAR_9--) {
 VAR_10 = FUNC_1(VAR_8, VAR_9, 1);
 if ((VAR_10 == 0) || (VAR_10 == 0xffff))
     continue;
 VAR_10 = FUNC_1(VAR_8, VAR_9, VAR_3);
 VAR_11 = VAR_10 << 16;
 VAR_11 |= FUNC_1(VAR_8, VAR_9, VAR_4);
 VAR_11 &= VAR_5;
 FUNC_2(VAR_6, "MII at %d is 0x%08x\n", VAR_9, VAR_11);
 if (VAR_11 == VAR_1) {
     VAR_7->pna_phy = VAR_9;
 } else if (VAR_11 != VAR_0) {
     VAR_7->eth_phy = VAR_9;
 }
    }
}
