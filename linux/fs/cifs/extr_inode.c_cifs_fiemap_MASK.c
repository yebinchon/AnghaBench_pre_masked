
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct inode {TYPE_4__* i_mapping; } ;
struct fiemap_extent_info {int dummy; } ;
struct cifs_tcon {TYPE_2__* ses; } ;
struct cifs_sb_info {int dummy; } ;
struct TYPE_6__ {int i_sb; } ;
struct cifsInodeInfo {TYPE_1__ vfs_inode; } ;
struct cifsFileInfo {int dummy; } ;
struct TCP_Server_Info {TYPE_3__* ops; } ;
struct TYPE_9__ {scalar_t__ nrpages; } ;
struct TYPE_8__ {int (* fiemap ) (struct cifs_tcon*,struct cifsFileInfo*,struct fiemap_extent_info*,int ,int ) ;} ;
struct TYPE_7__ {struct TCP_Server_Info* server; } ;


 int FUNC_0 (struct cifsInodeInfo*) ;
 struct cifsInodeInfo* FUNC_1 (struct inode*) ;
 struct cifs_sb_info* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct cifsFileInfo*) ;
 struct cifs_tcon* FUNC_4 (struct cifs_sb_info*) ;
 int FUNC_5 (TYPE_4__*) ;
 struct cifsFileInfo* FUNC_6 (struct cifsInodeInfo*,int) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (struct cifs_tcon*,struct cifsFileInfo*,struct fiemap_extent_info*,int ,int ) ;

int FUNC_9(struct inode *VAR_2, struct fiemap_extent_info *VAR_3, u64 VAR_4,
  u64 VAR_5)
{
 struct cifsInodeInfo *VAR_6 = FUNC_1(VAR_2);
 struct cifs_sb_info *VAR_7 = FUNC_2(VAR_6->vfs_inode.i_sb);
 struct cifs_tcon *VAR_8 = FUNC_4(VAR_7);
 struct TCP_Server_Info *VAR_9 = VAR_8->ses->server;
 struct cifsFileInfo *VAR_10;
 int VAR_11;





 if (!FUNC_0(FUNC_1(VAR_2)) && VAR_2->i_mapping &&
     VAR_2->i_mapping->nrpages != 0) {
  VAR_11 = FUNC_5(VAR_2->i_mapping);
  if (VAR_11) {
   FUNC_7(VAR_2->i_mapping, VAR_11);
   return VAR_11;
  }
 }

 VAR_10 = FUNC_6(VAR_6, 0);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 if (VAR_9->ops->fiemap) {
  VAR_11 = VAR_9->ops->fiemap(VAR_8, VAR_10, VAR_3, VAR_4, VAR_5);
  FUNC_3(VAR_10);
  return VAR_11;
 }

 FUNC_3(VAR_10);
 return -VAR_1;
}
