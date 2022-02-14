
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netcp_intf {int hw_cap; } ;
struct net_device {int dummy; } ;
struct gbe_slave {int port_num; int open; } ;
struct gbe_priv {int stats_en_mask; int dev; scalar_t__ enable_ale; } ;
struct TYPE_2__ {int switch_to_port; int flags; int dma_channel; int dma_chan_name; } ;
struct gbe_intf {TYPE_1__ tx_pipe; struct gbe_slave* slave; struct gbe_priv* gbe_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gbe_priv*,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (struct gbe_priv*) ;
 scalar_t__ FUNC_6 (struct gbe_priv*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,char*,int ,int ,int,int ) ;
 int FUNC_8 (struct gbe_priv*) ;
 int VAR_7 ;
 int FUNC_9 (struct gbe_intf*) ;
 int FUNC_10 (struct gbe_intf*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (struct gbe_priv*,struct gbe_slave*,struct net_device*) ;
 int FUNC_12 (struct netcp_intf*,int ,int ,struct gbe_intf*) ;
 int FUNC_13 (struct netcp_intf*,int ,int ,struct gbe_intf*) ;
 struct netcp_intf* FUNC_14 (struct net_device*) ;
 int VAR_10 ;
 int FUNC_15 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int FUNC_17(void *VAR_13, struct net_device *VAR_14)
{
 struct gbe_intf *VAR_15 = VAR_13;
 struct gbe_priv *VAR_16 = VAR_15->gbe_dev;
 struct netcp_intf *VAR_17 = FUNC_14(VAR_14);
 struct gbe_slave *VAR_18 = VAR_15->slave;
 int VAR_19 = VAR_18->port_num;
 u32 VAR_20, VAR_21;
 int VAR_22;

 VAR_20 = FUNC_15(FUNC_3(VAR_16, VAR_12, VAR_9));
 FUNC_7(VAR_16->dev, "initializing gbe version %d.%d (%d) GBE identification value 0x%x\n",
  FUNC_1(VAR_20), FUNC_2(VAR_20),
  FUNC_4(VAR_20), FUNC_0(VAR_20));


 if (FUNC_6(VAR_16) || FUNC_5(VAR_16))
  VAR_15->tx_pipe.flags = VAR_5;

 if (VAR_16->enable_ale)
  VAR_15->tx_pipe.switch_to_port = 0;
 else
  VAR_15->tx_pipe.switch_to_port = VAR_19;

 FUNC_7(VAR_16->dev,
  "opened TX channel %s: %p with to port %d, flags %d\n",
  VAR_15->tx_pipe.dma_chan_name,
  VAR_15->tx_pipe.dma_channel,
  VAR_15->tx_pipe.switch_to_port,
  VAR_15->tx_pipe.flags);

 FUNC_10(VAR_15);


 FUNC_16(0, FUNC_3(VAR_16, VAR_12, VAR_10));


 VAR_21 = VAR_2;
 if (FUNC_5(VAR_16)) {
  VAR_21 |= VAR_1;
  VAR_17->hw_cap = VAR_0;
 }
 FUNC_16(VAR_21, FUNC_3(VAR_16, VAR_12, VAR_6));


 FUNC_16(VAR_16->stats_en_mask, FUNC_3(VAR_16, VAR_12,
          VAR_11));

 VAR_22 = FUNC_9(VAR_15);
 if (VAR_22)
  goto fail;

 FUNC_13(VAR_17, VAR_4, VAR_8, VAR_15);
 FUNC_12(VAR_17, VAR_3, VAR_7, VAR_15);

 VAR_18->open = 1;
 FUNC_11(VAR_16, VAR_18, VAR_14);

 FUNC_8(VAR_16);

 return 0;

fail:
 FUNC_10(VAR_15);
 return VAR_22;
}
