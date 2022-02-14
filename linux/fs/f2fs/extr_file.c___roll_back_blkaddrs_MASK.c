
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef int block_t ;


 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct f2fs_sb_info*,struct inode*,int) ;
 int FUNC_2 (struct dnode_of_data*,scalar_t__,int ) ;
 int FUNC_3 (struct f2fs_sb_info*,int ) ;
 int FUNC_4 (struct dnode_of_data*) ;
 int FUNC_5 (struct dnode_of_data*,int ) ;
 int FUNC_6 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, block_t *VAR_2,
    int *VAR_3, pgoff_t VAR_4, int VAR_5)
{
 struct f2fs_sb_info *VAR_6 = FUNC_0(VAR_1);
 struct dnode_of_data VAR_7;
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++, VAR_3++, VAR_2++) {
  if (*VAR_3 == 0)
   continue;

  FUNC_6(&VAR_7, VAR_1, ((void*)0), ((void*)0), 0);
  VAR_8 = FUNC_2(&VAR_7, VAR_4 + VAR_9, VAR_0);
  if (VAR_8) {
   FUNC_1(VAR_6, VAR_1, 1);
   FUNC_3(VAR_6, *VAR_2);
  } else {
   FUNC_5(&VAR_7, *VAR_2);
  }
  FUNC_4(&VAR_7);
 }
 return 0;
}
