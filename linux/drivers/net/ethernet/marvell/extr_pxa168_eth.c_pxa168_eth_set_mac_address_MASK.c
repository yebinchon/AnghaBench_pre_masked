
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sockaddr {unsigned char* sa_data; } ;
struct pxa168_eth_private {int dummy; } ;
struct net_device {unsigned char* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 struct pxa168_eth_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pxa168_eth_private*,unsigned char*,int*) ;
 int FUNC_6 (struct pxa168_eth_private*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, void *VAR_5)
{
 struct sockaddr *VAR_6 = VAR_5;
 struct pxa168_eth_private *VAR_7 = FUNC_2(VAR_4);
 unsigned char VAR_8[VAR_1];
 u32 VAR_9, VAR_10;

 if (!FUNC_0(VAR_6->sa_data))
  return -VAR_0;
 FUNC_1(VAR_8, VAR_4->dev_addr, VAR_1);
 FUNC_1(VAR_4->dev_addr, VAR_6->sa_data, VAR_1);

 VAR_9 = VAR_4->dev_addr[0] << 24;
 VAR_9 |= VAR_4->dev_addr[1] << 16;
 VAR_9 |= VAR_4->dev_addr[2] << 8;
 VAR_9 |= VAR_4->dev_addr[3];
 VAR_10 = VAR_4->dev_addr[4] << 8;
 VAR_10 |= VAR_4->dev_addr[5];
 FUNC_6(VAR_7, VAR_2, VAR_9);
 FUNC_6(VAR_7, VAR_3, VAR_10);

 FUNC_3(VAR_4);
 FUNC_5(VAR_7, VAR_8, VAR_4->dev_addr);
 FUNC_4(VAR_4);
 return 0;
}
