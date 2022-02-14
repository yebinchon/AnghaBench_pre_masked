
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mlx5_eswitch {TYPE_3__* dev; } ;
struct TYPE_4__ {scalar_t__ max_vfs; } ;
struct TYPE_5__ {TYPE_1__ sriov; } ;
struct TYPE_6__ {TYPE_2__ priv; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(const struct mlx5_eswitch *VAR_1, u16 VAR_2)
{
 return VAR_2 >= VAR_0 &&
        VAR_2 <= VAR_1->dev->priv.sriov.max_vfs;
}
