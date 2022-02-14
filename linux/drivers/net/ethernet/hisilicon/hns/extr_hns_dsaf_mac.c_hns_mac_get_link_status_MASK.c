
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mac_driver {int (* get_link_status ) (struct mac_driver*,int*) ;} ;
struct hns_mac_cb {scalar_t__ media_type; int link; TYPE_2__* dsaf_dev; } ;
struct TYPE_4__ {TYPE_1__* misc_op; } ;
struct TYPE_3__ {int (* get_sfp_prsnt ) (struct hns_mac_cb*,int*) ;} ;


 scalar_t__ VAR_0 ;
 struct mac_driver* FUNC_0 (struct hns_mac_cb*) ;
 int FUNC_1 (struct mac_driver*,int*) ;
 int FUNC_2 (struct hns_mac_cb*,int*) ;

void FUNC_3(struct hns_mac_cb *VAR_1, u32 *VAR_2)
{
 struct mac_driver *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->get_link_status)
  VAR_3->get_link_status(VAR_3, VAR_2);
 else
  *VAR_2 = 0;

 if (VAR_1->media_type == VAR_0) {
  VAR_4 = VAR_1->dsaf_dev->misc_op->get_sfp_prsnt(VAR_1,
              &VAR_5);
  if (!VAR_4)
   *VAR_2 = *VAR_2 && VAR_5;
 }

 VAR_1->link = *VAR_2;
}
