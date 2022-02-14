
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {int fscache; } ;
struct TYPE_2__ {int version; int path; } ;
struct v9fs_inode {int fscache_lock; struct fscache_cookie* fscache; int vfs_inode; TYPE_1__ qid; } ;
struct inode {int dummy; } ;
struct fscache_cookie {int dummy; } ;


 int VAR_0 ;
 struct v9fs_inode* FUNC_0 (struct inode*) ;
 struct fscache_cookie* FUNC_1 (int ,int *,int *,int,int *,int,struct v9fs_inode*,int ,int) ;
 int FUNC_2 (struct fscache_cookie*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,struct inode*,struct fscache_cookie*,struct fscache_cookie*) ;
 int VAR_1 ;
 struct v9fs_session_info* FUNC_7 (struct inode*) ;

void FUNC_8(struct inode *VAR_2)
{
 struct v9fs_inode *VAR_3 = FUNC_0(VAR_2);
 struct v9fs_session_info *VAR_4;
 struct fscache_cookie *VAR_5;

 if (!VAR_3->fscache)
  return;

 VAR_5 = VAR_3->fscache;

 FUNC_4(&VAR_3->fscache_lock);
 FUNC_2(VAR_3->fscache, ((void*)0), 1);

 VAR_4 = FUNC_7(VAR_2);
 VAR_3->fscache = FUNC_1(VAR_4->fscache,
        &VAR_1,
        &VAR_3->qid.path,
        sizeof(VAR_3->qid.path),
        &VAR_3->qid.version,
        sizeof(VAR_3->qid.version),
        VAR_3,
        FUNC_3(&VAR_3->vfs_inode),
        1);
 FUNC_6(VAR_0, "inode %p revalidating cookie old %p new %p\n",
   VAR_2, VAR_5, VAR_3->fscache);

 FUNC_5(&VAR_3->fscache_lock);
}
