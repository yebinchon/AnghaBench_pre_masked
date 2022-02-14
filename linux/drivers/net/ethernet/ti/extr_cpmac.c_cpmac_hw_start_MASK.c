
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct plat_cpmac_data {int reset_bit; } ;
struct net_device {int* dev_addr; } ;
struct cpmac_priv {int regs; TYPE_2__* rx_head; TYPE_1__* pdev; } ;
struct TYPE_4__ {int mapping; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 struct plat_cpmac_data* FUNC_6 (int *) ;
 struct cpmac_priv* FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_22)
{
 int VAR_23;
 struct cpmac_priv *VAR_24 = FUNC_7(VAR_22);
 struct plat_cpmac_data *VAR_25 = FUNC_6(&VAR_24->pdev->dev);

 FUNC_3(VAR_25->reset_bit);
 for (VAR_23 = 0; VAR_23 < 8; VAR_23++) {
  FUNC_5(VAR_24->regs, FUNC_2(VAR_23), 0);
  FUNC_5(VAR_24->regs, FUNC_1(VAR_23), 0);
 }
 FUNC_5(VAR_24->regs, FUNC_1(0), VAR_24->rx_head->mapping);

 FUNC_5(VAR_24->regs, VAR_7, VAR_21 | VAR_19 |
      VAR_20);
 FUNC_5(VAR_24->regs, VAR_0, 0);
 for (VAR_23 = 0; VAR_23 < 8; VAR_23++)
  FUNC_5(VAR_24->regs, FUNC_0(VAR_23), VAR_22->dev_addr[5]);
 FUNC_5(VAR_24->regs, VAR_2, VAR_22->dev_addr[4]);
 FUNC_5(VAR_24->regs, VAR_1, VAR_22->dev_addr[0] |
      (VAR_22->dev_addr[1] << 8) | (VAR_22->dev_addr[2] << 16) |
      (VAR_22->dev_addr[3] << 24));
 FUNC_5(VAR_24->regs, VAR_6, VAR_11);
 FUNC_5(VAR_24->regs, VAR_15, 0xff);
 FUNC_5(VAR_24->regs, VAR_9, 0xff);
 FUNC_5(VAR_24->regs, VAR_13, 0xff);
 FUNC_5(VAR_24->regs, VAR_4, 0xff);
 FUNC_5(VAR_24->regs, VAR_16, 1);
 FUNC_5(VAR_24->regs, VAR_10, 1);
 FUNC_5(VAR_24->regs, VAR_14, 0xff);
 FUNC_5(VAR_24->regs, VAR_5, 3);

 FUNC_5(VAR_24->regs, VAR_8,
      FUNC_4(VAR_24->regs, VAR_8) | 1);
 FUNC_5(VAR_24->regs, VAR_12,
      FUNC_4(VAR_24->regs, VAR_12) | 1);
 FUNC_5(VAR_24->regs, VAR_3,
      FUNC_4(VAR_24->regs, VAR_3) | VAR_18 |
      VAR_17);
}
