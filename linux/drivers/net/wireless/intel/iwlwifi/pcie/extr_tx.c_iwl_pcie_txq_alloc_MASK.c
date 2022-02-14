
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iwl_txq {int n_window; TYPE_3__* entries; int dma_addr; void* tfds; void* first_tb_bufs; int first_tb_dma; struct iwl_trans_pcie* trans_pcie; int stuck_timer; } ;
struct iwl_trans_pcie {size_t tfd_size; } ;
struct iwl_trans {int dev; TYPE_2__* trans_cfg; } ;
struct iwl_pcie_txq_entry {int dummy; } ;
struct iwl_device_cmd {int dummy; } ;
struct TYPE_8__ {struct TYPE_8__* cmd; } ;
struct TYPE_7__ {scalar_t__ use_tfh; TYPE_1__* base_params; } ;
struct TYPE_6__ {size_t max_tfd_queue_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int ,size_t,int *,int ) ;
 int FUNC_4 (int ,size_t,void*,int ) ;
 int VAR_4 ;
 TYPE_3__* FUNC_5 (int,int,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int ,int ) ;

int FUNC_9(struct iwl_trans *VAR_5, struct iwl_txq *VAR_6,
         int VAR_7, bool VAR_8)
{
 struct iwl_trans_pcie *VAR_9 = FUNC_1(VAR_5);
 size_t VAR_10 = VAR_9->tfd_size *
  VAR_5->trans_cfg->base_params->max_tfd_queue_size;
 size_t VAR_11;
 int VAR_12;

 if (FUNC_2(VAR_6->entries || VAR_6->tfds))
  return -VAR_0;

 if (VAR_5->trans_cfg->use_tfh)
  VAR_10 = VAR_9->tfd_size * VAR_7;

 FUNC_8(&VAR_6->stuck_timer, VAR_4, 0);
 VAR_6->trans_pcie = VAR_9;

 VAR_6->n_window = VAR_7;

 VAR_6->entries = FUNC_5(VAR_7,
          sizeof(struct iwl_pcie_txq_entry),
          VAR_2);

 if (!VAR_6->entries)
  goto error;

 if (VAR_8)
  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
   VAR_6->entries[VAR_12].cmd =
    FUNC_7(sizeof(struct iwl_device_cmd),
     VAR_2);
   if (!VAR_6->entries[VAR_12].cmd)
    goto error;
  }



 VAR_6->tfds = FUNC_3(VAR_5->dev, VAR_10,
           &VAR_6->dma_addr, VAR_2);
 if (!VAR_6->tfds)
  goto error;

 FUNC_0(VAR_3 != sizeof(*VAR_6->first_tb_bufs));

 VAR_11 = sizeof(*VAR_6->first_tb_bufs) * VAR_7;

 VAR_6->first_tb_bufs = FUNC_3(VAR_5->dev, VAR_11,
           &VAR_6->first_tb_dma,
           VAR_2);
 if (!VAR_6->first_tb_bufs)
  goto err_free_tfds;

 return 0;
err_free_tfds:
 FUNC_4(VAR_5->dev, VAR_10, VAR_6->tfds, VAR_6->dma_addr);
error:
 if (VAR_6->entries && VAR_8)
  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
   FUNC_6(VAR_6->entries[VAR_12].cmd);
 FUNC_6(VAR_6->entries);
 VAR_6->entries = ((void*)0);

 return -VAR_1;

}
