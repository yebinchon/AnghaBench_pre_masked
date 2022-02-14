
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file_lock {int fl_type; int fl_pid; scalar_t__ fl_end; scalar_t__ fl_start; int fl_flags; } ;
struct cifsLockInfo {int type; int pid; scalar_t__ length; scalar_t__ offset; } ;
struct cifsInodeInfo {int lock_sem; int can_cache_brlcks; } ;
struct cifsFileInfo {int tlink; int dentry; } ;
struct TCP_Server_Info {TYPE_2__* vals; } ;
typedef int __u8 ;
typedef int __u64 ;
struct TYPE_6__ {TYPE_1__* ses; } ;
struct TYPE_5__ {int shared_lock_type; } ;
struct TYPE_4__ {struct TCP_Server_Info* server; } ;


 struct cifsInodeInfo* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cifsFileInfo*,int ,int ,int ,int ,struct cifsLockInfo**,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct cifsFileInfo *VAR_4, __u64 VAR_5, __u64 VAR_6,
        __u8 VAR_7, struct file_lock *VAR_8)
{
 int VAR_9 = 0;
 struct cifsLockInfo *VAR_10;
 struct cifsInodeInfo *VAR_11 = FUNC_0(FUNC_2(VAR_4->dentry));
 struct TCP_Server_Info *VAR_12 = FUNC_4(VAR_4->tlink)->ses->server;
 bool VAR_13;

 FUNC_3(&VAR_11->lock_sem);

 VAR_13 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8->fl_flags, &VAR_10,
     VAR_0);
 if (VAR_13) {
  VAR_8->fl_start = VAR_10->offset;
  VAR_8->fl_end = VAR_10->offset + VAR_10->length - 1;
  VAR_8->fl_pid = VAR_10->pid;
  if (VAR_10->type & VAR_12->vals->shared_lock_type)
   VAR_8->fl_type = VAR_1;
  else
   VAR_8->fl_type = VAR_3;
 } else if (!VAR_11->can_cache_brlcks)
  VAR_9 = 1;
 else
  VAR_8->fl_type = VAR_2;

 FUNC_5(&VAR_11->lock_sem);
 return VAR_9;
}
