
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_local {scalar_t__ chip_type; int curr_rx_cfg; scalar_t__ rx_mode; } ;
struct net_device {int* dev_addr; int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 struct net_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ,char*,struct net_device*) ;
 int FUNC_4 (struct net_device*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_30)
{
 struct net_local *VAR_31 = FUNC_0(VAR_30);
 int VAR_32;


 FUNC_4(VAR_30, VAR_6, FUNC_2(VAR_30, VAR_6) & ~VAR_3);


 if (FUNC_3(VAR_30->irq, VAR_29, 0, "cs89x0", VAR_30))
  return -VAR_2;


 if (VAR_31->chip_type == VAR_0)
  FUNC_4(VAR_30, VAR_7, 0);
 else
  FUNC_4(VAR_30, VAR_8, 0);


 for (VAR_32=0; VAR_32 < VAR_4/2; VAR_32++)
  FUNC_4(VAR_30, VAR_9+VAR_32*2, VAR_30->dev_addr[VAR_32*2] | (VAR_30->dev_addr[VAR_32*2+1] << 8));


 FUNC_4(VAR_30, VAR_10, FUNC_2(VAR_30, VAR_10) | VAR_18 | VAR_19);


 VAR_31->rx_mode = 0;
 FUNC_4(VAR_30, VAR_12, VAR_1);

 VAR_31->curr_rx_cfg = VAR_17 | VAR_15;

 FUNC_4(VAR_30, VAR_11, VAR_31->curr_rx_cfg);

 FUNC_4(VAR_30, VAR_13, VAR_25 | VAR_27 | VAR_26 |
        VAR_24 | VAR_23 | VAR_21 | VAR_20);

 FUNC_4(VAR_30, VAR_5, VAR_14 | VAR_16 |
   VAR_22 | VAR_28);


 FUNC_4(VAR_30, VAR_6, FUNC_2(VAR_30, VAR_6) | VAR_3);
 FUNC_1(VAR_30);
 return 0;
}
