
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct lag_tracker {int dummy; } ;
struct lag_mp {struct fib_info* mfi; } ;
struct mlx5_lag {struct lag_tracker tracker; TYPE_1__* pf; struct lag_mp lag_mp; } ;
struct fib_nh {scalar_t__ fib_nh_dev; } ;
struct fib_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ netdev; int dev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5_lag*) ;
 struct fib_nh* FUNC_1 (struct fib_info*,int) ;
 unsigned int FUNC_2 (struct fib_info*) ;
 int FUNC_3 (struct mlx5_lag*,struct lag_tracker*,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct mlx5_lag*,struct net_device*) ;
 int FUNC_6 (struct mlx5_lag*,int) ;

__attribute__((used)) static void FUNC_7(struct mlx5_lag *VAR_2,
         unsigned long VAR_3,
         struct fib_info *VAR_4)
{
 struct lag_mp *VAR_5 = &VAR_2->lag_mp;
 struct fib_nh *VAR_6, *VAR_7;
 unsigned int VAR_8;


 if (VAR_3 == VAR_0) {

  if (VAR_5->mfi == VAR_4)
   VAR_5->mfi = ((void*)0);
  return;
 }


 VAR_8 = FUNC_2(VAR_4);
 if (VAR_8 == 1) {
  if (FUNC_0(VAR_2)) {
   struct fib_nh *VAR_9 = FUNC_1(VAR_4, 0);
   struct net_device *VAR_10 = VAR_9->fib_nh_dev;
   int VAR_11 = FUNC_5(VAR_2, VAR_10);

   FUNC_6(VAR_2, ++VAR_11);
  }
  return;
 }

 if (VAR_8 != 2)
  return;


 VAR_6 = FUNC_1(VAR_4, 0);
 VAR_7 = FUNC_1(VAR_4, 1);
 if (!(VAR_6->fib_nh_dev == VAR_2->pf[0].netdev &&
       VAR_7->fib_nh_dev == VAR_2->pf[1].netdev) &&
     !(VAR_6->fib_nh_dev == VAR_2->pf[1].netdev &&
       VAR_7->fib_nh_dev == VAR_2->pf[0].netdev)) {
  FUNC_4(VAR_2->pf[0].dev, "Multipath offload require two ports of the same HCA\n");
  return;
 }


 if (!VAR_5->mfi && !FUNC_0(VAR_2)) {
  struct lag_tracker VAR_12;

  VAR_12 = VAR_2->tracker;
  FUNC_3(VAR_2, &VAR_12, VAR_1);
 }

 FUNC_6(VAR_2, 0);
 VAR_5->mfi = VAR_4;
}
