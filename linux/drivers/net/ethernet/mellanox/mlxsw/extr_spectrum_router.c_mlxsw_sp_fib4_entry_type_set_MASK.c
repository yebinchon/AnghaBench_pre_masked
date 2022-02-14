
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union mlxsw_sp_l3addr {int addr4; } ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_ipip_entry {TYPE_1__* ol_dev; } ;
struct TYPE_5__ {int tunnel_index; } ;
struct mlxsw_sp_fib_entry {void* type; TYPE_2__ decap; } ;
struct mlxsw_sp {int dummy; } ;
struct fib_info {int dummy; } ;
struct fib_entry_notifier_info {int type; struct fib_info* fi; int tb_id; int dst; } ;
struct TYPE_6__ {struct net_device* fib_nh_dev; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;






 TYPE_3__* FUNC_0 (struct fib_info*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_sp*,struct fib_info*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_fib_entry*,struct mlxsw_sp_ipip_entry*) ;
 int FUNC_4 (int ) ;
 struct mlxsw_sp_ipip_entry* FUNC_5 (struct mlxsw_sp*,struct net_device*,int ,union mlxsw_sp_l3addr) ;
 int FUNC_6 (struct mlxsw_sp*) ;
 int FUNC_7 (struct mlxsw_sp*,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct mlxsw_sp *VAR_9,
        const struct fib_entry_notifier_info *VAR_10,
        struct mlxsw_sp_fib_entry *VAR_11)
{
 struct net_device *VAR_12 = FUNC_0(VAR_10->fi, 0)->fib_nh_dev;
 union mlxsw_sp_l3addr VAR_13 = { .addr4 = FUNC_1(VAR_10->dst) };
 u32 VAR_14 = FUNC_4(VAR_10->tb_id);
 struct mlxsw_sp_ipip_entry *VAR_15;
 struct fib_info *VAR_16 = VAR_10->fi;

 switch (VAR_10->type) {
 case 131:
  VAR_15 = FUNC_5(VAR_9, VAR_12,
       VAR_8, VAR_13);
  if (VAR_15 && VAR_15->ol_dev->flags & VAR_1) {
   VAR_11->type = VAR_3;
   return FUNC_3(VAR_9,
            VAR_11,
            VAR_15);
  }
  if (FUNC_7(VAR_9, VAR_14,
           VAR_13.addr4)) {
   u32 VAR_17;

   VAR_17 = FUNC_6(VAR_9);
   VAR_11->decap.tunnel_index = VAR_17;
   VAR_11->type = VAR_5;
   return 0;
  }

 case 132:
  VAR_11->type = VAR_7;
  return 0;
 case 133:
  VAR_11->type = VAR_2;
  return 0;
 case 128:
 case 130:




  VAR_11->type = VAR_4;
  return 0;
 case 129:
  if (FUNC_2(VAR_9, VAR_16))
   VAR_11->type = VAR_6;
  else
   VAR_11->type = VAR_4;
  return 0;
 default:
  return -VAR_0;
 }
}
