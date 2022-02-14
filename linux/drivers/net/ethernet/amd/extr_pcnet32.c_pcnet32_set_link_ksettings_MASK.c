
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
struct pcnet32_private {scalar_t__ chip_version; int autoneg; int port_tp; int fdx; int lock; TYPE_3__* a; TYPE_1__* init_block; int mii_if; scalar_t__ mii; } ;
struct net_device {int base_addr; } ;
struct TYPE_5__ {scalar_t__ autoneg; scalar_t__ port; scalar_t__ duplex; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;
struct TYPE_6__ {int (* read_bcr ) (int ,int) ;int (* read_csr ) (int ,int ) ;int (* write_bcr ) (int ,int,int) ;int (* write_csr ) (int ,int ,int) ;} ;
struct TYPE_4__ {int mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct ethtool_link_ksettings const*) ;
 struct pcnet32_private* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcnet32_private*,int ) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*,unsigned long*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int,int) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int,int) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_9,
          const struct ethtool_link_ksettings *VAR_10)
{
 struct pcnet32_private *VAR_11 = FUNC_2(VAR_9);
 ulong VAR_12 = VAR_9->base_addr;
 unsigned long VAR_13;
 int VAR_14 = -VAR_6;
 int VAR_15, VAR_16, VAR_17, VAR_18;

 FUNC_7(&VAR_11->lock, VAR_13);
 if (VAR_11->mii) {
  VAR_14 = FUNC_1(&VAR_11->mii_if, VAR_10);
 } else if (VAR_11->chip_version == VAR_7) {
  VAR_15 = FUNC_6(VAR_9, &VAR_13, 0);
  if (!VAR_15)
   VAR_11->a->write_csr(VAR_12, VAR_1, VAR_3);

  VAR_11->autoneg = VAR_10->base.autoneg == VAR_0;
  VAR_16 = VAR_11->a->read_bcr(VAR_12, 2);
  if (VAR_10->base.autoneg == VAR_0) {
   VAR_11->a->write_bcr(VAR_12, 2, VAR_16 | 0x0002);
  } else {
   VAR_11->a->write_bcr(VAR_12, 2, VAR_16 & ~0x0002);

   VAR_11->port_tp = VAR_10->base.port == VAR_8;
   VAR_18 = VAR_11->a->read_csr(VAR_12, VAR_4) & ~0x0180;
   if (VAR_10->base.port == VAR_8)
    VAR_18 |= 0x0080;
   VAR_11->a->write_csr(VAR_12, VAR_4, VAR_18);
   VAR_11->init_block->mode = FUNC_0(VAR_18);

   VAR_11->fdx = VAR_10->base.duplex == VAR_5;
   VAR_17 = VAR_11->a->read_bcr(VAR_12, 9) & ~0x0003;
   if (VAR_10->base.duplex == VAR_5)
    VAR_17 |= 0x0003;
   VAR_11->a->write_bcr(VAR_12, 9, VAR_17);
  }
  if (VAR_15)
   FUNC_4(VAR_11, VAR_12);
  else if (FUNC_3(VAR_9))
   FUNC_5(VAR_9, VAR_2);
  VAR_14 = 0;
 }
 FUNC_8(&VAR_11->lock, VAR_13);
 return VAR_14;
}
