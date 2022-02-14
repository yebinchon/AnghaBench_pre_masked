
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int destructor; } ;
struct mlxsw_afa_mirror {int ingress; TYPE_3__ resource; int local_in_port; int span_id; } ;
struct mlxsw_afa_block {TYPE_1__* afa; } ;
struct TYPE_5__ {int (* mirror_add ) (int ,int ,struct net_device const*,int,int *) ;} ;
struct TYPE_4__ {int ops_priv; TYPE_2__* ops; } ;


 int VAR_0 ;
 struct mlxsw_afa_mirror* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mlxsw_afa_mirror*) ;
 struct mlxsw_afa_mirror* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct mlxsw_afa_block*,TYPE_3__*) ;
 int FUNC_4 (int ,int ,struct net_device const*,int,int *) ;

__attribute__((used)) static struct mlxsw_afa_mirror *
FUNC_5(struct mlxsw_afa_block *VAR_3, u8 VAR_4,
   const struct net_device *VAR_5, bool VAR_6)
{
 struct mlxsw_afa_mirror *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_8 = VAR_3->afa->ops->mirror_add(VAR_3->afa->ops_priv,
       VAR_4, VAR_5,
       VAR_6, &VAR_7->span_id);
 if (VAR_8)
  goto err_mirror_add;

 VAR_7->ingress = VAR_6;
 VAR_7->local_in_port = VAR_4;
 VAR_7->resource.destructor = VAR_2;
 FUNC_3(VAR_3, &VAR_7->resource);
 return VAR_7;

err_mirror_add:
 FUNC_1(VAR_7);
 return FUNC_0(VAR_8);
}
