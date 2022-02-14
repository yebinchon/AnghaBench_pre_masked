
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_fw_dump {int tmpl_hdr; int cap_mask; } ;
struct qlcnic_adapter {struct net_device* netdev; TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct qlcnic_fw_dump fw_dump; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*,int ) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_1, u32 VAR_2)
{
 struct qlcnic_fw_dump *VAR_3 = &VAR_1->ahw->fw_dump;
 struct net_device *VAR_4 = VAR_1->netdev;

 if (!FUNC_1(VAR_1)) {
  FUNC_0(VAR_4,
       "Can not change driver mask to 0x%x. FW dump not enabled\n",
       VAR_2);
  return -VAR_0;
 }

 VAR_3->cap_mask = VAR_2;


 FUNC_2(VAR_1, VAR_3->tmpl_hdr, VAR_2);

 FUNC_0(VAR_4, "Driver mask changed to: 0x%x\n", VAR_2);
 return 0;
}
