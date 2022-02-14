
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_fw_dump {int tmpl_hdr; int clr; } ;
struct qlcnic_adapter {int state; int flags; TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
struct ethtool_dump {int flag; } ;
struct TYPE_2__ {struct qlcnic_fw_dump fw_dump; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;


 int VAR_3 ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 struct qlcnic_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*,int) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int* VAR_4 ;
 int FUNC_8 (struct qlcnic_adapter*,int) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int
FUNC_10(struct net_device *VAR_5, struct ethtool_dump *VAR_6)
{
 struct qlcnic_adapter *VAR_7 = FUNC_3(VAR_5);
 struct qlcnic_fw_dump *VAR_8 = &VAR_7->ahw->fw_dump;
 bool VAR_9 = 0;
 int VAR_10, VAR_11 = 0;

 switch (VAR_6->flag) {
 case 131:
  if (!VAR_8->tmpl_hdr) {
   FUNC_1(VAR_5, "FW dump not supported\n");
   VAR_11 = -VAR_1;
   break;
  }

  if (!FUNC_4(VAR_7)) {
   FUNC_2(VAR_5, "FW dump not enabled\n");
   VAR_11 = -VAR_1;
   break;
  }

  if (VAR_8->clr) {
   FUNC_2(VAR_5,
        "Previous dump not cleared, not forcing dump\n");
   break;
  }

  FUNC_2(VAR_5, "Forcing a FW dump\n");
  FUNC_5(VAR_7, VAR_6->flag);
  break;
 case 133:
  if (!VAR_8->tmpl_hdr) {
   FUNC_1(VAR_5, "FW dump not supported\n");
   VAR_11 = -VAR_1;
   break;
  }

  VAR_11 = FUNC_6(VAR_7);
  break;

 case 132:
  if (!VAR_8->tmpl_hdr) {
   FUNC_1(VAR_5, "FW dump not supported\n");
   VAR_11 = -VAR_1;
   break;
  }

  VAR_11 = FUNC_7(VAR_7);
  break;

 case 130:
  FUNC_2(VAR_5, "Forcing a FW reset\n");
  FUNC_5(VAR_7, VAR_6->flag);
  VAR_7->flags &= ~VAR_2;
  break;

 case 128:
 case 129:
  if (FUNC_9(VAR_3, &VAR_7->state))
   FUNC_2(VAR_5, "Device is in non-operational state\n");
  break;

 default:
  if (!VAR_8->tmpl_hdr) {
   FUNC_1(VAR_5, "FW dump not supported\n");
   VAR_11 = -VAR_1;
   break;
  }

  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++) {
   if (VAR_6->flag == VAR_4[VAR_10]) {
    VAR_9 = 1;
    break;
   }
  }

  if (VAR_9) {
   VAR_11 = FUNC_8(VAR_7, VAR_6->flag);
  } else {
   FUNC_2(VAR_5, "Invalid dump level: 0x%x\n",
        VAR_6->flag);
   VAR_11 = -VAR_0;
  }
 }
 return VAR_11;
}
