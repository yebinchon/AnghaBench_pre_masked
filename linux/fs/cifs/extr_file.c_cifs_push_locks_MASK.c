
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Capability; } ;
struct cifs_tcon {TYPE_5__* ses; TYPE_1__ fsUnixInfo; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct cifsInodeInfo {int can_cache_brlcks; int lock_sem; } ;
struct cifsFileInfo {int tlink; TYPE_4__* dentry; } ;
struct TYPE_10__ {TYPE_3__* server; } ;
struct TYPE_9__ {int d_sb; } ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {int (* push_mand_locks ) (struct cifsFileInfo*) ;} ;


 struct cifsInodeInfo* FUNC_0 (int ) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cifsFileInfo*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct cifsFileInfo*) ;
 struct cifs_tcon* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct cifsFileInfo *VAR_2)
{
 struct cifs_sb_info *VAR_3 = FUNC_1(VAR_2->dentry->d_sb);
 struct cifsInodeInfo *VAR_4 = FUNC_0(FUNC_5(VAR_2->dentry));
 struct cifs_tcon *VAR_5 = FUNC_8(VAR_2->tlink);
 int VAR_6 = 0;


 FUNC_3(&VAR_4->lock_sem);
 if (!VAR_4->can_cache_brlcks) {
  FUNC_9(&VAR_4->lock_sem);
  return VAR_6;
 }

 if (FUNC_2(VAR_5->ses) &&
     (VAR_1 & FUNC_6(VAR_5->fsUnixInfo.Capability)) &&
     ((VAR_3->mnt_cifs_flags & VAR_0) == 0))
  VAR_6 = FUNC_4(VAR_2);
 else
  VAR_6 = VAR_5->ses->server->ops->push_mand_locks(VAR_2);

 VAR_4->can_cache_brlcks = 0;
 FUNC_9(&VAR_4->lock_sem);
 return VAR_6;
}
