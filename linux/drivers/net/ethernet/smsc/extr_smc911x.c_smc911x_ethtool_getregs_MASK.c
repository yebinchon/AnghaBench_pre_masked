
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int phy_id; } ;
struct smc911x_local {int lock; TYPE_1__ mii; int version; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smc911x_local*,int,int) ;
 int FUNC_1 (struct smc911x_local*,int,int ,int) ;
 int FUNC_2 (struct smc911x_local*,int) ;
 int VAR_3 ;
 struct smc911x_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4,
           struct ethtool_regs* VAR_5, void *VAR_6)
{
 struct smc911x_local *VAR_7 = FUNC_3(VAR_4);
 unsigned long VAR_8;
 u32 VAR_9,VAR_10,VAR_11=0;
 u32 *VAR_12 = (u32*)VAR_6;

 VAR_5->version = VAR_7->version;
 for(VAR_10=VAR_1;VAR_10<=VAR_0;VAR_10+=4) {
  VAR_12[VAR_11++] = FUNC_2(VAR_7, VAR_10);
 }
 for(VAR_10=VAR_2;VAR_10<=VAR_3;VAR_10++) {
  FUNC_4(&VAR_7->lock, VAR_8);
  FUNC_0(VAR_7, VAR_10, VAR_9);
  FUNC_5(&VAR_7->lock, VAR_8);
  VAR_12[VAR_11++] = VAR_9;
 }
 for(VAR_10=0;VAR_10<=31;VAR_10++) {
  FUNC_4(&VAR_7->lock, VAR_8);
  FUNC_1(VAR_7, VAR_10, VAR_7->mii.phy_id, VAR_9);
  FUNC_5(&VAR_7->lock, VAR_8);
  VAR_12[VAR_11++] = VAR_9 & 0xFFFF;
 }
}
