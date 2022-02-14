
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; int * dev_addr; } ;
struct TYPE_3__ {int config1; int config2; int command; } ;
struct TYPE_4__ {int rx_head; TYPE_1__ regs; } ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int ,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 TYPE_2__* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_22)
{
 int VAR_23;

 FUNC_5(VAR_22)->regs.config1 = VAR_3|VAR_1;
 FUNC_5(VAR_22)->regs.config2 = VAR_8|VAR_10|VAR_9;
 FUNC_5(VAR_22)->regs.command = 0;




 FUNC_1(FUNC_5(VAR_22)->regs.config1 | VAR_0, VAR_15);
 for (VAR_23 = 0; VAR_23 < 6; VAR_23++)
  FUNC_0(VAR_22->dev_addr[VAR_23], VAR_13);

 if (VAR_22->flags & VAR_12)
  FUNC_5(VAR_22)->regs.config1 |= VAR_4;
 else if (VAR_22->flags & VAR_11)
  FUNC_5(VAR_22)->regs.config1 |= VAR_5;
 else
  FUNC_5(VAR_22)->regs.config1 |= VAR_6;






 FUNC_1(FUNC_5(VAR_22)->regs.config1 | VAR_7, VAR_15);
 FUNC_1((VAR_20>>8) - 1, VAR_13);
 FUNC_1(FUNC_5(VAR_22)->rx_head, VAR_18);
 FUNC_1(0, VAR_19);
 FUNC_1(FUNC_5(VAR_22)->rx_head >> 8, VAR_17);
 FUNC_1(FUNC_5(VAR_22)->regs.config2, VAR_16);
 FUNC_1(FUNC_5(VAR_22)->regs.config1 | VAR_2, VAR_15);
 FUNC_1(FUNC_5(VAR_22)->regs.command, VAR_14);

 VAR_23 = FUNC_2(VAR_22, 0x5A);
 if(VAR_23)
  return VAR_23;
 VAR_23 = FUNC_2(VAR_22, 0x1E);
 if(VAR_23)
  return VAR_23;

 FUNC_3(VAR_22, VAR_21, 0);
 FUNC_4(VAR_22, 0);
 return 0;
}
