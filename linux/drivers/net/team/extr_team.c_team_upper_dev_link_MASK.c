
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct team_port {TYPE_2__* dev; } ;
struct team {int dev; TYPE_1__* mode; } ;
struct netlink_ext_ack {int dummy; } ;
struct netdev_lag_upper_info {int hash_type; int tx_type; } ;
struct TYPE_4__ {int priv_flags; } ;
struct TYPE_3__ {int lag_tx_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int *,struct netdev_lag_upper_info*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_1(struct team *VAR_2, struct team_port *VAR_3,
          struct netlink_ext_ack *VAR_4)
{
 struct netdev_lag_upper_info VAR_5;
 int VAR_6;

 VAR_5.tx_type = VAR_2->mode->lag_tx_type;
 VAR_5.hash_type = VAR_1;
 VAR_6 = FUNC_0(VAR_3->dev, VAR_2->dev, ((void*)0),
        &VAR_5, VAR_4);
 if (VAR_6)
  return VAR_6;
 VAR_3->dev->priv_flags |= VAR_0;
 return 0;
}
