
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_nlink; } ;
struct f2fs_inode_info {int i_sem; } ;
typedef int nid_t ;


 struct f2fs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_0)
{
 struct f2fs_inode_info *VAR_1 = FUNC_0(VAR_0);
 nid_t VAR_2;

 FUNC_1(&VAR_1->i_sem);
 if (FUNC_4(VAR_0) && VAR_0->i_nlink == 1 &&
   FUNC_5(VAR_0, &VAR_2)) {
  FUNC_2(VAR_0, VAR_2);
  FUNC_3(VAR_0);
 }
 FUNC_6(&VAR_1->i_sem);
}
