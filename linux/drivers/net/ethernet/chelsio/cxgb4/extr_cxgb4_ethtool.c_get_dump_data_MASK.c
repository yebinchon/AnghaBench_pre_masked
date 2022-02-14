
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_dump {int len; scalar_t__ flag; int version; } ;
struct cudbg_hdr {int dummy; } ;
struct cudbg_entity_hdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ flag; int version; } ;
struct adapter {TYPE_1__ eth_dump; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adapter*,void*,int*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct adapter*,scalar_t__) ;
 struct adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, struct ethtool_dump *VAR_5,
    void *VAR_6)
{
 struct adapter *VAR_7 = FUNC_2(VAR_4);
 u32 VAR_8 = 0;
 int VAR_9 = 0;

 if (VAR_7->eth_dump.flag == VAR_1)
  return -VAR_2;

 VAR_8 = sizeof(struct cudbg_hdr) +
       sizeof(struct cudbg_entity_hdr) * VAR_0;
 VAR_8 += FUNC_1(VAR_7, VAR_7->eth_dump.flag);
 if (VAR_5->len < VAR_8)
  return -VAR_3;

 VAR_9 = FUNC_0(VAR_7, VAR_6, &VAR_8, VAR_7->eth_dump.flag);
 if (VAR_9)
  return VAR_9;

 VAR_5->flag = VAR_7->eth_dump.flag;
 VAR_5->len = VAR_8;
 VAR_5->version = VAR_7->eth_dump.version;
 return 0;
}
