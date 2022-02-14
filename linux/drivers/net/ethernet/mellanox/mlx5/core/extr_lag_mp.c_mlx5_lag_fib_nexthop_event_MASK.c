
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lag_mp {struct fib_info* mfi; } ;
struct mlx5_lag {struct lag_mp lag_mp; } ;
struct fib_nh {int fib_nh_dev; } ;
struct fib_info {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct fib_info*) ;
 int FUNC_1 (struct mlx5_lag*,int ) ;
 int FUNC_2 (struct mlx5_lag*,int) ;

__attribute__((used)) static void FUNC_3(struct mlx5_lag *VAR_2,
           unsigned long VAR_3,
           struct fib_nh *VAR_4,
           struct fib_info *VAR_5)
{
 struct lag_mp *VAR_6 = &VAR_2->lag_mp;


 if (!VAR_6->mfi || VAR_6->mfi != VAR_5)
  return;


 if (VAR_3 == VAR_1) {
  int VAR_7 = FUNC_1(VAR_2, VAR_4->fib_nh_dev);

  if (VAR_7 >= 0) {
   VAR_7 = (VAR_7 + 1) % 2 + 1;
   FUNC_2(VAR_2, VAR_7);
  }
 } else if (VAR_3 == VAR_0 &&
     FUNC_0(VAR_5) == 2) {
  FUNC_2(VAR_2, 0);
 }
}
