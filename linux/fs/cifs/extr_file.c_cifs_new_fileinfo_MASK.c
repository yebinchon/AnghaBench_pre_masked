
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct file {int f_mode; struct cifsFileInfo* private_data; int f_flags; } ;
struct dentry {int dummy; } ;
struct cifs_tcon {int open_file_lock; int num_local_opens; int openFileList; TYPE_1__* ses; } ;
struct cifs_fid_locks {int llist; struct cifsFileInfo* cfile; int locks; } ;
struct cifs_fid {int purge_cache; TYPE_2__* pending_open; } ;
struct cifsInodeInfo {int open_file_lock; int openFileList; int lock_sem; int llist; } ;
struct cifsFileInfo {int count; int invalidHandle; int flist; int tlist; int file_info_lock; int fh_mutex; int oplock_break; int tlink; int f_flags; int dentry; int uid; int pid; struct cifs_fid_locks* llist; } ;
struct TCP_Server_Info {TYPE_3__* ops; } ;
typedef scalar_t__ __u32 ;
struct TYPE_8__ {int tgid; } ;
struct TYPE_7__ {int (* set_fid ) (struct cifsFileInfo*,struct cifs_fid*,scalar_t__) ;scalar_t__ (* is_read_op ) (scalar_t__) ;} ;
struct TYPE_6__ {scalar_t__ oplock; int olist; } ;
struct TYPE_5__ {struct TCP_Server_Info* server; } ;


 struct cifsInodeInfo* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tcon_link*) ;
 scalar_t__ FUNC_7 (struct cifsInodeInfo*) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct inode*) ;
 TYPE_4__* VAR_5 ;
 int FUNC_10 () ;
 struct inode* FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct dentry*) ;
 struct dentry* FUNC_13 (struct file*) ;
 int FUNC_14 (struct cifsFileInfo*) ;
 void* FUNC_15 (int,int ) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 int FUNC_24 (struct cifsFileInfo*,struct cifs_fid*,scalar_t__) ;
 struct cifs_tcon* FUNC_25 (struct tcon_link*) ;
 int FUNC_26 (int *) ;

struct cifsFileInfo *
FUNC_27(struct cifs_fid *VAR_6, struct file *VAR_7,
    struct tcon_link *VAR_8, __u32 VAR_9)
{
 struct dentry *VAR_10 = FUNC_13(VAR_7);
 struct inode *VAR_11 = FUNC_11(VAR_10);
 struct cifsInodeInfo *VAR_12 = FUNC_0(VAR_11);
 struct cifsFileInfo *VAR_13;
 struct cifs_fid_locks *VAR_14;
 struct cifs_tcon *VAR_15 = FUNC_25(VAR_8);
 struct TCP_Server_Info *VAR_16 = VAR_15->ses->server;

 VAR_13 = FUNC_15(sizeof(struct cifsFileInfo), VAR_3);
 if (VAR_13 == ((void*)0))
  return VAR_13;

 VAR_14 = FUNC_15(sizeof(struct cifs_fid_locks), VAR_3);
 if (!VAR_14) {
  FUNC_14(VAR_13);
  return ((void*)0);
 }

 FUNC_1(&VAR_14->locks);
 VAR_14->cfile = VAR_13;
 VAR_13->llist = VAR_14;
 FUNC_5(&VAR_12->lock_sem);
 FUNC_16(&VAR_14->llist, &VAR_12->llist);
 FUNC_26(&VAR_12->lock_sem);

 VAR_13->count = 1;
 VAR_13->pid = VAR_5->tgid;
 VAR_13->uid = FUNC_10();
 VAR_13->dentry = FUNC_12(VAR_10);
 VAR_13->f_flags = VAR_7->f_flags;
 VAR_13->invalidHandle = 0;
 VAR_13->tlink = FUNC_6(VAR_8);
 FUNC_2(&VAR_13->oplock_break, VAR_4);
 FUNC_19(&VAR_13->fh_mutex);
 FUNC_21(&VAR_13->file_info_lock);

 FUNC_8(VAR_11->i_sb);





 if (VAR_16->ops->is_read_op(VAR_9) && FUNC_7(VAR_12)) {
  FUNC_4(VAR_2, "Reset oplock val from read to None due to mand locks\n");
  VAR_9 = 0;
 }

 FUNC_20(&VAR_15->open_file_lock);
 if (VAR_6->pending_open->oplock != VAR_0 && VAR_9)
  VAR_9 = VAR_6->pending_open->oplock;
 FUNC_18(&VAR_6->pending_open->olist);

 VAR_6->purge_cache = 0;
 VAR_16->ops->set_fid(VAR_13, VAR_6, VAR_9);

 FUNC_16(&VAR_13->tlist, &VAR_15->openFileList);
 FUNC_3(&VAR_15->num_local_opens);


 FUNC_20(&VAR_12->open_file_lock);
 if (VAR_7->f_mode & VAR_1)
  FUNC_16(&VAR_13->flist, &VAR_12->openFileList);
 else
  FUNC_17(&VAR_13->flist, &VAR_12->openFileList);
 FUNC_22(&VAR_12->open_file_lock);
 FUNC_22(&VAR_15->open_file_lock);

 if (VAR_6->purge_cache)
  FUNC_9(VAR_11);

 VAR_7->private_data = VAR_13;
 return VAR_13;
}
