
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mac_driver {scalar_t__ mac_en_flg; int virt_dev_num; int (* mac_enable ) (int ,int ) ;} ;
struct TYPE_2__ {int mac; } ;
struct hns_mac_cb {TYPE_1__ priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mac_driver* FUNC_0 (struct hns_mac_cb*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct hns_mac_cb *VAR_2)
{
 struct mac_driver *VAR_3 = FUNC_0(VAR_2);


 if (VAR_3->mac_en_flg == VAR_1) {

  VAR_3->virt_dev_num += 1;
  return;
 }

 if (VAR_3->mac_enable) {
  VAR_3->mac_enable(VAR_2->priv.mac, VAR_0);
  VAR_3->mac_en_flg = VAR_1;
 }
}
