
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int dummy; } ;
struct super_block {int dummy; } ;
struct p9_stat_dotl {int qid; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;


 struct inode* FUNC_0 (struct p9_stat_dotl*) ;
 scalar_t__ FUNC_1 (struct p9_stat_dotl*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct p9_stat_dotl*) ;
 struct p9_stat_dotl* FUNC_3 (struct p9_fid*,int) ;
 struct inode* FUNC_4 (struct super_block*,int *,struct p9_fid*,struct p9_stat_dotl*,int) ;

struct inode *
FUNC_5(struct v9fs_session_info *VAR_2, struct p9_fid *VAR_3,
    struct super_block *VAR_4, int VAR_5)
{
 struct p9_stat_dotl *VAR_6;
 struct inode *VAR_7 = ((void*)0);

 VAR_6 = FUNC_3(VAR_3, VAR_0 | VAR_1);
 if (FUNC_1(VAR_6))
  return FUNC_0(VAR_6);

 VAR_7 = FUNC_4(VAR_4, &VAR_6->qid, VAR_3, VAR_6, VAR_5);
 FUNC_2(VAR_6);
 return VAR_7;
}
