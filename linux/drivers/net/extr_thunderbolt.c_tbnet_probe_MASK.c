
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thunderbolt_ip_frame_header {int dummy; } ;
struct TYPE_3__ {struct tbnet* data; int callback; int * uuid; } ;
struct tbnet {TYPE_1__ handler; int napi; struct tb_xdomain* xd; struct net_device* dev; struct tb_service* svc; int frame_id; int command_id; int connection_lock; int disconnect_work; int connected_work; int login_work; } ;
struct tb_xdomain {int dummy; } ;
struct tb_service_id {int dummy; } ;
struct tb_service {int dev; } ;
struct net_device {int hw_features; int features; int hard_header_len; scalar_t__ max_mtu; int min_mtu; int * netdev_ops; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct net_device*,int *) ;
 scalar_t__ VAR_10 ;
 struct net_device* FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 struct tbnet* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,int *,int ,int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 struct tb_xdomain* FUNC_12 (struct tb_service*) ;
 int FUNC_13 (struct tb_service*,struct tbnet*) ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_15 (struct net_device*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_16(struct tb_service *VAR_18, const struct tb_service_id *VAR_19)
{
 struct tb_xdomain *VAR_20 = FUNC_12(VAR_18);
 struct net_device *VAR_21;
 struct tbnet *VAR_22;
 int VAR_23;

 VAR_21 = FUNC_3(sizeof(*VAR_22));
 if (!VAR_21)
  return -VAR_0;

 FUNC_2(VAR_21, &VAR_18->dev);

 VAR_22 = FUNC_7(VAR_21);
 FUNC_0(&VAR_22->login_work, VAR_14);
 FUNC_1(&VAR_22->connected_work, VAR_11);
 FUNC_1(&VAR_22->disconnect_work, VAR_12);
 FUNC_6(&VAR_22->connection_lock);
 FUNC_4(&VAR_22->command_id, 0);
 FUNC_4(&VAR_22->frame_id, 0);
 VAR_22->svc = VAR_18;
 VAR_22->dev = VAR_21;
 VAR_22->xd = VAR_20;

 FUNC_15(VAR_21);

 FUNC_10(VAR_21->name, "thunderbolt%d");
 VAR_21->netdev_ops = &VAR_15;
 VAR_21->hw_features = VAR_9 | VAR_4 | VAR_5 |
      VAR_8 | VAR_7;
 VAR_21->features = VAR_21->hw_features | VAR_6;
 VAR_21->hard_header_len += sizeof(struct thunderbolt_ip_frame_header);

 FUNC_8(VAR_21, &VAR_22->napi, VAR_16, VAR_3);


 VAR_21->min_mtu = VAR_2;
 VAR_21->max_mtu = VAR_10 - VAR_1;

 VAR_22->handler.uuid = &VAR_17;
 VAR_22->handler.callback = VAR_13,
 VAR_22->handler.data = VAR_22;
 FUNC_11(&VAR_22->handler);

 FUNC_13(VAR_18, VAR_22);

 VAR_23 = FUNC_9(VAR_21);
 if (VAR_23) {
  FUNC_14(&VAR_22->handler);
  FUNC_5(VAR_21);
  return VAR_23;
 }

 return 0;
}
