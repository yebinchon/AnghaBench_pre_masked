
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_target {int tgt_ready; struct htc_endpoint* endpoint; struct device* dev; void* hif_dev; struct ath9k_htc_hif* hif; int cmd_wait; int target_wait; } ;
struct htc_endpoint {int dl_pipeid; int ul_pipeid; } ;
struct device {int dummy; } ;
struct ath9k_htc_hif {int control_dl_pipe; int control_ul_pipe; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct htc_target* FUNC_2 (int,int ) ;

struct htc_target *FUNC_3(void *VAR_2,
          struct ath9k_htc_hif *VAR_3,
          struct device *VAR_4)
{
 struct htc_endpoint *VAR_5;
 struct htc_target *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct htc_target), VAR_1);
 if (!VAR_6)
  return ((void*)0);

 FUNC_1(&VAR_6->target_wait);
 FUNC_1(&VAR_6->cmd_wait);

 VAR_6->hif = VAR_3;
 VAR_6->hif_dev = VAR_2;
 VAR_6->dev = VAR_4;


 VAR_5 = &VAR_6->endpoint[VAR_0];
 VAR_5->ul_pipeid = VAR_3->control_ul_pipe;
 VAR_5->dl_pipeid = VAR_3->control_dl_pipe;

 FUNC_0(&VAR_6->tgt_ready, 0);

 return VAR_6;
}
