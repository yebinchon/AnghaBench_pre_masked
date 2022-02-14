
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spider_net_card {int dummy; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int ,int ) ;
 struct spider_net_card* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct spider_net_card*,int ) ;
 int FUNC_4 (struct spider_net_card*) ;
 int FUNC_5 (struct spider_net_card*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_5, void *VAR_6)
{
 struct spider_net_card *VAR_7 = FUNC_2(VAR_5);
 u32 VAR_8, VAR_9, VAR_10;
 struct sockaddr *VAR_11 = VAR_6;

 if (!FUNC_0(VAR_11->sa_data))
  return -VAR_0;

 FUNC_1(VAR_5->dev_addr, VAR_11->sa_data, VAR_1);


 VAR_10 = FUNC_3(VAR_7, VAR_2);
 VAR_10 &= ~((1 << 5) | (1 << 6));
 FUNC_5(VAR_7, VAR_2, VAR_10);


 VAR_9 = (VAR_5->dev_addr[0]<<24) + (VAR_5->dev_addr[1]<<16) +
  (VAR_5->dev_addr[2]<<8) + (VAR_5->dev_addr[3]);
 VAR_8 = (VAR_5->dev_addr[4]<<8) + (VAR_5->dev_addr[5]);
 FUNC_5(VAR_7, VAR_4, VAR_9);
 FUNC_5(VAR_7, VAR_3, VAR_8);


 VAR_10 = FUNC_3(VAR_7, VAR_2);
 VAR_10 |= ((1 << 5) | (1 << 6));
 FUNC_5(VAR_7, VAR_2, VAR_10);

 FUNC_4(VAR_7);

 return 0;
}
