
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_inode_info {scalar_t__ i_root; scalar_t__ i_cno; int i_state; } ;
struct nilfs_iget_args {scalar_t__ ino; scalar_t__ root; scalar_t__ cno; scalar_t__ for_gc; } ;
struct inode {scalar_t__ i_ino; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, void *VAR_2)
{
 struct nilfs_iget_args *VAR_3 = VAR_2;
 struct nilfs_inode_info *VAR_4;

 if (VAR_3->ino != VAR_1->i_ino || VAR_3->root != FUNC_0(VAR_1)->i_root)
  return 0;

 VAR_4 = FUNC_0(VAR_1);
 if (!FUNC_1(VAR_0, &VAR_4->i_state))
  return !VAR_3->for_gc;

 return VAR_3->for_gc && VAR_3->cno == VAR_4->i_cno;
}
