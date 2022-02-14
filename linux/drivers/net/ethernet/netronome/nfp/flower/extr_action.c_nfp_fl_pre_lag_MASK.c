
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len_lw; int jump_id; } ;
struct nfp_fl_pre_lag {TYPE_1__ head; } ;
struct TYPE_4__ {int shortcut; } ;
struct nfp_fl_payload {TYPE_2__ meta; scalar_t__ action_data; } ;
struct nfp_app {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct flow_action_entry {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct nfp_app*,struct net_device*,struct nfp_fl_pre_lag*,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_5(struct nfp_app *VAR_5, const struct flow_action_entry *VAR_6,
        struct nfp_fl_payload *VAR_7, int VAR_8,
        struct netlink_ext_ack *VAR_9)
{
 size_t VAR_10 = sizeof(struct nfp_fl_pre_lag);
 struct nfp_fl_pre_lag *VAR_11;
 struct net_device *VAR_12;
 int VAR_13;

 VAR_12 = VAR_6->dev;
 if (!VAR_12 || !FUNC_3(VAR_12))
  return 0;

 if (VAR_8 + VAR_10 > VAR_3) {
  FUNC_0(VAR_9, "unsupported offload: maximum allowed action list size exceeded at LAG action");
  return -VAR_0;
 }




 if (VAR_8)
  FUNC_2(VAR_7->action_data + VAR_10,
   VAR_7->action_data, VAR_8);

 VAR_11 = (struct nfp_fl_pre_lag *)VAR_7->action_data;
 VAR_13 = FUNC_4(VAR_5, VAR_12, VAR_11, VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_11->head.jump_id = VAR_1;
 VAR_11->head.len_lw = VAR_10 >> VAR_2;

 VAR_7->meta.shortcut = FUNC_1(VAR_4);

 return VAR_10;
}
