
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_pkt_reformat {int ns_type; int reformat_type; } ;
struct mlx5_flow_root_namespace {TYPE_1__* cmds; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum mlx5_flow_namespace_type { ____Placeholder_mlx5_flow_namespace_type } mlx5_flow_namespace_type ;
struct TYPE_2__ {int (* packet_reformat_alloc ) (struct mlx5_flow_root_namespace*,int,size_t,void*,int,struct mlx5_pkt_reformat*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_pkt_reformat* FUNC_0 (int) ;
 int VAR_2 ;
 struct mlx5_flow_root_namespace* FUNC_1 (struct mlx5_core_dev*,int) ;
 int FUNC_2 (struct mlx5_pkt_reformat*) ;
 struct mlx5_pkt_reformat* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5_flow_root_namespace*,int,size_t,void*,int,struct mlx5_pkt_reformat*) ;

struct mlx5_pkt_reformat *FUNC_5(struct mlx5_core_dev *VAR_3,
           int VAR_4,
           size_t VAR_5,
           void *VAR_6,
           enum mlx5_flow_namespace_type VAR_7)
{
 struct mlx5_pkt_reformat *VAR_8;
 struct mlx5_flow_root_namespace *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_3, VAR_7);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_8->ns_type = VAR_7;
 VAR_8->reformat_type = VAR_4;
 VAR_10 = VAR_9->cmds->packet_reformat_alloc(VAR_9, VAR_4, VAR_5,
      VAR_6, VAR_7,
      VAR_8);
 if (VAR_10) {
  FUNC_2(VAR_8);
  return FUNC_0(VAR_10);
 }

 return VAR_8;
}
