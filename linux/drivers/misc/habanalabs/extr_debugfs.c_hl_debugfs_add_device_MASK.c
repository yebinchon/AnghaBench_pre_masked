
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hl_debugfs_entry {struct hl_debugfs_entry* dev_entry; TYPE_1__* info_ent; struct dentry* dent; int root; struct hl_debugfs_entry* entry_arr; int i2c_reg; int i2c_addr; int i2c_bus; int addr; int ctx_mem_hash_spinlock; int userptr_spinlock; int cs_job_spinlock; int cs_spinlock; int cb_spinlock; int file_mutex; int ctx_mem_hash_list; int userptr_list; int cs_job_list; int cs_list; int cb_list; int file_list; struct hl_device* hdev; } ;
struct hl_device {int dev; struct hl_debugfs_entry hl_debugfs; } ;
struct hl_dbg_device_entry {struct hl_dbg_device_entry* dev_entry; TYPE_1__* info_ent; struct dentry* dent; int root; struct hl_dbg_device_entry* entry_arr; int i2c_reg; int i2c_addr; int i2c_bus; int addr; int ctx_mem_hash_spinlock; int userptr_spinlock; int cs_job_spinlock; int cs_spinlock; int cb_spinlock; int file_mutex; int ctx_mem_hash_list; int userptr_list; int cs_job_list; int cs_list; int cb_list; int file_list; struct hl_device* hdev; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 struct dentry* FUNC_3 (char*,int,int ,struct hl_debugfs_entry*,int *) ;
 int FUNC_4 (char*,int,int ,int *) ;
 int FUNC_5 (char*,int,int ,int *) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct hl_debugfs_entry* FUNC_7 (int,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct hl_device *VAR_11)
{
 struct hl_dbg_device_entry *VAR_12 = &VAR_11->hl_debugfs;
 int VAR_13 = FUNC_0(VAR_4);
 struct hl_debugfs_entry *VAR_14;
 struct dentry *VAR_15;
 int VAR_16;

 VAR_12->hdev = VAR_11;
 VAR_12->entry_arr = FUNC_7(VAR_13,
     sizeof(struct hl_debugfs_entry),
     VAR_0);
 if (!VAR_12->entry_arr)
  return;

 FUNC_1(&VAR_12->file_list);
 FUNC_1(&VAR_12->cb_list);
 FUNC_1(&VAR_12->cs_list);
 FUNC_1(&VAR_12->cs_job_list);
 FUNC_1(&VAR_12->userptr_list);
 FUNC_1(&VAR_12->ctx_mem_hash_list);
 FUNC_8(&VAR_12->file_mutex);
 FUNC_9(&VAR_12->cb_spinlock);
 FUNC_9(&VAR_12->cs_spinlock);
 FUNC_9(&VAR_12->cs_job_spinlock);
 FUNC_9(&VAR_12->userptr_spinlock);
 FUNC_9(&VAR_12->ctx_mem_hash_spinlock);

 VAR_12->root = FUNC_2(FUNC_6(VAR_11->dev),
      VAR_2);

 FUNC_5("addr",
    0644,
    VAR_12->root,
    &VAR_12->addr);

 FUNC_3("data32",
    0644,
    VAR_12->root,
    VAR_12,
    &VAR_1);

 FUNC_3("set_power_state",
    0200,
    VAR_12->root,
    VAR_12,
    &VAR_10);

 FUNC_4("i2c_bus",
    0644,
    VAR_12->root,
    &VAR_12->i2c_bus);

 FUNC_4("i2c_addr",
    0644,
    VAR_12->root,
    &VAR_12->i2c_addr);

 FUNC_4("i2c_reg",
    0644,
    VAR_12->root,
    &VAR_12->i2c_reg);

 FUNC_3("i2c_data",
    0644,
    VAR_12->root,
    VAR_12,
    &VAR_6);

 FUNC_3("led0",
    0200,
    VAR_12->root,
    VAR_12,
    &VAR_7);

 FUNC_3("led1",
    0200,
    VAR_12->root,
    VAR_12,
    &VAR_8);

 FUNC_3("led2",
    0200,
    VAR_12->root,
    VAR_12,
    &VAR_9);

 FUNC_3("device",
    0200,
    VAR_12->root,
    VAR_12,
    &VAR_5);

 for (VAR_16 = 0, VAR_14 = VAR_12->entry_arr ; VAR_16 < VAR_13 ; VAR_16++, VAR_14++) {

  VAR_15 = FUNC_3(VAR_4[VAR_16].name,
     0444,
     VAR_12->root,
     VAR_14,
     &VAR_3);
  VAR_14->dent = VAR_15;
  VAR_14->info_ent = &VAR_4[VAR_16];
  VAR_14->dev_entry = VAR_12;
 }
}
