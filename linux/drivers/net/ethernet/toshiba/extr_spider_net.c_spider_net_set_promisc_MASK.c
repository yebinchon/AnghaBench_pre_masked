
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spider_net_card {struct net_device* netdev; } ;
struct net_device {int flags; int* dev_addr; } ;
typedef int macl ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (struct spider_net_card*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(struct spider_net_card *VAR_6)
{
 u32 VAR_7, VAR_8;
 struct net_device *VAR_9 = VAR_6->netdev;

 if (VAR_9->flags & VAR_0) {

  FUNC_1(VAR_6, VAR_2, 0);
  FUNC_1(VAR_6, VAR_2 + 0x04, 0);
  FUNC_1(VAR_6, VAR_1,
         VAR_4);
 } else {
  VAR_7 = VAR_9->dev_addr[0];
  VAR_7 <<= 8;
  VAR_7 |= VAR_9->dev_addr[1];
  FUNC_0(&VAR_8, &VAR_9->dev_addr[2], sizeof(VAR_8));

  VAR_7 |= VAR_5;
  FUNC_1(VAR_6, VAR_2, VAR_7);
  FUNC_1(VAR_6, VAR_2 + 0x04, VAR_8);
  FUNC_1(VAR_6, VAR_1,
         VAR_3);
 }
}
