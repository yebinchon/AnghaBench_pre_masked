
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sockaddr {int sa_data; } ;
struct net_device {int* dev_addr; } ;
struct lan78xx_net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lan78xx_net*,int ,int) ;
 struct lan78xx_net* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5, void *VAR_6)
{
 struct lan78xx_net *VAR_7 = FUNC_5(VAR_5);
 struct sockaddr *VAR_8 = VAR_6;
 u32 VAR_9, VAR_10;
 int VAR_11;

 if (FUNC_6(VAR_5))
  return -VAR_1;

 if (!FUNC_3(VAR_8->sa_data))
  return -VAR_0;

 FUNC_2(VAR_5->dev_addr, VAR_8->sa_data);

 VAR_9 = VAR_5->dev_addr[0] |
    VAR_5->dev_addr[1] << 8 |
    VAR_5->dev_addr[2] << 16 |
    VAR_5->dev_addr[3] << 24;
 VAR_10 = VAR_5->dev_addr[4] |
    VAR_5->dev_addr[5] << 8;

 VAR_11 = FUNC_4(VAR_7, VAR_4, VAR_9);
 VAR_11 = FUNC_4(VAR_7, VAR_3, VAR_10);


 VAR_11 = FUNC_4(VAR_7, FUNC_1(0), VAR_9);
 VAR_11 = FUNC_4(VAR_7, FUNC_0(0), VAR_10 | VAR_2);

 return 0;
}
