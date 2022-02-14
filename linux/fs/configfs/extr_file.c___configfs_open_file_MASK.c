
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct TYPE_6__ {struct dentry* dentry; } ;
struct file {int f_mode; struct configfs_buffer* private_data; TYPE_1__ f_path; } ;
struct dentry {int d_parent; } ;
struct configfs_fragment {int frag_sem; int frag_dead; } ;
struct configfs_buffer {int needs_read_fill; int read_in_progress; int write_in_progress; TYPE_3__* item; int owner; int mutex; TYPE_4__* bin_attr; int ops; struct configfs_attribute* attr; int cb_max_size; } ;
struct configfs_attribute {int show; int store; int ca_owner; } ;
struct TYPE_9__ {int read; int write; int cb_max_size; } ;
struct TYPE_8__ {TYPE_2__* ci_type; } ;
struct TYPE_7__ {int ct_item_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct configfs_buffer*) ;
 struct configfs_buffer* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 struct configfs_attribute* FUNC_6 (struct dentry*) ;
 TYPE_4__* FUNC_7 (struct dentry*) ;
 struct configfs_fragment* FUNC_8 (struct file*) ;
 TYPE_3__* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_12, struct file *VAR_13, int VAR_14)
{
 struct dentry *VAR_15 = VAR_13->f_path.dentry;
 struct configfs_fragment *VAR_16 = FUNC_8(VAR_13);
 struct configfs_attribute *VAR_17;
 struct configfs_buffer *VAR_18;
 int VAR_19;

 VAR_19 = -VAR_6;
 VAR_18 = FUNC_3(sizeof(struct configfs_buffer), VAR_9);
 if (!VAR_18)
  goto out;

 VAR_19 = -VAR_5;
 FUNC_1(&VAR_16->frag_sem);
 if (FUNC_11(VAR_16->frag_dead))
  goto out_free_buffer;

 VAR_19 = -VAR_3;
 VAR_18->item = FUNC_9(VAR_15->d_parent);
 if (!VAR_18->item)
  goto out_free_buffer;

 VAR_17 = FUNC_6(VAR_15);
 if (!VAR_17)
  goto out_put_item;

 if (VAR_14 & VAR_1) {
  VAR_18->bin_attr = FUNC_7(VAR_15);
  VAR_18->cb_max_size = VAR_18->bin_attr->cb_max_size;
 } else {
  VAR_18->attr = VAR_17;
 }

 VAR_18->owner = VAR_17->ca_owner;

 VAR_19 = -VAR_4;
 if (!FUNC_10(VAR_18->owner))
  goto out_put_item;

 VAR_19 = -VAR_2;
 if (!VAR_18->item->ci_type)
  goto out_put_module;

 VAR_18->ops = VAR_18->item->ci_type->ct_item_ops;





 if (VAR_13->f_mode & VAR_8) {
  if (!(VAR_12->i_mode & VAR_11))
   goto out_put_module;
  if ((VAR_14 & VAR_0) && !VAR_17->store)
   goto out_put_module;
  if ((VAR_14 & VAR_1) && !VAR_18->bin_attr->write)
   goto out_put_module;
 }





 if (VAR_13->f_mode & VAR_7) {
  if (!(VAR_12->i_mode & VAR_10))
   goto out_put_module;
  if ((VAR_14 & VAR_0) && !VAR_17->show)
   goto out_put_module;
  if ((VAR_14 & VAR_1) && !VAR_18->bin_attr->read)
   goto out_put_module;
 }

 FUNC_5(&VAR_18->mutex);
 VAR_18->needs_read_fill = 1;
 VAR_18->read_in_progress = 0;
 VAR_18->write_in_progress = 0;
 VAR_13->private_data = VAR_18;
 FUNC_12(&VAR_16->frag_sem);
 return 0;

out_put_module:
 FUNC_4(VAR_18->owner);
out_put_item:
 FUNC_0(VAR_18->item);
out_free_buffer:
 FUNC_12(&VAR_16->frag_sem);
 FUNC_2(VAR_18);
out:
 return VAR_19;
}
