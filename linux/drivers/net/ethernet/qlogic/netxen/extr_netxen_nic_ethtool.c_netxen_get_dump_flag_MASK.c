
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_minidump {int md_capture_mask; int md_enabled; int md_dump_size; } ;
struct netxen_adapter {int fw_version; scalar_t__ fw_mdump_rdy; struct netxen_minidump mdump; } ;
struct net_device {int dummy; } ;
struct ethtool_dump {int version; int flag; int len; } ;


 int VAR_0 ;
 struct netxen_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_1, struct ethtool_dump *VAR_2)
{
 struct netxen_adapter *VAR_3 = FUNC_0(VAR_1);
 struct netxen_minidump *VAR_4 = &VAR_3->mdump;
 if (VAR_3->fw_mdump_rdy)
  VAR_2->len = VAR_4->md_dump_size;
 else
  VAR_2->len = 0;

 if (!VAR_4->md_enabled)
  VAR_2->flag = VAR_0;
 else
  VAR_2->flag = VAR_4->md_capture_mask;

 VAR_2->version = VAR_3->fw_version;
 return 0;
}
