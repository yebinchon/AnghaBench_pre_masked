
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_rq {int rqn; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_rq*,int,int) ;
 int FUNC_1 (struct net_device*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_rq *VAR_2, int VAR_3)
{
 struct net_device *VAR_4 = VAR_2->netdev;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_1);
 if (VAR_5) {
  FUNC_1(VAR_4, "Failed to move rq 0x%x to reset\n", VAR_2->rqn);
  return VAR_5;
 }
 VAR_5 = FUNC_0(VAR_2, VAR_1, VAR_0);
 if (VAR_5) {
  FUNC_1(VAR_4, "Failed to move rq 0x%x to ready\n", VAR_2->rqn);
  return VAR_5;
 }

 return 0;
}
