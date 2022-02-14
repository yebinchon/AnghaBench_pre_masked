
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int qcnt; } ;
struct mlx5e_priv {TYPE_1__ stats; scalar_t__ drop_rq_q_counter; scalar_t__ q_counter; } ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_4, u64 *VAR_5, int VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1 && VAR_4->q_counter; VAR_7++)
  VAR_5[VAR_6++] = FUNC_0(&VAR_4->stats.qcnt,
         VAR_3, VAR_7);
 for (VAR_7 = 0; VAR_7 < VAR_0 && VAR_4->drop_rq_q_counter; VAR_7++)
  VAR_5[VAR_6++] = FUNC_0(&VAR_4->stats.qcnt,
         VAR_2, VAR_7);
 return VAR_6;
}
