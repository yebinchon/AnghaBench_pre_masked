
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct qlcnic_fw_msg {int* body; } ;
struct qlcnic_adapter {TYPE_1__* ahw; struct net_device* netdev; } ;
struct net_device {int dev; } ;
struct TYPE_2__ {int has_link_events; int module_type; int link_autoneg; int link_speed; int link_duplex; int loopback_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct qlcnic_adapter*,int) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_10,
        struct qlcnic_fw_msg *VAR_11)
{
 u32 VAR_12;
 u16 VAR_13, VAR_14;
 u8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19 = 0;
 struct net_device *VAR_20 = VAR_10->netdev;

 VAR_10->ahw->has_link_events = 1;

 VAR_12 = VAR_11->body[1] & 0xffffffff;
 VAR_13 = (VAR_11->body[1] >> 32) & 0xffff;
 VAR_14 = (VAR_11->body[1] >> 48) & 0xffff;

 VAR_15 = VAR_11->body[2] & 0xff;
 VAR_17 = (VAR_11->body[2] >> 16) & 0xff;
 VAR_18 = (VAR_11->body[2] >> 24) & 0xff;
 VAR_19 = (VAR_11->body[2] >> 32) & 0x3;

 VAR_16 = (VAR_11->body[2] >> 8) & 0xff;
 if (VAR_16 == VAR_4)
  FUNC_0(&VAR_20->dev,
    "unsupported cable: OUI 0x%x, length %d\n",
    VAR_12, VAR_13);
 else if (VAR_16 == VAR_5)
  FUNC_0(&VAR_20->dev, "unsupported cable length %d\n",
    VAR_13);

 if (!VAR_15 && (VAR_19 == VAR_7 ||
     VAR_19 == VAR_6))
  VAR_10->ahw->loopback_state |= VAR_8;

 FUNC_1(VAR_10, VAR_15);

 if (VAR_17 == VAR_3)
  VAR_10->ahw->link_duplex = VAR_0;
 else
  VAR_10->ahw->link_duplex = VAR_1;

 VAR_10->ahw->module_type = VAR_16;
 VAR_10->ahw->link_autoneg = VAR_18;

 if (VAR_15) {
  VAR_10->ahw->link_speed = VAR_14;
 } else {
  VAR_10->ahw->link_speed = VAR_9;
  VAR_10->ahw->link_duplex = VAR_2;
 }
}
