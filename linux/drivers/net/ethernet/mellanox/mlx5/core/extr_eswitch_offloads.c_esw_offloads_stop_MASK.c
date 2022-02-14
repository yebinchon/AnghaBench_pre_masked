
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct mlx5_eswitch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct mlx5_eswitch*) ;
 int FUNC_2 (struct mlx5_eswitch*,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx5_eswitch *VAR_2,
        struct netlink_ext_ack *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_1(VAR_2);
 VAR_4 = FUNC_2(VAR_2, VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_3, "Failed setting eswitch to legacy");
  VAR_5 = FUNC_2(VAR_2, VAR_1);
  if (VAR_5) {
   FUNC_0(VAR_3,
        "Failed setting eswitch back to offloads");
  }
 }

 return VAR_4;
}
