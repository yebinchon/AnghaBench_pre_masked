
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {scalar_t__ del_cmtno; scalar_t__ xattr_cnt; } ;
struct ubifs_info {scalar_t__ cmt_no; int commit_sem; } ;
struct inode {scalar_t__ i_nlink; int i_ino; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ubifs_info*,int) ;
 int FUNC_2 (struct ubifs_info*,int ) ;
 struct ubifs_inode* FUNC_3 (struct inode const*) ;
 int FUNC_4 (struct ubifs_info*,struct inode const*) ;
 int FUNC_5 (struct ubifs_info*,int) ;
 int FUNC_6 (struct ubifs_info*,int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct ubifs_info *VAR_0, const struct inode *VAR_1)
{
 int VAR_2;
 struct ubifs_inode *VAR_3 = FUNC_3(VAR_1);

 FUNC_1(VAR_0, VAR_1->i_nlink == 0);

 if (VAR_3->xattr_cnt || VAR_3->del_cmtno != VAR_0->cmt_no)

  return FUNC_4(VAR_0, VAR_1);

 FUNC_0(&VAR_0->commit_sem);




 if (VAR_3->del_cmtno != VAR_0->cmt_no) {
  FUNC_7(&VAR_0->commit_sem);
  return FUNC_4(VAR_0, VAR_1);
 }

 VAR_2 = FUNC_6(VAR_0, VAR_1->i_ino);
 if (VAR_2)
  FUNC_5(VAR_0, VAR_2);
 else
  FUNC_2(VAR_0, VAR_1->i_ino);
 FUNC_7(&VAR_0->commit_sem);
 return VAR_2;
}
