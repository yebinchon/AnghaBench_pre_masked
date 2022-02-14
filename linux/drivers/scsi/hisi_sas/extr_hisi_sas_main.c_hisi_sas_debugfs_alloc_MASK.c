
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hisi_sas_itct {int dummy; } ;
struct hisi_sas_iost_itct_cache {int dummy; } ;
struct hisi_sas_iost {int dummy; } ;
struct hisi_sas_hw {int complete_hdr_size; TYPE_2__** debugfs_reg_array; TYPE_1__* debugfs_reg_port; } ;
struct hisi_sas_cmd_hdr {int dummy; } ;
struct hisi_hba {int n_phy; int queue_count; void* debugfs_itct; void* debugfs_itct_cache; void* debugfs_iost_cache; void* debugfs_iost; void** debugfs_cmd_hdr; void** debugfs_complete_hdr; void** debugfs_regs; void** debugfs_port_reg; int debugfs_dir; int debugfs_dump_dentry; struct device* dev; struct hisi_sas_hw* hw; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int count; } ;
struct TYPE_3__ {int count; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ) ;
 void* FUNC_1 (struct device*,size_t,int ) ;
 int FUNC_2 (struct hisi_hba*) ;

__attribute__((used)) static int FUNC_3(struct hisi_hba *VAR_9)
{
 const struct hisi_sas_hw *VAR_10 = VAR_9->hw;
 struct device *VAR_11 = VAR_9->dev;
 int VAR_12, VAR_13, VAR_14;
 size_t VAR_15;

 VAR_9->debugfs_dump_dentry =
   FUNC_0("dump", VAR_9->debugfs_dir);

 VAR_15 = VAR_10->debugfs_reg_array[VAR_1]->count * 4;
 VAR_9->debugfs_regs[VAR_1] =
    FUNC_1(VAR_11, VAR_15, VAR_4);

 if (!VAR_9->debugfs_regs[VAR_1])
  goto fail;

 VAR_15 = VAR_10->debugfs_reg_port->count * 4;
 for (VAR_12 = 0; VAR_12 < VAR_9->n_phy; VAR_12++) {
  VAR_9->debugfs_port_reg[VAR_12] =
   FUNC_1(VAR_11, VAR_15, VAR_4);

  if (!VAR_9->debugfs_port_reg[VAR_12])
   goto fail;
 }

 VAR_15 = VAR_10->debugfs_reg_array[VAR_0]->count * 4;
 VAR_9->debugfs_regs[VAR_0] =
  FUNC_1(VAR_11, VAR_15, VAR_4);

 if (!VAR_9->debugfs_regs[VAR_0])
  goto fail;

 VAR_15 = VAR_10->debugfs_reg_array[VAR_2]->count * 4;
 VAR_9->debugfs_regs[VAR_2] =
  FUNC_1(VAR_11, VAR_15, VAR_4);

 if (!VAR_9->debugfs_regs[VAR_2])
  goto fail;

 VAR_15 = VAR_10->complete_hdr_size * VAR_8;
 for (VAR_13 = 0; VAR_13 < VAR_9->queue_count; VAR_13++) {
  VAR_9->debugfs_complete_hdr[VAR_13] =
   FUNC_1(VAR_11, VAR_15, VAR_4);

  if (!VAR_9->debugfs_complete_hdr[VAR_13])
   goto fail;
 }

 VAR_15 = sizeof(struct hisi_sas_cmd_hdr) * VAR_8;
 for (VAR_14 = 0; VAR_14 < VAR_9->queue_count; VAR_14++) {
  VAR_9->debugfs_cmd_hdr[VAR_14] =
   FUNC_1(VAR_11, VAR_15, VAR_4);

  if (!VAR_9->debugfs_cmd_hdr[VAR_14])
   goto fail;
 }

 VAR_15 = VAR_6 * sizeof(struct hisi_sas_iost);

 VAR_9->debugfs_iost = FUNC_1(VAR_11, VAR_15, VAR_4);
 if (!VAR_9->debugfs_iost)
  goto fail;

 VAR_15 = VAR_5 *
      sizeof(struct hisi_sas_iost_itct_cache);

 VAR_9->debugfs_iost_cache = FUNC_1(VAR_11, VAR_15, VAR_4);
 if (!VAR_9->debugfs_iost_cache)
  goto fail;

 VAR_15 = VAR_5 *
      sizeof(struct hisi_sas_iost_itct_cache);

 VAR_9->debugfs_itct_cache = FUNC_1(VAR_11, VAR_15, VAR_4);
 if (!VAR_9->debugfs_itct_cache)
  goto fail;


 VAR_15 = VAR_7 * sizeof(struct hisi_sas_itct);

 VAR_9->debugfs_itct = FUNC_1(VAR_11, VAR_15, VAR_4);
 if (!VAR_9->debugfs_itct)
  goto fail;

 return 0;
fail:
 FUNC_2(VAR_9);
 return -VAR_3;
}
