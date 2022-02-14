
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int i_ctime; int i_mtime; } ;
struct nfs_inode {TYPE_3__ vfs_inode; } ;
struct nfs_fscache_inode_auxdata {int change_attr; void* ctime; void* mtime; } ;
typedef int loff_t ;
typedef enum fscache_checkaux { ____Placeholder_fscache_checkaux } fscache_checkaux ;
typedef int auxdata ;
struct TYPE_9__ {TYPE_2__* nfs_client; } ;
struct TYPE_7__ {TYPE_1__* rpc_ops; } ;
struct TYPE_6__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (void const*,struct nfs_fscache_inode_auxdata*,int) ;
 int FUNC_3 (struct nfs_fscache_inode_auxdata*,int ,int) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static
enum fscache_checkaux FUNC_5(void *VAR_2,
        const void *VAR_3,
        uint16_t VAR_4,
        loff_t VAR_5)
{
 struct nfs_fscache_inode_auxdata VAR_6;
 struct nfs_inode *VAR_7 = VAR_2;

 if (VAR_4 != sizeof(VAR_6))
  return VAR_0;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.mtime = FUNC_4(VAR_7->vfs_inode.i_mtime);
 VAR_6.ctime = FUNC_4(VAR_7->vfs_inode.i_ctime);

 if (FUNC_0(&VAR_7->vfs_inode)->nfs_client->rpc_ops->version == 4)
  VAR_6.change_attr = FUNC_1(&VAR_7->vfs_inode);

 if (FUNC_2(VAR_3, &VAR_6, VAR_4) != 0)
  return VAR_0;

 return VAR_1;
}
