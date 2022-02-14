
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_mac_cb {int mac_id; scalar_t__ mac_type; scalar_t__ phy_if; struct dsaf_device* dsaf_dev; } ;
struct dsaf_device {int dummy; } ;
typedef enum dsaf_port_rate_mode { ____Placeholder_dsaf_port_rate_mode } dsaf_port_rate_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct dsaf_device*,int,int) ;

void FUNC_1(struct hns_mac_cb *VAR_4)
{
 enum dsaf_port_rate_mode VAR_5;
 struct dsaf_device *VAR_6 = VAR_4->dsaf_dev;
 int VAR_7 = VAR_4->mac_id;

 if (VAR_4->mac_type != VAR_2)
  return;
 if (VAR_4->phy_if == VAR_3)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_0;

 FUNC_0(VAR_6, VAR_7, VAR_5);
}
