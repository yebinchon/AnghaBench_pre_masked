
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int* dev_addr; } ;
struct emac_board_info {scalar_t__ membase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int ,int ) ;
 struct emac_board_info* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, void *VAR_5)
{
 struct sockaddr *VAR_6 = VAR_5;
 struct emac_board_info *VAR_7 = FUNC_1(VAR_4);

 if (FUNC_2(VAR_4))
  return -VAR_0;

 FUNC_0(VAR_4->dev_addr, VAR_6->sa_data, VAR_3);

 FUNC_3(VAR_4->dev_addr[0] << 16 | VAR_4->dev_addr[1] << 8 | VAR_4->
        dev_addr[2], VAR_7->membase + VAR_2);
 FUNC_3(VAR_4->dev_addr[3] << 16 | VAR_4->dev_addr[4] << 8 | VAR_4->
        dev_addr[5], VAR_7->membase + VAR_1);

 return 0;
}
