
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sa_data; int sa_family; } ;
struct TYPE_3__ {scalar_t__ flags; scalar_t__ length; } ;
union iwreq_data {TYPE_2__ ap_addr; TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct ks_wlan_private {unsigned int connect_status; scalar_t__ dev_state; scalar_t__ scan_ind_count; struct net_device* net_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ks_wlan_private*,int ) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int ,union iwreq_data*,int *) ;

__attribute__((used)) static
void FUNC_7(struct ks_wlan_private *VAR_7)
{
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = VAR_7->connect_status;
 struct net_device *VAR_10 = VAR_7->net_dev;
 union iwreq_data VAR_11;

 if (VAR_7->dev_state == VAR_2)
  VAR_7->dev_state = VAR_1;


 if (FUNC_2(VAR_7->connect_status)) {
  FUNC_5(VAR_10);
  VAR_8 = VAR_4 & VAR_7->connect_status;
  VAR_7->connect_status = VAR_8 | VAR_3;
  FUNC_4(VAR_10, "IWEVENT: disconnect\n");

  VAR_11 = 0;
  VAR_11 = 0;
  VAR_11 = VAR_0;
  if (FUNC_3(VAR_7->connect_status) &&
      FUNC_2(VAR_9)) {
   FUNC_0(VAR_11);
   FUNC_4(VAR_10, "IWEVENT: disconnect\n");
   FUNC_6(VAR_10, VAR_5, &VAR_11, ((void*)0));
  }
  VAR_7->scan_ind_count = 0;
 }

 FUNC_1(VAR_7, VAR_6);
}
