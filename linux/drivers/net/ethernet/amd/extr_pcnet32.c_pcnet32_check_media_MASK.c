
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct TYPE_5__ {int full_duplex; } ;
struct pcnet32_private {scalar_t__ chip_version; int phycount; TYPE_1__* a; TYPE_2__ mii_if; scalar_t__ mii; scalar_t__ port_tp; int autoneg; } ;
struct net_device {int base_addr; } ;
struct ethtool_cmd {scalar_t__ duplex; int cmd; } ;
struct TYPE_4__ {int (* read_bcr ) (int ,int) ;int (* write_bcr ) (int ,int,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ethtool_cmd*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,struct ethtool_cmd*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct net_device*,char*,int ,char*) ;
 struct pcnet32_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct pcnet32_private*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_9 (struct pcnet32_private*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int,int) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_4, int VAR_5)
{
 struct pcnet32_private *VAR_6 = FUNC_4(VAR_4);
 int VAR_7;
 int VAR_8 = FUNC_6(VAR_4) ? 1 : 0;
 u32 VAR_9;

 if (VAR_6->mii) {
  VAR_7 = FUNC_2(&VAR_6->mii_if);
 } else if (VAR_6->chip_version == VAR_2) {
  ulong VAR_10 = VAR_4->base_addr;

  if (!VAR_6->autoneg && VAR_6->port_tp)
   VAR_7 = (VAR_6->a->read_bcr(VAR_10, 4) != 0xc0);
  else
   VAR_7 = 1;
 } else {
  ulong VAR_11 = VAR_4->base_addr;
  VAR_7 = (VAR_6->a->read_bcr(VAR_11, 4) != 0xc0);
 }
 if (!VAR_7) {
  if (VAR_8 || VAR_5) {
   FUNC_5(VAR_4);
   FUNC_8(VAR_6, VAR_3, VAR_4, "link down\n");
  }
  if (VAR_6->phycount > 1) {
   VAR_7 = FUNC_10(VAR_4);
   VAR_8 = 0;
  }
 } else if (VAR_5 || !VAR_8) {
  FUNC_7(VAR_4);
  if (VAR_6->mii) {
   if (FUNC_9(VAR_6)) {
    struct ethtool_cmd VAR_12 = {
     .cmd = VAR_1 };
    FUNC_1(&VAR_6->mii_if, &VAR_12);
    FUNC_3(VAR_4, "link up, %uMbps, %s-duplex\n",
         FUNC_0(&VAR_12),
         (VAR_12.duplex == VAR_0)
         ? "full" : "half");
   }
   VAR_9 = VAR_6->a->read_bcr(VAR_4->base_addr, 9);
   if ((VAR_9 & (1 << 0)) != VAR_6->mii_if.full_duplex) {
    if (VAR_6->mii_if.full_duplex)
     VAR_9 |= (1 << 0);
    else
     VAR_9 &= ~(1 << 0);
    VAR_6->a->write_bcr(VAR_4->base_addr, 9, VAR_9);
   }
  } else {
   FUNC_8(VAR_6, VAR_3, VAR_4, "link up\n");
  }
 }
}
