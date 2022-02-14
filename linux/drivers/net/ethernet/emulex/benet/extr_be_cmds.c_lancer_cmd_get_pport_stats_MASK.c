
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ reset_stats; int pport_num; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct lancer_cmd_req_pport_stats {TYPE_2__ cmd_params; int hdr; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; struct lancer_cmd_req_pport_stats* va; } ;
struct be_adapter {int stats_cmd_sent; int mcc_lock; int hba_port_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct be_adapter*,int ,int ) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (int *,int ,int ,int ,struct be_mcc_wrb*,struct be_dma_mem*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct be_mcc_wrb* FUNC_6 (struct be_adapter*) ;

int FUNC_7(struct be_adapter *VAR_4,
          struct be_dma_mem *VAR_5)
{
 struct be_mcc_wrb *VAR_6;
 struct lancer_cmd_req_pport_stats *VAR_7;
 int VAR_8 = 0;

 if (!FUNC_0(VAR_4, VAR_3,
       VAR_0))
  return -VAR_2;

 FUNC_4(&VAR_4->mcc_lock);

 VAR_6 = FUNC_6(VAR_4);
 if (!VAR_6) {
  VAR_8 = -VAR_1;
  goto err;
 }
 VAR_7 = VAR_5->va;

 FUNC_2(&VAR_7->hdr, VAR_0,
          VAR_3, VAR_5->size,
          VAR_6, VAR_5);

 VAR_7->cmd_params.params.pport_num = FUNC_3(VAR_4->hba_port_num);
 VAR_7->cmd_params.params.reset_stats = 0;

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8)
  goto err;

 VAR_4->stats_cmd_sent = 1;

err:
 FUNC_5(&VAR_4->mcc_lock);
 return VAR_8;
}
