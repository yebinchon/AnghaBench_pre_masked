
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_channel {int num_tc; int * sq; int icosq; int rq; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5e_channel*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct mlx5e_channel *VAR_1)
{
 int VAR_2;

 if (FUNC_4(VAR_0, VAR_1->state))
  FUNC_3(VAR_1);

 FUNC_1(&VAR_1->rq);
 FUNC_0(&VAR_1->icosq);
 for (VAR_2 = 0; VAR_2 < VAR_1->num_tc; VAR_2++)
  FUNC_2(&VAR_1->sq[VAR_2]);
}
