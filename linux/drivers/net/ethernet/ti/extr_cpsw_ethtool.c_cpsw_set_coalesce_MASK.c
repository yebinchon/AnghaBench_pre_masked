
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; } ;
struct cpsw_priv {struct cpsw_common* cpsw; } ;
struct cpsw_common {int bus_freq_mhz; int coal_intvl; TYPE_1__* wr_regs; } ;
struct TYPE_2__ {int int_control; int tx_imax; int rx_imax; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cpsw_priv*,int ,char*,int) ;
 struct cpsw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int,int *) ;

int FUNC_4(struct net_device *VAR_5, struct ethtool_coalesce *VAR_6)
{
 struct cpsw_priv *VAR_7 = FUNC_1(VAR_5);
 u32 VAR_8;
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11 = 1;
 u32 VAR_12 = 0;
 struct cpsw_common *VAR_13 = VAR_7->cpsw;

 VAR_12 = VAR_6->rx_coalesce_usecs;

 VAR_8 = FUNC_2(&VAR_13->wr_regs->int_control);
 VAR_10 = VAR_13->bus_freq_mhz * 4;

 if (!VAR_6->rx_coalesce_usecs) {
  VAR_8 &= ~(VAR_3 | VAR_2);
  goto update_return;
 }

 if (VAR_12 < VAR_1)
  VAR_12 = VAR_1;

 if (VAR_12 > VAR_0) {



  VAR_11 = VAR_3 / VAR_10;

  if (VAR_11 > 1) {
   VAR_10 *= VAR_11;
   if (VAR_12 > (VAR_0 * VAR_11))
    VAR_12 = (VAR_0
      * VAR_11);
  } else {
   VAR_11 = 1;
   VAR_12 = VAR_0;
  }
 }

 VAR_9 = (1000 * VAR_11) / VAR_12;
 FUNC_3(VAR_9, &VAR_13->wr_regs->rx_imax);
 FUNC_3(VAR_9, &VAR_13->wr_regs->tx_imax);

 VAR_8 |= VAR_2;
 VAR_8 &= (~VAR_3);
 VAR_8 |= (VAR_10 & VAR_3);

update_return:
 FUNC_3(VAR_8, &VAR_13->wr_regs->int_control);

 FUNC_0(VAR_7, VAR_4, "Set coalesce to %d usecs.\n", VAR_12);
 VAR_13->coal_intvl = VAR_12;

 return 0;
}
