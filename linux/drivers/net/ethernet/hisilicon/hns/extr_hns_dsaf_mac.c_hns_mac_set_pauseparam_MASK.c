
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mac_driver {int (* mac_pausefrm_cfg ) (struct mac_driver*,scalar_t__,scalar_t__) ;} ;
struct hns_mac_cb {scalar_t__ mac_type; int dev; TYPE_1__* dsaf_dev; } ;
struct TYPE_2__ {int dsaf_ver; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 struct mac_driver* FUNC_2 (struct hns_mac_cb*) ;
 int FUNC_3 (struct mac_driver*,scalar_t__,scalar_t__) ;

int FUNC_4(struct hns_mac_cb *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct mac_driver *VAR_5 = FUNC_2(VAR_2);
 bool VAR_6 = FUNC_0(VAR_2->dsaf_dev->dsaf_ver);

 if (VAR_2->mac_type == VAR_1) {
  if (VAR_6 && (VAR_4 || VAR_3)) {
   FUNC_1(VAR_2->dev, "macv1 can't enable tx/rx_pause!\n");
   return -VAR_0;
  }
 }

 if (VAR_5->mac_pausefrm_cfg)
  VAR_5->mac_pausefrm_cfg(VAR_5, VAR_3, VAR_4);

 return 0;
}
