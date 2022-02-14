
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_channels {int num; TYPE_1__** c; } ;
struct TYPE_2__ {int rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(struct mlx5e_channels *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num; VAR_4++) {
  int VAR_5 = VAR_3 ? 0 : VAR_1;

  VAR_3 |= FUNC_0(&VAR_2->c[VAR_4]->rq, VAR_5);




 }

 return VAR_3 ? -VAR_0 : 0;
}
