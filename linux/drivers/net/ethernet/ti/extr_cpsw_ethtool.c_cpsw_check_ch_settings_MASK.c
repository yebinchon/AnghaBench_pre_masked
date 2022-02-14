
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethtool_channels {scalar_t__ rx_count; scalar_t__ tx_count; scalar_t__ combined_count; } ;
struct TYPE_2__ {scalar_t__ channels; } ;
struct cpsw_common {TYPE_1__ data; int dev; scalar_t__ quirk_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct cpsw_common *VAR_2,
      struct ethtool_channels *VAR_3)
{
 if (VAR_2->quirk_irq) {
  FUNC_0(VAR_2->dev, "Maximum one tx/rx queue is allowed");
  return -VAR_1;
 }

 if (VAR_3->combined_count)
  return -VAR_0;


 if (!VAR_3->rx_count || !VAR_3->tx_count)
  return -VAR_0;

 if (VAR_3->rx_count > VAR_2->data.channels ||
     VAR_3->tx_count > VAR_2->data.channels)
  return -VAR_0;

 return 0;
}
