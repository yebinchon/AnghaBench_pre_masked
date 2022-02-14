
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mac_driver {int (* need_adjust_link ) (struct mac_driver*,int,int) ;} ;
struct TYPE_2__ {scalar_t__ mac; } ;
struct hns_mac_cb {TYPE_1__ priv; } ;
typedef enum mac_speed { ____Placeholder_mac_speed } mac_speed ;


 int FUNC_0 (struct mac_driver*,int,int) ;

bool FUNC_1(struct hns_mac_cb *VAR_0, int VAR_1, int VAR_2)
{
 struct mac_driver *VAR_3;

 VAR_3 = (struct mac_driver *)(VAR_0->priv.mac);

 if (VAR_3->need_adjust_link)
  return VAR_3->need_adjust_link(VAR_3,
   (enum mac_speed)VAR_1, VAR_2);
 else
  return 1;
}
