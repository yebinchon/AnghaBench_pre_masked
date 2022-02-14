
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5e_priv {scalar_t__ drop_rq_q_counter; scalar_t__ q_counter; } ;
struct TYPE_4__ {int format; } ;
struct TYPE_3__ {int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_5, u8 *VAR_6, int VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2 && VAR_5->q_counter; VAR_8++)
  FUNC_0(VAR_6 + (VAR_7++) * VAR_0,
         VAR_4[VAR_8].format);

 for (VAR_8 = 0; VAR_8 < VAR_1 && VAR_5->drop_rq_q_counter; VAR_8++)
  FUNC_0(VAR_6 + (VAR_7++) * VAR_0,
         VAR_3[VAR_8].format);

 return VAR_7;
}
