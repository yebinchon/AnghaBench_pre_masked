
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_modify_hdr {int ns_type; } ;
struct mlx5_flow_root_namespace {TYPE_1__* cmds; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int (* modify_header_alloc ) (struct mlx5_flow_root_namespace*,int ,int ,void*,struct mlx5_modify_hdr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_modify_hdr* FUNC_0 (int) ;
 int VAR_2 ;
 struct mlx5_flow_root_namespace* FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_modify_hdr*) ;
 struct mlx5_modify_hdr* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5_flow_root_namespace*,int ,int ,void*,struct mlx5_modify_hdr*) ;

struct mlx5_modify_hdr *FUNC_5(struct mlx5_core_dev *VAR_3,
       u8 VAR_4, u8 VAR_5,
       void *VAR_6)
{
 struct mlx5_flow_root_namespace *VAR_7;
 struct mlx5_modify_hdr *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_8->ns_type = VAR_4;
 VAR_9 = VAR_7->cmds->modify_header_alloc(VAR_7, VAR_4, VAR_5,
           VAR_6, VAR_8);
 if (VAR_9) {
  FUNC_2(VAR_8);
  return FUNC_0(VAR_9);
 }

 return VAR_8;
}
