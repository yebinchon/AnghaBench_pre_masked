
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fw_tracer {int work_queue; struct mlx5_core_dev* dev; int handle_traces_work; int read_fw_strings_work; int ownership_change_work; int ready_strings_list; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 struct mlx5_fw_tracer* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mlx5_fw_tracer*) ;
 struct mlx5_fw_tracer* FUNC_7 (int,int ) ;
 int FUNC_8 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_9 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_10 (struct mlx5_fw_tracer*) ;
 int FUNC_11 (struct mlx5_fw_tracer*) ;
 int FUNC_12 (struct mlx5_fw_tracer*) ;
 int VAR_2 ;
 int FUNC_13 (struct mlx5_fw_tracer*) ;
 int VAR_3 ;
 int FUNC_14 (struct mlx5_fw_tracer*) ;
 int VAR_4 ;
 int VAR_5 ;

struct mlx5_fw_tracer *FUNC_15(struct mlx5_core_dev *VAR_6)
{
 struct mlx5_fw_tracer *VAR_7 = ((void*)0);
 int VAR_8;

 if (!FUNC_3(VAR_6, VAR_5)) {
  FUNC_8(VAR_6, "FWTracer: Tracer capability not present\n");
  return ((void*)0);
 }

 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->work_queue = FUNC_4("mlx5_fw_tracer");
 if (!VAR_7->work_queue) {
  VAR_8 = -VAR_0;
  goto free_tracer;
 }

 VAR_7->dev = VAR_6;

 FUNC_1(&VAR_7->ready_strings_list);
 FUNC_2(&VAR_7->ownership_change_work, VAR_3);
 FUNC_2(&VAR_7->read_fw_strings_work, VAR_4);
 FUNC_2(&VAR_7->handle_traces_work, VAR_2);


 VAR_8 = FUNC_14(VAR_7);
 if (VAR_8) {
  FUNC_8(VAR_6, "FWTracer: Failed to query capabilities %d\n", VAR_8);
  goto destroy_workqueue;
 }

 VAR_8 = FUNC_11(VAR_7);
 if (VAR_8) {
  FUNC_9(VAR_6, "FWTracer: Create log buffer failed %d\n", VAR_8);
  goto destroy_workqueue;
 }

 VAR_8 = FUNC_10(VAR_7);
 if (VAR_8) {
  FUNC_9(VAR_6, "FWTracer: Allocate strings database failed %d\n", VAR_8);
  goto free_log_buf;
 }

 FUNC_13(VAR_7);
 FUNC_8(VAR_6, "FWTracer: Tracer created\n");

 return VAR_7;

free_log_buf:
 FUNC_12(VAR_7);
destroy_workqueue:
 VAR_7->dev = ((void*)0);
 FUNC_5(VAR_7->work_queue);
free_tracer:
 FUNC_6(VAR_7);
 return FUNC_0(VAR_8);
}
