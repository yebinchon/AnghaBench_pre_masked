
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_channels {int num; TYPE_1__** c; } ;
struct TYPE_2__ {int rq; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(struct mlx5e_channels *VAR_0, bool VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num; VAR_3++) {
  VAR_2 = FUNC_0(&VAR_0->c[VAR_3]->rq, VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
