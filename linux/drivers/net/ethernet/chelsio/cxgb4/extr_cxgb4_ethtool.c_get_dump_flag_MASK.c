
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_dump {int version; int len; int flag; } ;
struct TYPE_2__ {int version; int len; int flag; } ;
struct adapter {TYPE_1__ eth_dump; } ;


 struct adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, struct ethtool_dump *VAR_1)
{
 struct adapter *VAR_2 = FUNC_0(VAR_0);

 VAR_1->flag = VAR_2->eth_dump.flag;
 VAR_1->len = VAR_2->eth_dump.len;
 VAR_1->version = VAR_2->eth_dump.version;
 return 0;
}
