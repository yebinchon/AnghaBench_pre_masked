
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ flags; scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int sme_flag; } ;
struct ks_wlan_private {int scan_ind_count; TYPE_2__ sme_i; struct net_device* net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ks_wlan_private*) ;
 int FUNC_1 (struct ks_wlan_private*,int ) ;
 int FUNC_2 (struct net_device*,char*,int ,int ) ;
 int FUNC_3 (struct net_device*,int ,union iwreq_data*,int *) ;

__attribute__((used)) static
void FUNC_4(struct ks_wlan_private *VAR_3)
{
 u32 VAR_4;
 struct net_device *VAR_5 = VAR_3->net_dev;
 union iwreq_data VAR_6;

 VAR_4 = FUNC_0(VAR_3);
 FUNC_2(VAR_3->net_dev, "result=%d :: scan_ind_count=%d\n",
     VAR_4, VAR_3->scan_ind_count);

 VAR_3->sme_i.sme_flag &= ~VAR_1;
 FUNC_1(VAR_3, VAR_2);

 VAR_6.data.length = 0;
 VAR_6.data.flags = 0;
 FUNC_3(VAR_5, VAR_0, &VAR_6, ((void*)0));
 VAR_3->scan_ind_count = 0;
}
