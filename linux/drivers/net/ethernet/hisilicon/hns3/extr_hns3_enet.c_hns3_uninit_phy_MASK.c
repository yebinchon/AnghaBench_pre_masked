
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hnae3_handle {TYPE_2__* ae_algo; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* mac_disconnect_phy ) (struct hnae3_handle*) ;} ;


 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct hnae3_handle *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->ae_algo->ops->mac_disconnect_phy)
  VAR_1->ae_algo->ops->mac_disconnect_phy(VAR_1);
}
