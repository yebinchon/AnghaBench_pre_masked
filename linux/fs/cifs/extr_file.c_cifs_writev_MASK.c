
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {TYPE_1__* f_mapping; scalar_t__ private_data; } ;
struct cifsInodeInfo {int lock_sem; } ;
struct cifsFileInfo {int tlink; } ;
struct TCP_Server_Info {TYPE_3__* vals; } ;
typedef int ssize_t ;
struct TYPE_8__ {TYPE_2__* ses; } ;
struct TYPE_7__ {int exclusive_lock_type; } ;
struct TYPE_6__ {struct TCP_Server_Info* server; } ;
struct TYPE_5__ {struct inode* host; } ;


 struct cifsInodeInfo* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct kiocb*,struct iov_iter*) ;
 int FUNC_2 (struct cifsFileInfo*,int ,int ,int ,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kiocb*,struct iov_iter*) ;
 int FUNC_5 (struct kiocb*,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct iov_iter*) ;
 TYPE_4__* FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static ssize_t
FUNC_11(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct file *VAR_4 = VAR_2->ki_filp;
 struct cifsFileInfo *VAR_5 = (struct cifsFileInfo *)VAR_4->private_data;
 struct inode *VAR_6 = VAR_4->f_mapping->host;
 struct cifsInodeInfo *VAR_7 = FUNC_0(VAR_6);
 struct TCP_Server_Info *VAR_8 = FUNC_9(VAR_5->tlink)->ses->server;
 ssize_t VAR_9;

 FUNC_6(VAR_6);




 FUNC_3(&VAR_7->lock_sem);

 VAR_9 = FUNC_4(VAR_2, VAR_3);
 if (VAR_9 <= 0)
  goto out;

 if (!FUNC_2(VAR_5, VAR_2->ki_pos, FUNC_8(VAR_3),
         VAR_8->vals->exclusive_lock_type, 0,
         ((void*)0), VAR_0))
  VAR_9 = FUNC_1(VAR_2, VAR_3);
 else
  VAR_9 = -VAR_1;
out:
 FUNC_10(&VAR_7->lock_sem);
 FUNC_7(VAR_6);

 if (VAR_9 > 0)
  VAR_9 = FUNC_5(VAR_2, VAR_9);
 return VAR_9;
}
