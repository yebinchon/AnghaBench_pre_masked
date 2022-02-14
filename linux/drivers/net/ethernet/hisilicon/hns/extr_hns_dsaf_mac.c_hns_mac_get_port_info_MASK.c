
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mac_info {int duplex; int speed; int auto_neg; } ;
struct mac_driver {int (* get_info ) (struct mac_driver*,struct mac_info*) ;} ;
struct hns_mac_cb {int dummy; } ;


 int VAR_0 ;
 struct mac_driver* FUNC_0 (struct hns_mac_cb*) ;
 int FUNC_1 (struct mac_driver*,struct mac_info*) ;

int FUNC_2(struct hns_mac_cb *VAR_1,
     u8 *VAR_2, u16 *VAR_3, u8 *VAR_4)
{
 struct mac_driver *VAR_5;
 struct mac_info VAR_6;

 VAR_5 = FUNC_0(VAR_1);

 if (!VAR_5->get_info)
  return -VAR_0;

 VAR_5->get_info(VAR_5, &VAR_6);
 if (VAR_2)
  *VAR_2 = VAR_6.auto_neg;
 if (VAR_3)
  *VAR_3 = VAR_6.speed;
 if (VAR_4)
  *VAR_4 = VAR_6.duplex;

 return 0;
}
