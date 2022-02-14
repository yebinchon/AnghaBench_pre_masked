
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rx_lpi_exit_n; int rx_lpi_entry_n; int tx_lpi_exit_n; int tx_lpi_entry_n; } ;
struct sxgbe_priv_data {int tx_path_in_lpi_mode; TYPE_3__ xstats; int ioaddr; TYPE_2__* hw; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {TYPE_1__* mac; } ;
struct TYPE_4__ {int (* host_irq_status ) (int ,TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sxgbe_priv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,TYPE_3__*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_5, void *VAR_6)
{
 struct net_device *VAR_7 = (struct net_device *)VAR_6;
 struct sxgbe_priv_data *VAR_8 = FUNC_0(VAR_7);
 int VAR_9;

 VAR_9 = VAR_8->hw->mac->host_irq_status(VAR_8->ioaddr, &VAR_8->xstats);

 if (VAR_9 & VAR_3) {
  VAR_8->xstats.tx_lpi_entry_n++;
  VAR_8->tx_path_in_lpi_mode = 1;
 }
 if (VAR_9 & VAR_4) {
  VAR_8->xstats.tx_lpi_exit_n++;
  VAR_8->tx_path_in_lpi_mode = 0;
 }
 if (VAR_9 & VAR_1)
  VAR_8->xstats.rx_lpi_entry_n++;
 if (VAR_9 & VAR_2)
  VAR_8->xstats.rx_lpi_exit_n++;

 return VAR_0;
}
