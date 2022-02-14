
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucast ;
struct qed_filter_ucast_params {int type; int vlan; int mac; scalar_t__ mac_valid; scalar_t__ vlan_valid; } ;
struct qed_filter_ucast {int is_rx_filter; int is_tx_filter; int vlan; int type; int mac; int opcode; } ;
struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_dev*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct qed_filter_ucast*,int ,int) ;
 int FUNC_3 (struct qed_dev*,struct qed_filter_ucast*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_8,
          struct qed_filter_ucast_params *VAR_9)
{
 struct qed_filter_ucast VAR_10;

 if (!VAR_9->vlan_valid && !VAR_9->mac_valid) {
  FUNC_0(VAR_8,
     "Tried configuring a unicast filter, but both MAC and VLAN are not set\n");
  return -VAR_0;
 }

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 switch (VAR_9->type) {
 case 130:
  VAR_10.opcode = VAR_1;
  break;
 case 129:
  VAR_10.opcode = VAR_4;
  break;
 case 128:
  VAR_10.opcode = VAR_5;
  break;
 default:
  FUNC_0(VAR_8, "Unknown unicast filter type %d\n",
     VAR_9->type);
 }

 if (VAR_9->vlan_valid && VAR_9->mac_valid) {
  VAR_10.type = VAR_3;
  FUNC_1(VAR_10.mac, VAR_9->mac);
  VAR_10.vlan = VAR_9->vlan;
 } else if (VAR_9->mac_valid) {
  VAR_10.type = VAR_2;
  FUNC_1(VAR_10.mac, VAR_9->mac);
 } else {
  VAR_10.type = VAR_6;
  VAR_10.vlan = VAR_9->vlan;
 }

 VAR_10.is_rx_filter = 1;
 VAR_10.is_tx_filter = 1;

 return FUNC_3(VAR_8, &VAR_10, VAR_7, ((void*)0));
}
