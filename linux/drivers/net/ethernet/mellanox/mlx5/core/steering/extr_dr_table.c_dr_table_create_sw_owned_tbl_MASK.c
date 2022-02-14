
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_15__ {TYPE_5__* s_anchor; } ;
struct TYPE_12__ {TYPE_2__* s_anchor; } ;
struct mlx5dr_table {int table_id; TYPE_9__* dmn; int table_type; TYPE_6__ tx; TYPE_3__ rx; } ;
struct TYPE_16__ {scalar_t__ max_ft_level; } ;
struct TYPE_17__ {TYPE_7__ caps; } ;
struct TYPE_18__ {TYPE_8__ info; int mdev; } ;
struct TYPE_14__ {TYPE_4__* chunk; } ;
struct TYPE_13__ {int icm_addr; } ;
struct TYPE_11__ {TYPE_1__* chunk; } ;
struct TYPE_10__ {int icm_addr; } ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__,int,int,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct mlx5dr_table *VAR_0)
{
 u64 VAR_1 = 0;
 u64 VAR_2 = 0;
 int VAR_3;

 if (VAR_0->rx.s_anchor)
  VAR_1 = VAR_0->rx.s_anchor->chunk->icm_addr;

 if (VAR_0->tx.s_anchor)
  VAR_2 = VAR_0->tx.s_anchor->chunk->icm_addr;

 VAR_3 = FUNC_0(VAR_0->dmn->mdev,
        VAR_0->table_type,
        VAR_1,
        VAR_2,
        VAR_0->dmn->info.caps.max_ft_level - 1,
        1, 0, ((void*)0),
        &VAR_0->table_id);

 return VAR_3;
}
