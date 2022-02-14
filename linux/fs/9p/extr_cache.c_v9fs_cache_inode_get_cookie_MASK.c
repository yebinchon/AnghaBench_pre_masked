
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {int fscache; } ;
struct TYPE_2__ {int version; int path; } ;
struct v9fs_inode {scalar_t__ fscache; int vfs_inode; TYPE_1__ qid; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct v9fs_inode* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int,int *,int,struct v9fs_inode*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,struct inode*,scalar_t__) ;
 int VAR_1 ;
 struct v9fs_session_info* FUNC_5 (struct inode*) ;

void FUNC_6(struct inode *VAR_2)
{
 struct v9fs_inode *VAR_3;
 struct v9fs_session_info *VAR_4;

 if (!FUNC_0(VAR_2->i_mode))
  return;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3->fscache)
  return;

 VAR_4 = FUNC_5(VAR_2);
 VAR_3->fscache = FUNC_2(VAR_4->fscache,
        &VAR_1,
        &VAR_3->qid.path,
        sizeof(VAR_3->qid.path),
        &VAR_3->qid.version,
        sizeof(VAR_3->qid.version),
        VAR_3,
        FUNC_3(&VAR_3->vfs_inode),
        1);

 FUNC_4(VAR_0, "inode %p get cookie %p\n",
   VAR_2, VAR_3->fscache);
}
