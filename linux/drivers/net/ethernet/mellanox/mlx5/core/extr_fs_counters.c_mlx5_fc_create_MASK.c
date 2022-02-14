
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_fc_stats {int work; int wq; int addlist; int counters_idr_lock; int counters_idr; } ;
struct TYPE_4__ {int packets; int bytes; int lastuse; } ;
struct mlx5_fc {int aging; int addlist; TYPE_2__ cache; int lastpackets; int lastbytes; int id; int list; } ;
struct TYPE_3__ {struct mlx5_fc_stats fc_stats; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 struct mlx5_fc* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct mlx5_fc*) ;
 int FUNC_3 (int *,struct mlx5_fc*,int *,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (int *,int *) ;
 struct mlx5_fc* FUNC_7 (struct mlx5_core_dev*,int) ;
 int FUNC_8 (struct mlx5_core_dev*,struct mlx5_fc*) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

struct mlx5_fc *FUNC_12(struct mlx5_core_dev *VAR_3, bool VAR_4)
{
 struct mlx5_fc *VAR_5 = FUNC_7(VAR_3, VAR_4);
 struct mlx5_fc_stats *VAR_6 = &VAR_3->priv.fc_stats;
 int VAR_7;

 if (FUNC_2(VAR_5))
  return VAR_5;

 FUNC_1(&VAR_5->list);
 VAR_5->aging = VAR_4;

 if (VAR_4) {
  u32 VAR_8 = VAR_5->id;

  VAR_5->cache.lastuse = VAR_2;
  VAR_5->lastbytes = VAR_5->cache.bytes;
  VAR_5->lastpackets = VAR_5->cache.packets;

  FUNC_4(VAR_0);
  FUNC_10(&VAR_6->counters_idr_lock);

  VAR_7 = FUNC_3(&VAR_6->counters_idr, VAR_5, &VAR_8, VAR_8,
        VAR_1);

  FUNC_11(&VAR_6->counters_idr_lock);
  FUNC_5();
  if (VAR_7)
   goto err_out_alloc;

  FUNC_6(&VAR_5->addlist, &VAR_6->addlist);

  FUNC_9(VAR_6->wq, &VAR_6->work, 0);
 }

 return VAR_5;

err_out_alloc:
 FUNC_8(VAR_3, VAR_5);
 return FUNC_0(VAR_7);
}
