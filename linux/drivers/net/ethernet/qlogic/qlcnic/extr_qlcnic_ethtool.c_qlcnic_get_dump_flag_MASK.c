
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_fw_dump {int cap_mask; scalar_t__ size; scalar_t__ tmpl_hdr_size; scalar_t__ clr; int tmpl_hdr; } ;
struct qlcnic_adapter {int fw_version; int netdev; TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
struct ethtool_dump {int version; int flag; scalar_t__ len; } ;
struct TYPE_2__ {struct qlcnic_fw_dump fw_dump; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_2, struct ethtool_dump *VAR_3)
{
 struct qlcnic_adapter *VAR_4 = FUNC_1(VAR_2);
 struct qlcnic_fw_dump *VAR_5 = &VAR_4->ahw->fw_dump;

 if (!VAR_5->tmpl_hdr) {
  FUNC_0(VAR_4->netdev, "FW Dump not supported\n");
  return -VAR_0;
 }

 if (VAR_5->clr)
  VAR_3->len = VAR_5->tmpl_hdr_size + VAR_5->size;
 else
  VAR_3->len = 0;

 if (!FUNC_2(VAR_4))
  VAR_3->flag = VAR_1;
 else
  VAR_3->flag = VAR_5->cap_mask;

 VAR_3->version = VAR_4->fw_version;
 return 0;
}
