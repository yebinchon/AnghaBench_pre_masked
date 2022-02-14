
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int irq; int dev_addr; } ;
struct ksz_port {int first_port; } ;
struct ksz_hw {int dev_count; int features; int tx_desc_info; int rx_desc_info; int promiscuous; int all_multi; TYPE_1__* ksz_switch; } ;
struct dev_priv {scalar_t__ promiscuous; scalar_t__ multicast; int monitor_timer_info; struct ksz_port port; struct dev_info* adapter; } ;
struct dev_info {int dev; int tx_tasklet; int rx_tasklet; int mib_read; int mib_timer_info; int opened; int wol_enable; struct ksz_hw hw; } ;
struct TYPE_2__ {int member; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ksz_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ksz_hw*) ;
 int FUNC_4 (struct ksz_hw*,int ) ;
 int FUNC_5 (struct ksz_hw*) ;
 int FUNC_6 (struct ksz_hw*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 struct dev_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct ksz_port*,int) ;
 int FUNC_13 (struct ksz_hw*,int,int ) ;
 int FUNC_14 (struct ksz_hw*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct dev_info*,int ) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_3)
{
 struct dev_priv *VAR_4 = FUNC_10(VAR_3);
 struct dev_info *VAR_5 = VAR_4->adapter;
 struct ksz_port *VAR_6 = &VAR_4->port;
 struct ksz_hw *VAR_7 = &VAR_5->hw;
 int VAR_8;

 FUNC_11(VAR_3);

 FUNC_8(&VAR_4->monitor_timer_info);


 if (VAR_7->dev_count > 1) {
  FUNC_13(VAR_7, VAR_6->first_port, VAR_1);


  if (VAR_7->features & VAR_2) {
   VAR_8 = 1 << VAR_6->first_port;
   if (VAR_7->ksz_switch->member & VAR_8) {
    VAR_7->ksz_switch->member &= ~VAR_8;
    FUNC_0(VAR_7);
   }
  }
 }
 if (VAR_6->first_port > 0)
  FUNC_4(VAR_7, VAR_3->dev_addr);
 if (!VAR_5->wol_enable)
  FUNC_12(VAR_6, 1);

 if (VAR_4->multicast)
  --VAR_7->all_multi;
 if (VAR_4->promiscuous)
  --VAR_7->promiscuous;

 VAR_5->opened--;
 if (!(VAR_5->opened)) {
  FUNC_8(&VAR_5->mib_timer_info);
  FUNC_1(&VAR_5->mib_read);

  FUNC_5(VAR_7);
  FUNC_6(VAR_7);
  FUNC_3(VAR_7);


  FUNC_9(2000 / VAR_0);

  FUNC_15(&VAR_5->rx_tasklet);
  FUNC_15(&VAR_5->tx_tasklet);
  FUNC_2(VAR_3->irq, VAR_5->dev);

  FUNC_16(VAR_5, 0);
  FUNC_7(&VAR_7->rx_desc_info);
  FUNC_7(&VAR_7->tx_desc_info);


  if (VAR_7->features & VAR_2)
   FUNC_14(VAR_7);
 }

 return 0;
}
