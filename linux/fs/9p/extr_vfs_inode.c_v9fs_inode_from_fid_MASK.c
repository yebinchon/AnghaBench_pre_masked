
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int dummy; } ;
struct super_block {int dummy; } ;
struct p9_wstat {int qid; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;


 struct inode* FUNC_0 (struct p9_wstat*) ;
 scalar_t__ FUNC_1 (struct p9_wstat*) ;
 int FUNC_2 (struct p9_wstat*) ;
 struct p9_wstat* FUNC_3 (struct p9_fid*) ;
 int FUNC_4 (struct p9_wstat*) ;
 struct inode* FUNC_5 (struct super_block*,int *,struct p9_wstat*,int) ;

struct inode *
FUNC_6(struct v9fs_session_info *VAR_0, struct p9_fid *VAR_1,
      struct super_block *VAR_2, int VAR_3)
{
 struct p9_wstat *VAR_4;
 struct inode *VAR_5 = ((void*)0);

 VAR_4 = FUNC_3(VAR_1);
 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_4);

 VAR_5 = FUNC_5(VAR_2, &VAR_4->qid, VAR_4, VAR_3);
 FUNC_4(VAR_4);
 FUNC_2(VAR_4);
 return VAR_5;
}
