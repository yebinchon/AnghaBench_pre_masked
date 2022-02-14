
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hns_mac_cb {int mac_id; int port_mode_off; TYPE_1__* dsaf_dev; } ;
typedef int phy_interface_t ;
struct TYPE_3__ {int dsaf_ver; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static phy_interface_t FUNC_4(struct hns_mac_cb *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 bool VAR_9 = FUNC_0(VAR_6->dsaf_dev->dsaf_ver);
 int VAR_10 = VAR_6->mac_id;
 phy_interface_t VAR_11;

 if (VAR_9) {
  if (FUNC_1(VAR_6->dsaf_dev))
   return VAR_4;

  if (VAR_10 >= 0 && VAR_10 <= 3)
   VAR_8 = VAR_3;
  else
   VAR_8 = VAR_1;
 } else{
  if (!FUNC_1(VAR_6->dsaf_dev) && VAR_10 <= 3)
   VAR_8 = VAR_2;
  else
   VAR_8 = VAR_0;
 }

 VAR_7 = FUNC_3(VAR_6->dsaf_dev, VAR_8);
 if (FUNC_2(VAR_7, VAR_6->port_mode_off))
  VAR_11 = VAR_5;
 else
  VAR_11 = VAR_4;

 return VAR_11;
}
