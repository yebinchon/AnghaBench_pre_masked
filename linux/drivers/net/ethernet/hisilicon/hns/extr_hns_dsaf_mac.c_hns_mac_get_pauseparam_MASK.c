
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mac_driver {int (* get_pause_enable ) (struct mac_driver*,scalar_t__*,scalar_t__*) ;} ;
struct hns_mac_cb {int dummy; } ;


 struct mac_driver* FUNC_0 (struct hns_mac_cb*) ;
 int FUNC_1 (struct mac_driver*,scalar_t__*,scalar_t__*) ;

void FUNC_2(struct hns_mac_cb *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 struct mac_driver *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->get_pause_enable) {
  VAR_3->get_pause_enable(VAR_3, VAR_1, VAR_2);
 } else {
  *VAR_1 = 0;
  *VAR_2 = 0;
 }
}
