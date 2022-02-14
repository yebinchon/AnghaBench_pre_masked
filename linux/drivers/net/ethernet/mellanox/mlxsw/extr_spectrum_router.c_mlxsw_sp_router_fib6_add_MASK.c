
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlxsw_sp_fib_node {int dummy; } ;
typedef struct mlxsw_sp_fib_node mlxsw_sp_fib6_entry ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_8__ {int plen; int addr; } ;
struct TYPE_6__ {scalar_t__ plen; } ;
struct fib6_info {TYPE_4__ fib6_dst; TYPE_3__* fib6_table; TYPE_2__ fib6_src; } ;
struct TYPE_7__ {int tb6_id; } ;
struct TYPE_5__ {scalar_t__ aborted; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp_fib_node*) ;
 int VAR_1 ;
 int FUNC_1 (struct mlxsw_sp_fib_node*) ;
 struct mlxsw_sp_fib_node* FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*,struct fib6_info**,unsigned int) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*,struct fib6_info**,unsigned int) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*,int) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*,int*) ;
 struct mlxsw_sp_fib_node* FUNC_7 (struct mlxsw_sp_fib_node*,struct fib6_info*,int) ;
 scalar_t__ FUNC_8 (struct fib6_info*) ;
 struct mlxsw_sp_fib_node* FUNC_9 (struct mlxsw_sp*,int ,int *,int,int ,int ) ;
 int FUNC_10 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*) ;

__attribute__((used)) static int FUNC_11(struct mlxsw_sp *VAR_2,
        struct fib6_info **VAR_3,
        unsigned int VAR_4, bool VAR_5)
{
 struct mlxsw_sp_fib6_entry *VAR_6;
 struct mlxsw_sp_fib_node *VAR_7;
 struct fib6_info *VAR_8 = VAR_3[0];
 int VAR_9;

 if (VAR_2->router->aborted)
  return 0;

 if (VAR_8->fib6_src.plen)
  return -VAR_0;

 if (FUNC_8(VAR_8))
  return 0;

 VAR_7 = FUNC_9(VAR_2, VAR_8->fib6_table->tb6_id,
      &VAR_8->fib6_dst.addr,
      sizeof(VAR_8->fib6_dst.addr),
      VAR_8->fib6_dst.plen,
      VAR_1);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);




 VAR_6 = FUNC_7(VAR_7, VAR_8, VAR_5);
 if (VAR_6) {
  VAR_9 = FUNC_4(VAR_2, VAR_6,
            VAR_3, VAR_4);
  if (VAR_9)
   goto err_fib6_entry_nexthop_add;
  return 0;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_7, VAR_3,
      VAR_4);
 if (FUNC_0(VAR_6)) {
  VAR_9 = FUNC_1(VAR_6);
  goto err_fib6_entry_create;
 }

 VAR_9 = FUNC_6(VAR_2, VAR_6, &VAR_5);
 if (VAR_9)
  goto err_fib6_node_entry_link;

 FUNC_5(VAR_2, VAR_6, VAR_5);

 return 0;

err_fib6_node_entry_link:
 FUNC_3(VAR_2, VAR_6);
err_fib6_entry_create:
err_fib6_entry_nexthop_add:
 FUNC_10(VAR_2, VAR_7);
 return VAR_9;
}
