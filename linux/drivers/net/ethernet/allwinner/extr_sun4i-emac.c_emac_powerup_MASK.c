
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int* dev_addr; } ;
struct emac_board_info {scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int) ;
 struct emac_board_info* FUNC_2 (struct net_device*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_6(struct net_device *VAR_9)
{
 struct emac_board_info *VAR_10 = FUNC_2(VAR_9);
 unsigned int VAR_11;



 VAR_11 = FUNC_3(VAR_10->membase + VAR_7);
 VAR_11 |= 0x8;
 FUNC_5(VAR_11, VAR_10->membase + VAR_7);
 FUNC_4(1);



 VAR_11 = FUNC_3(VAR_10->membase + VAR_4);
 VAR_11 &= ~VAR_5;
 FUNC_5(VAR_11, VAR_10->membase + VAR_4);


 VAR_11 = FUNC_3(VAR_10->membase + VAR_6);
 VAR_11 &= (~(0xf << 2));
 VAR_11 |= (0xD << 2);
 FUNC_5(VAR_11, VAR_10->membase + VAR_6);


 FUNC_5(0x0, VAR_10->membase + VAR_8);


 FUNC_5(0, VAR_10->membase + VAR_0);
 VAR_11 = FUNC_3(VAR_10->membase + VAR_1);
 FUNC_5(VAR_11, VAR_10->membase + VAR_1);

 FUNC_4(1);


 FUNC_0(VAR_9);


 FUNC_5(VAR_9->dev_addr[0] << 16 | VAR_9->dev_addr[1] << 8 | VAR_9->
        dev_addr[2], VAR_10->membase + VAR_3);
 FUNC_5(VAR_9->dev_addr[3] << 16 | VAR_9->dev_addr[4] << 8 | VAR_9->
        dev_addr[5], VAR_10->membase + VAR_2);

 FUNC_1(1);

 return 0;
}
