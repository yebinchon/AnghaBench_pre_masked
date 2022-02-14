
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_blocks; int i_ino; int i_mode; } ;
struct dnode_of_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dnode_of_data*,int ,int ) ;
 int FUNC_6 (struct dnode_of_data*) ;
 int FUNC_7 (struct dnode_of_data*,int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ,char*,int ,unsigned long long) ;
 int FUNC_10 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct dnode_of_data*) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct inode *VAR_3)
{
 struct dnode_of_data VAR_4;
 int VAR_5;

 FUNC_10(&VAR_4, VAR_3, ((void*)0), ((void*)0), VAR_3->i_ino);
 VAR_5 = FUNC_5(&VAR_4, 0, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_8(VAR_3);
 if (VAR_5) {
  FUNC_6(&VAR_4);
  return VAR_5;
 }


 if (FUNC_3(VAR_3->i_mode) || FUNC_1(VAR_3->i_mode) ||
    FUNC_2(VAR_3->i_mode))
  FUNC_7(&VAR_4, 1);


 if (FUNC_13(FUNC_4(FUNC_0(VAR_3)))) {
  FUNC_6(&VAR_4);
  return -VAR_0;
 }

 if (FUNC_13(VAR_3->i_blocks != 0 && VAR_3->i_blocks != 8)) {
  FUNC_9(FUNC_0(VAR_3), "Inconsistent i_blocks, ino:%lu, iblocks:%llu",
     VAR_3->i_ino, (unsigned long long)VAR_3->i_blocks);
  FUNC_11(FUNC_0(VAR_3), VAR_2);
 }


 VAR_5 = FUNC_12(&VAR_4);
 if (VAR_5) {
  FUNC_6(&VAR_4);
  return VAR_5;
 }
 return 0;
}
