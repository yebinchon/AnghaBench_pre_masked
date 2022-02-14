
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int * dev_addr; } ;
struct TYPE_3__ {int command; int config1; int config2; } ;
struct TYPE_4__ {int rx_head; TYPE_1__ regs; scalar_t__ tx_tail; scalar_t__ tx_head; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 () ;
 int VAR_22 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct net_device*,int ,int ) ;
 int FUNC_5 (struct net_device*,int ) ;
 TYPE_2__* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(struct net_device *VAR_23)
{
 int VAR_24;


 FUNC_3(VAR_4, VAR_13);
 FUNC_7(4);

 FUNC_6(VAR_23)->regs.command = 0;
 FUNC_3(VAR_7|VAR_9, VAR_11);
 while (FUNC_1(VAR_16) & (VAR_19|VAR_20))
  FUNC_0();

 FUNC_3(FUNC_6(VAR_23)->regs.config1 | VAR_0, VAR_12);
 for (VAR_24 = 0; VAR_24 < 6; VAR_24++)
  FUNC_2(VAR_23->dev_addr[VAR_24], VAR_10);

 FUNC_6(VAR_23)->tx_head = 0;
 FUNC_6(VAR_23)->tx_tail = 0;
 FUNC_6(VAR_23)->regs.config2 |= VAR_3;
 FUNC_6(VAR_23)->rx_head = VAR_18;

 FUNC_3(FUNC_6(VAR_23)->regs.config1 | VAR_2, VAR_12);
 FUNC_3((VAR_21>>8) - 1, VAR_10);
 FUNC_3(FUNC_6(VAR_23)->rx_head, VAR_15);
 FUNC_3(FUNC_6(VAR_23)->rx_head >> 8, VAR_14);
 FUNC_3(0, VAR_17);
 FUNC_3(FUNC_6(VAR_23)->regs.config2, VAR_13);
 FUNC_3(FUNC_6(VAR_23)->regs.config1 | VAR_1, VAR_12);

 FUNC_4(VAR_23, VAR_22, 0);
 FUNC_5(VAR_23, 0);

 FUNC_6(VAR_23)->regs.command = VAR_5 | VAR_6;
 FUNC_3(FUNC_6(VAR_23)->regs.command | VAR_8, VAR_11);
}
