
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dev_addr; } ;
struct lan743x_adapter {int* mac_address; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct lan743x_adapter*,int ) ;
 int FUNC_4 (struct lan743x_adapter*,int ,int) ;
 int FUNC_5 (struct lan743x_adapter*,int*) ;

__attribute__((used)) static int FUNC_6(struct lan743x_adapter *VAR_6)
{
 bool VAR_7 = 1;
 struct net_device *VAR_8;
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11;

 VAR_8 = VAR_6->netdev;


 VAR_11 = FUNC_3(VAR_6, VAR_0);
 VAR_11 |= VAR_1 | VAR_2;
 VAR_11 |= VAR_3;
 FUNC_4(VAR_6, VAR_0, VAR_11);

 VAR_9 = FUNC_3(VAR_6, VAR_4);
 VAR_10 = FUNC_3(VAR_6, VAR_5);
 VAR_6->mac_address[0] = VAR_10 & 0xFF;
 VAR_6->mac_address[1] = (VAR_10 >> 8) & 0xFF;
 VAR_6->mac_address[2] = (VAR_10 >> 16) & 0xFF;
 VAR_6->mac_address[3] = (VAR_10 >> 24) & 0xFF;
 VAR_6->mac_address[4] = VAR_9 & 0xFF;
 VAR_6->mac_address[5] = (VAR_9 >> 8) & 0xFF;

 if (((VAR_9 & 0x0000FFFF) == 0x0000FFFF) &&
     VAR_10 == 0xFFFFFFFF) {
  VAR_7 = 0;
 } else if (!FUNC_2(VAR_6->mac_address)) {
  VAR_7 = 0;
 }

 if (!VAR_7)
  FUNC_0(VAR_6->mac_address);
 FUNC_5(VAR_6, VAR_6->mac_address);
 FUNC_1(VAR_8->dev_addr, VAR_6->mac_address);
 return 0;
}
