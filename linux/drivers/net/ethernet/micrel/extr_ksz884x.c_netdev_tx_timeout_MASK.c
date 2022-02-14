
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {scalar_t__ watchdog_timeo; } ;
struct TYPE_4__ {int ring_phys; } ;
struct ksz_hw {int dev_count; TYPE_1__* port_info; scalar_t__ multi_list_size; scalar_t__ all_multi; TYPE_2__ rx_desc_info; TYPE_2__ tx_desc_info; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {struct ksz_hw hw; } ;
struct TYPE_3__ {struct net_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ksz_hw*) ;
 int FUNC_1 (struct ksz_hw*) ;
 int FUNC_2 (struct ksz_hw*) ;
 int FUNC_3 (struct ksz_hw*) ;
 int FUNC_4 (struct ksz_hw*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct ksz_hw*) ;
 int FUNC_7 (struct ksz_hw*) ;
 int FUNC_8 (struct ksz_hw*,int ,int ) ;
 int FUNC_9 (struct ksz_hw*) ;
 int FUNC_10 (struct ksz_hw*,scalar_t__) ;
 unsigned long VAR_3 ;
 int FUNC_11 (struct dev_info*) ;
 struct dev_priv* FUNC_12 (struct net_device*) ;
 scalar_t__ FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct ksz_hw*,int,int ) ;
 scalar_t__ FUNC_17 (unsigned long,scalar_t__) ;
 int FUNC_18 (struct dev_info*,int ) ;

__attribute__((used)) static void FUNC_19(struct net_device *VAR_4)
{
 static unsigned long VAR_5;

 struct dev_priv *VAR_6 = FUNC_12(VAR_4);
 struct dev_info *VAR_7 = VAR_6->adapter;
 struct ksz_hw *VAR_8 = &VAR_7->hw;
 int VAR_9;

 if (VAR_8->dev_count > 1) {




  if (FUNC_17(VAR_3, VAR_5 + VAR_4->watchdog_timeo))
   VAR_7 = ((void*)0);
 }

 VAR_5 = VAR_3;
 if (VAR_7) {
  FUNC_0(VAR_8);
  FUNC_1(VAR_8);

  FUNC_18(VAR_7, 0);
  FUNC_5(&VAR_8->rx_desc_info);
  FUNC_5(&VAR_8->tx_desc_info);
  FUNC_11(VAR_7);

  FUNC_4(VAR_8);

  FUNC_8(VAR_8,
   VAR_8->tx_desc_info.ring_phys,
   VAR_8->rx_desc_info.ring_phys);
  FUNC_7(VAR_8);
  if (VAR_8->all_multi)
   FUNC_10(VAR_8, VAR_8->all_multi);
  else if (VAR_8->multi_list_size)
   FUNC_9(VAR_8);

  if (VAR_8->dev_count > 1) {
   FUNC_6(VAR_8);
   for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
    struct net_device *VAR_10;

    FUNC_16(VAR_8, VAR_9,
     VAR_0);

    VAR_10 = VAR_8->port_info[VAR_9].pdev;
    if (FUNC_13(VAR_10))
     FUNC_16(VAR_8, VAR_9,
      VAR_1);
   }
  }

  FUNC_3(VAR_8);
  FUNC_2(VAR_8);
 }

 FUNC_14(VAR_4);
 FUNC_15(VAR_4);
}
