
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sa_data; int sa_family; } ;
struct TYPE_5__ {scalar_t__ flags; scalar_t__ length; } ;
union iwreq_data {TYPE_3__ ap_addr; TYPE_2__ data; } ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct link_ap_info {int dummy; } ;
struct TYPE_4__ {int confirm_wait; int snooze_guard; } ;
struct ks_wlan_private {unsigned int connect_status; scalar_t__ scan_ind_count; struct net_device* net_dev; TYPE_1__ psstatus; scalar_t__ rxp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ks_wlan_private*,struct link_ap_info*) ;
 int FUNC_3 (struct ks_wlan_private*) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (struct ks_wlan_private*) ;
 int FUNC_7 (struct net_device*,char*,int,...) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*,int ,union iwreq_data*,int *) ;

__attribute__((used)) static
void FUNC_11(struct ks_wlan_private *VAR_5)
{
 u16 VAR_6;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = VAR_5->connect_status;
 struct net_device *VAR_9 = VAR_5->net_dev;
 union iwreq_data VAR_10;

 VAR_6 = FUNC_3(VAR_5);

 switch (VAR_6) {
 case 129:
  if (!(VAR_5->connect_status & VAR_3))
   FUNC_9(VAR_9);
  VAR_7 = VAR_3 & VAR_5->connect_status;
  VAR_5->connect_status = VAR_7 + VAR_1;
  break;
 case 128:
  FUNC_8(VAR_9);
  VAR_7 = VAR_3 & VAR_5->connect_status;
  VAR_5->connect_status = VAR_7 + VAR_2;
  break;
 default:
  FUNC_7(VAR_5->net_dev, "unknown connect_code=%d :: scan_ind_count=%d\n",
      VAR_6, VAR_5->scan_ind_count);
  FUNC_8(VAR_9);
  VAR_7 = VAR_3 & VAR_5->connect_status;
  VAR_5->connect_status = VAR_7 + VAR_2;
  break;
 }

 FUNC_2(VAR_5, (struct link_ap_info *)VAR_5->rxp);
 if (FUNC_4(VAR_5->connect_status) &&
     FUNC_5(VAR_8)) {

  FUNC_0(&VAR_5->psstatus.snooze_guard, 0);
  FUNC_0(&VAR_5->psstatus.confirm_wait, 0);
 }
 FUNC_6(VAR_5);

 VAR_10 = 0;
 VAR_10 = 0;
 VAR_10 = VAR_0;
 if (FUNC_5(VAR_5->connect_status) &&
     FUNC_4(VAR_8)) {
  FUNC_1(VAR_10);
  FUNC_7(VAR_5->net_dev, "disconnect :: scan_ind_count=%d\n",
      VAR_5->scan_ind_count);
  FUNC_10(VAR_9, VAR_4, &VAR_10, ((void*)0));
 }
 VAR_5->scan_ind_count = 0;
}
