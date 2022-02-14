
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_inode_info {scalar_t__ i_root; int i_btnode_cache; int i_bmap; int i_state; int * i_bh; int i_dirty; } ;
struct inode {scalar_t__ i_ino; } ;


 int FUNC_0 (int) ;
 struct nilfs_inode_info* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct inode *VAR_2)
{
 struct nilfs_inode_info *VAR_3 = FUNC_1(VAR_2);




 FUNC_0(!FUNC_3(&VAR_3->i_dirty));
 FUNC_2(VAR_3->i_bh);
 VAR_3->i_bh = ((void*)0);

 if (FUNC_6(VAR_2))
  FUNC_7(VAR_2);

 if (FUNC_9(VAR_0, &VAR_3->i_state))
  FUNC_4(VAR_3->i_bmap);

 FUNC_5(&VAR_3->i_btnode_cache);

 if (VAR_3->i_root && VAR_2->i_ino == VAR_1)
  FUNC_8(VAR_3->i_root);
}
