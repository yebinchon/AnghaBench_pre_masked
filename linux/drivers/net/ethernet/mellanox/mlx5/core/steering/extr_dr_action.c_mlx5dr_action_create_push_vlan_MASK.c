
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct mlx5dr_domain {int dummy; } ;
struct TYPE_2__ {int vlan_hdr; } ;
struct mlx5dr_action {TYPE_1__ push_vlan; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mlx5dr_action* FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5dr_domain*,char*) ;
 int FUNC_2 (int ) ;

struct mlx5dr_action *FUNC_3(struct mlx5dr_domain *VAR_3,
           __be32 VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_4);
 u16 VAR_6 = VAR_5 >> 16;
 struct mlx5dr_action *VAR_7;

 if (VAR_6 != VAR_2 && VAR_6 != VAR_0) {
  FUNC_1(VAR_3, "Invalid vlan ethertype\n");
  return ((void*)0);
 }

 VAR_7 = FUNC_0(VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->push_vlan.vlan_hdr = VAR_5;
 return VAR_7;
}
