
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mac_driver {scalar_t__ virt_dev_num; scalar_t__ mac_en_flg; int (* mac_disable ) (int ,int ) ;} ;
struct TYPE_4__ {int mac; } ;
struct hns_mac_cb {TYPE_3__* dsaf_dev; scalar_t__ link; TYPE_1__ priv; } ;
struct TYPE_6__ {TYPE_2__* misc_op; } ;
struct TYPE_5__ {int (* cpld_reset_led ) (struct hns_mac_cb*) ;} ;


 int VAR_0 ;
 struct mac_driver* FUNC_0 (struct hns_mac_cb*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct hns_mac_cb*) ;

void FUNC_3(struct hns_mac_cb *VAR_1)
{
 struct mac_driver *VAR_2 = FUNC_0(VAR_1);


 if (VAR_2->virt_dev_num > 0) {
  VAR_2->virt_dev_num -= 1;
  if (VAR_2->virt_dev_num > 0)
   return;
 }

 if (VAR_2->mac_disable)
  VAR_2->mac_disable(VAR_1->priv.mac,
   VAR_0);

 VAR_2->mac_en_flg = 0;
 VAR_1->link = 0;
 VAR_1->dsaf_dev->misc_op->cpld_reset_led(VAR_1);
}
