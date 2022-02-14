
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sockaddr {int sa_data; } ;
struct net_device {int* dev_addr; } ;
struct bcm_enet_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct bcm_enet_priv*,int,int ) ;
 int FUNC_3 (int*,int ,int ) ;
 struct bcm_enet_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, void *VAR_3)
{
 struct bcm_enet_priv *VAR_4;
 struct sockaddr *VAR_5 = VAR_3;
 u32 VAR_6;

 VAR_4 = FUNC_4(VAR_2);
 FUNC_3(VAR_2->dev_addr, VAR_5->sa_data, VAR_1);


 VAR_6 = (VAR_2->dev_addr[2] << 24) | (VAR_2->dev_addr[3] << 16) |
  (VAR_2->dev_addr[4] << 8) | VAR_2->dev_addr[5];
 FUNC_2(VAR_4, VAR_6, FUNC_1(0));

 VAR_6 = (VAR_2->dev_addr[0] << 8 | VAR_2->dev_addr[1]);
 VAR_6 |= VAR_0;
 FUNC_2(VAR_4, VAR_6, FUNC_0(0));

 return 0;
}
