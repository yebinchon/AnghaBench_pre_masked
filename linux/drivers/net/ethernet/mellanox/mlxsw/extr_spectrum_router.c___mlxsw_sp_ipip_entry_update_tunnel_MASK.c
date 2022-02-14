
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_ipip_entry {TYPE_2__* ol_dev; TYPE_1__* ol_lb; scalar_t__ decap_fib_entry; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int common; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*,int,struct netlink_ext_ack*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*) ;
 int FUNC_3 (struct mlxsw_sp*,int *) ;

int FUNC_4(struct mlxsw_sp *VAR_1,
     struct mlxsw_sp_ipip_entry *VAR_2,
     bool VAR_3,
     bool VAR_4,
     bool VAR_5,
     struct netlink_ext_ack *VAR_6)
{
 int VAR_7;







 if (VAR_2->decap_fib_entry)
  FUNC_0(VAR_1, VAR_2);

 if (VAR_3) {
  VAR_7 = FUNC_1(VAR_1, VAR_2,
             VAR_4, VAR_6);
  if (VAR_7)
   return VAR_7;
 } else if (VAR_5) {
  FUNC_3(VAR_1,
         &VAR_2->ol_lb->common);
 }

 if (VAR_2->ol_dev->flags & VAR_0)
  FUNC_2(VAR_1, VAR_2);

 return 0;
}
