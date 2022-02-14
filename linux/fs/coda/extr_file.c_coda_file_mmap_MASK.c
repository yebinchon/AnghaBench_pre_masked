
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {size_t vm_end; size_t vm_start; int vm_pgoff; TYPE_2__* vm_ops; struct file* vm_file; } ;
struct inode {int * i_mapping; int i_data; int i_sb; } ;
struct file {int f_mapping; TYPE_1__* f_op; } ;
struct TYPE_4__ {int close; int open; } ;
struct coda_vm_ops {TYPE_2__ vm_ops; int refcnt; struct file* coda_file; TYPE_2__* host_vm_ops; } ;
struct coda_inode_info {int c_lock; int c_mapcount; } ;
struct coda_file_info {int cfi_mapcount; int cfi_access_intent; struct file* cfi_container; } ;
typedef int loff_t ;
struct TYPE_3__ {int mmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct coda_inode_info* FUNC_0 (struct inode*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct file*,struct vm_area_struct*) ;
 struct coda_file_info* FUNC_4 (struct file*) ;
 int FUNC_5 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct inode* FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;
 struct file* FUNC_8 (struct file*) ;
 int FUNC_9 (struct coda_vm_ops*) ;
 struct coda_vm_ops* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int *,size_t,int,int ) ;

__attribute__((used)) static int
FUNC_14(struct file *VAR_9, struct vm_area_struct *VAR_10)
{
 struct inode *VAR_11 = FUNC_6(VAR_9);
 struct coda_file_info *VAR_12 = FUNC_4(VAR_9);
 struct file *VAR_13 = VAR_12->cfi_container;
 struct inode *VAR_14 = FUNC_6(VAR_13);
 struct coda_inode_info *VAR_15;
 struct coda_vm_ops *VAR_16;
 loff_t VAR_17;
 size_t VAR_18;
 int VAR_19;

 if (!VAR_13->f_op->mmap)
  return -VAR_3;

 if (FUNC_1(VAR_9 != VAR_10->vm_file))
  return -VAR_2;

 VAR_18 = VAR_10->vm_end - VAR_10->vm_start;
 VAR_17 = VAR_10->vm_pgoff * VAR_6;

 VAR_19 = FUNC_13(VAR_11->i_sb, FUNC_5(VAR_11),
      &VAR_12->cfi_access_intent,
      VAR_18, VAR_17, VAR_0);
 if (VAR_19)
  return VAR_19;

 VAR_16 = FUNC_10(sizeof(struct coda_vm_ops), VAR_5);
 if (!VAR_16)
  return -VAR_4;

 VAR_15 = FUNC_0(VAR_11);
 FUNC_11(&VAR_15->c_lock);
 VAR_9->f_mapping = VAR_13->f_mapping;
 if (VAR_11->i_mapping == &VAR_11->i_data)
  VAR_11->i_mapping = VAR_14->i_mapping;



 else if (VAR_11->i_mapping != VAR_14->i_mapping) {
  FUNC_12(&VAR_15->c_lock);
  FUNC_9(VAR_16);
  return -VAR_1;
 }


 VAR_15->c_mapcount++;
 VAR_12->cfi_mapcount++;
 FUNC_12(&VAR_15->c_lock);

 VAR_10->vm_file = FUNC_8(VAR_13);
 VAR_19 = FUNC_3(VAR_10->vm_file, VAR_10);

 if (VAR_19) {



  FUNC_7(VAR_13);
  FUNC_9(VAR_16);
 } else {

  VAR_16->host_vm_ops = VAR_10->vm_ops;
  if (VAR_10->vm_ops)
   VAR_16->vm_ops = *VAR_10->vm_ops;

  VAR_16->vm_ops.open = VAR_8;
  VAR_16->vm_ops.close = VAR_7;
  VAR_16->coda_file = VAR_9;
  FUNC_2(&VAR_16->refcnt, 1);

  VAR_10->vm_ops = &VAR_16->vm_ops;
 }
 return VAR_19;
}
