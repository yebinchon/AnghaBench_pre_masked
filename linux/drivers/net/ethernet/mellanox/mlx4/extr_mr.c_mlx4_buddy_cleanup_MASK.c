
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_buddy {int max_order; int * num_free; int * bits; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mlx4_buddy *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 <= VAR_0->max_order; ++VAR_1)
  FUNC_1(VAR_0->bits[VAR_1]);

 FUNC_0(VAR_0->bits);
 FUNC_0(VAR_0->num_free);
}
