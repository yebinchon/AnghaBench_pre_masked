
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sa_data; int sa_family; } ;
struct TYPE_3__ {scalar_t__ flags; scalar_t__ length; } ;
union iwreq_data {TYPE_2__ ap_addr; TYPE_1__ data; } ;
struct ks_wlan_private {int scan_ind_count; int net_dev; int connect_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ks_wlan_private*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int ,union iwreq_data*,int *) ;

__attribute__((used)) static
void FUNC_5(struct ks_wlan_private *VAR_3)
{
 union iwreq_data VAR_4;

 VAR_4.data.length = 0;
 VAR_4.data.flags = 0;
 VAR_4.ap_addr.sa_family = VAR_0;
 if (FUNC_2(VAR_3->connect_status)) {
  FUNC_0(VAR_4.ap_addr.sa_data);
  FUNC_4(VAR_3->net_dev, VAR_1, &VAR_4, ((void*)0));
 }
 FUNC_3(VAR_3->net_dev, " scan_ind_count=%d\n", VAR_3->scan_ind_count);
 FUNC_1(VAR_3, VAR_2);
}
