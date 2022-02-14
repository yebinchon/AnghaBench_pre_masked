
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_ib_clock_info {int sign; int frac; int nsec; int mult; int cycles; } ;
struct TYPE_4__ {int frac; int nsec; int cycle_last; } ;
struct TYPE_3__ {int mult; } ;
struct mlx5_clock {TYPE_2__ tc; TYPE_1__ cycles; } ;
struct mlx5_core_dev {struct mlx5_clock clock; struct mlx5_ib_clock_info* clock_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct mlx5_core_dev *VAR_1)
{
 struct mlx5_ib_clock_info *VAR_2 = VAR_1->clock_info;
 struct mlx5_clock *VAR_3 = &VAR_1->clock;
 u32 VAR_4;

 if (!VAR_2)
  return;

 VAR_4 = FUNC_0(&VAR_2->sign);
 FUNC_1(VAR_2->sign,
       VAR_4 | VAR_0);

 VAR_2->cycles = VAR_3->tc.cycle_last;
 VAR_2->mult = VAR_3->cycles.mult;
 VAR_2->nsec = VAR_3->tc.nsec;
 VAR_2->frac = VAR_3->tc.frac;

 FUNC_2(&VAR_2->sign,
     VAR_4 + VAR_0 * 2);
}
