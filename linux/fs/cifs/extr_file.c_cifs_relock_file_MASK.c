
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
struct cifsInodeInfo {int lock_sem; scalar_t__ can_cache_brlcks; } ;
struct cifsFileInfo {int tlink; TYPE_4__* dentry; } ;
struct TYPE_10__ {TYPE_3__* server; } ;
struct TYPE_9__ {int d_sb; } ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {int (* push_mand_locks ) (struct cifsFileInfo*) ;} ;


 struct cifsInodeInfo* FUNC_0 (int ) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct cifsFileInfo*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct cifsFileInfo*) ;
 struct cifs_tcon* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct cifsFileInfo *VAR_3)
{
 struct cifs_sb_info *VAR_4 = FUNC_1(VAR_3->dentry->d_sb);
 struct cifsInodeInfo *VAR_5 = FUNC_0(FUNC_4(VAR_3->dentry));
 struct cifs_tcon *VAR_6 = FUNC_8(VAR_3->tlink);
 int VAR_7 = 0;

 FUNC_5(&VAR_5->lock_sem, VAR_2);
 if (VAR_5->can_cache_brlcks) {

  FUNC_9(&VAR_5->lock_sem);
  return VAR_7;
 }

 if (FUNC_2(VAR_6->ses) &&
     (VAR_1 & FUNC_6(VAR_6->fsUnixInfo.Capability)) &&
     ((VAR_4->mnt_cifs_flags & VAR_0) == 0))
  VAR_7 = FUNC_3(VAR_3);
 else
  VAR_7 = VAR_6->ses->server->ops->push_mand_locks(VAR_3);

 FUNC_9(&VAR_5->lock_sem);
 return VAR_7;
}
