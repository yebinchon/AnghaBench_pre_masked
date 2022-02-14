
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_dump {int flag; } ;
struct cudbg_hdr {int dummy; } ;
struct cudbg_entity_hdr {int dummy; } ;
struct TYPE_2__ {int len; int flag; } ;
struct adapter {TYPE_1__ eth_dump; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct adapter*,int ) ;
 struct adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct ethtool_dump *VAR_2)
{
 struct adapter *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4 = 0;

 VAR_4 = sizeof(struct cudbg_hdr) +
       sizeof(struct cudbg_entity_hdr) * VAR_0;
 VAR_4 += FUNC_0(VAR_3, VAR_2->flag);

 VAR_3->eth_dump.flag = VAR_2->flag;
 VAR_3->eth_dump.len = VAR_4;
 return 0;
}
