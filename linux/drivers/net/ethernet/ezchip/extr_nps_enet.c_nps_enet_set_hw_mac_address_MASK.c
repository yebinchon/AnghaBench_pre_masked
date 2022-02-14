
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nps_enet_priv {int ge_mac_cfg_2_value; } ;
struct net_device {int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct nps_enet_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nps_enet_priv*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_10)
{
 struct nps_enet_priv *VAR_11 = FUNC_0(VAR_10);
 u32 VAR_12 = 0;
 u32 *VAR_13 = &VAR_11->ge_mac_cfg_2_value;


 VAR_12 |= VAR_10->dev_addr[0] << VAR_0;
 VAR_12 |= VAR_10->dev_addr[1] << VAR_1;
 VAR_12 |= VAR_10->dev_addr[2] << VAR_2;
 VAR_12 |= VAR_10->dev_addr[3] << VAR_3;
 *VAR_13 = (*VAR_13 & ~VAR_4)
   | VAR_10->dev_addr[4] << VAR_5;
 *VAR_13 = (*VAR_13 & ~VAR_6)
   | VAR_10->dev_addr[5] << VAR_7;

 FUNC_1(VAR_11, VAR_8,
    VAR_12);

 FUNC_1(VAR_11, VAR_9,
    *VAR_13);
}
