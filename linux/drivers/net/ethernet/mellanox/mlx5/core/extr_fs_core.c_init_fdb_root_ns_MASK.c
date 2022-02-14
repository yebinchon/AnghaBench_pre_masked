
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_flow_steering {TYPE_1__* fdb_root_ns; struct mlx5_flow_namespace** fdb_sub_ns; } ;
struct mlx5_flow_namespace {int dummy; } ;
typedef struct mlx5_flow_namespace fs_prio ;
struct TYPE_4__ {struct mlx5_flow_namespace ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct mlx5_flow_namespace*) ;
 int VAR_8 ;
 int FUNC_1 (struct mlx5_flow_namespace*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (struct mlx5_flow_steering*,int ) ;
 struct mlx5_flow_namespace* FUNC_4 (struct mlx5_flow_namespace*,int ) ;
 struct mlx5_flow_namespace* FUNC_5 (struct mlx5_flow_namespace*,int,int) ;
 struct mlx5_flow_namespace* FUNC_6 (struct mlx5_flow_namespace*,int ,int) ;
 int FUNC_7 (struct mlx5_flow_namespace**) ;
 struct mlx5_flow_namespace** FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct mlx5_flow_steering *VAR_9)
{
 struct mlx5_flow_namespace *VAR_10;
 struct fs_prio *VAR_11;
 struct fs_prio *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_9->fdb_root_ns = FUNC_3(VAR_9, VAR_6);
 if (!VAR_9->fdb_root_ns)
  return -VAR_0;

 VAR_9->fdb_sub_ns = FUNC_8(sizeof(VAR_9->fdb_sub_ns) *
           (VAR_3 + 1), VAR_7);
 if (!VAR_9->fdb_sub_ns)
  return -VAR_0;

 VAR_11 = FUNC_5(&VAR_9->fdb_root_ns->ns, VAR_1,
      1);
 if (FUNC_0(VAR_11)) {
  VAR_16 = FUNC_1(VAR_11);
  goto out_err;
 }

 VAR_13 = 2 * VAR_4 * (VAR_3 + 1);
 VAR_11 = FUNC_6(&VAR_9->fdb_root_ns->ns,
       VAR_2,
       VAR_13);
 if (FUNC_0(VAR_11)) {
  VAR_16 = FUNC_1(VAR_11);
  goto out_err;
 }

 for (VAR_14 = 0; VAR_14 <= VAR_3; VAR_14++) {
  VAR_10 = FUNC_4(VAR_11, VAR_8);
  if (FUNC_0(VAR_10)) {
   VAR_16 = FUNC_1(VAR_10);
   goto out_err;
  }

  for (VAR_15 = 0; VAR_15 < VAR_4 * (VAR_14 + 1); VAR_15++) {
   VAR_12 = FUNC_5(VAR_10, VAR_15, 2);
   if (FUNC_0(VAR_12)) {
    VAR_16 = FUNC_1(VAR_12);
    goto out_err;
   }
  }

  VAR_9->fdb_sub_ns[VAR_14] = VAR_10;
 }

 VAR_11 = FUNC_5(&VAR_9->fdb_root_ns->ns, VAR_5, 1);
 if (FUNC_0(VAR_11)) {
  VAR_16 = FUNC_1(VAR_11);
  goto out_err;
 }

 FUNC_9(VAR_9->fdb_root_ns);
 return 0;

out_err:
 FUNC_2(VAR_9->fdb_root_ns);
 FUNC_7(VAR_9->fdb_sub_ns);
 VAR_9->fdb_sub_ns = ((void*)0);
 VAR_9->fdb_root_ns = ((void*)0);
 return VAR_16;
}
