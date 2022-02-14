
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct mlx5dr_domain {int dummy; } ;
struct mlx5dr_action {int dummy; } ;
struct mlx5_fs_vlan {scalar_t__ vid; scalar_t__ prio; scalar_t__ ethtype; } ;


 int FUNC_0 (int) ;
 struct mlx5dr_action* FUNC_1 (struct mlx5dr_domain*,int ) ;

__attribute__((used)) static struct mlx5dr_action *FUNC_2(struct mlx5dr_domain *VAR_0,
           struct mlx5_fs_vlan *VAR_1)
{
 u16 VAR_2 = VAR_1->ethtype;
 u8 VAR_3 = VAR_1->prio;
 u16 VAR_4 = VAR_1->vid;
 u32 VAR_5;

 VAR_5 = (u32)VAR_2 << 16 | (u32)(VAR_3) << 12 | (u32)VAR_4;
 return FUNC_1(VAR_0, FUNC_0(VAR_5));
}
