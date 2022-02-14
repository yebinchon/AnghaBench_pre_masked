
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int dummy; } ;
struct super_block {int dummy; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;


 struct inode* FUNC_0 (struct v9fs_session_info*,struct p9_fid*,struct super_block*,int) ;
 struct inode* FUNC_1 (struct v9fs_session_info*,struct p9_fid*,struct super_block*,int) ;
 scalar_t__ FUNC_2 (struct v9fs_session_info*) ;

__attribute__((used)) static inline struct inode *
FUNC_3(struct v9fs_session_info *VAR_0, struct p9_fid *VAR_1,
       struct super_block *VAR_2)
{
 if (FUNC_2(VAR_0))
  return FUNC_1(VAR_0, VAR_1, VAR_2, 1);
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2, 1);
}
