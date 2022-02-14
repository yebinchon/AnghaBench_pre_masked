
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hnae3_handle {TYPE_2__* ae_algo; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_led_id ) (struct hnae3_handle*,int) ;} ;


 int VAR_0 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
       enum ethtool_phys_id_state VAR_2)
{
 struct hnae3_handle *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->ae_algo->ops->set_led_id)
  return -VAR_0;

 return VAR_3->ae_algo->ops->set_led_id(VAR_3, VAR_2);
}
