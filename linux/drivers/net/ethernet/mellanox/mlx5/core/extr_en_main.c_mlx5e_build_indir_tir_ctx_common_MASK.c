
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int tunneled_offload_en; } ;
struct TYPE_9__ {TYPE_5__ params; } ;
struct mlx5e_priv {TYPE_4__ channels; TYPE_3__* mdev; } ;
struct TYPE_6__ {int tdn; } ;
struct TYPE_7__ {TYPE_1__ td; } ;
struct TYPE_8__ {TYPE_2__ mlx5e_res; } ;


 int FUNC_0 (int *,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct mlx5e_priv *VAR_5,
          u32 VAR_6, u32 *VAR_7)
{
 FUNC_0(VAR_7, VAR_7, VAR_3, VAR_5->mdev->mlx5e_res.td.tdn);
 FUNC_0(VAR_7, VAR_7, VAR_1, VAR_0);
 FUNC_0(VAR_7, VAR_7, VAR_2, VAR_6);
 FUNC_0(VAR_7, VAR_7, VAR_4,
   VAR_5->channels.params.tunneled_offload_en);

 FUNC_1(&VAR_5->channels.params, VAR_7);
}
