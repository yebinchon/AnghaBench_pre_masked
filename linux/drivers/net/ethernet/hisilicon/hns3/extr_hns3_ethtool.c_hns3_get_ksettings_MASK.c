
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hnae3_handle {TYPE_1__* ae_algo; } ;
struct hnae3_ae_ops {int (* get_mdix_mode ) (struct hnae3_handle*,int *,int *) ;int (* get_link_mode ) (struct hnae3_handle*,int ,int ) ;int (* get_ksettings_an_result ) (struct hnae3_handle*,int *,int *,int *) ;} ;
struct TYPE_6__ {int eth_tp_mdix; int eth_tp_mdix_ctrl; int duplex; int speed; int autoneg; } ;
struct TYPE_5__ {int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_3__ base; TYPE_2__ link_modes; } ;
struct TYPE_4__ {struct hnae3_ae_ops* ops; } ;


 int FUNC_0 (struct hnae3_handle*,int *,int *,int *) ;
 int FUNC_1 (struct hnae3_handle*,int ,int ) ;
 int FUNC_2 (struct hnae3_handle*,int *,int *) ;

__attribute__((used)) static void FUNC_3(struct hnae3_handle *VAR_0,
          struct ethtool_link_ksettings *VAR_1)
{
 const struct hnae3_ae_ops *VAR_2 = VAR_0->ae_algo->ops;


 if (VAR_2->get_ksettings_an_result)
  VAR_2->get_ksettings_an_result(VAR_0,
          &VAR_1->base.autoneg,
          &VAR_1->base.speed,
          &VAR_1->base.duplex);


 if (VAR_2->get_link_mode)
  VAR_2->get_link_mode(VAR_0,
       VAR_1->link_modes.supported,
       VAR_1->link_modes.advertising);


 if (VAR_2->get_mdix_mode)
  VAR_2->get_mdix_mode(VAR_0, &VAR_1->base.eth_tp_mdix_ctrl,
       &VAR_1->base.eth_tp_mdix);
}
