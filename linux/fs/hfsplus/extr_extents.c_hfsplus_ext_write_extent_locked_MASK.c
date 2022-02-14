
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct hfs_find_data {int dummy; } ;
struct TYPE_4__ {int extent_state; } ;
struct TYPE_3__ {int ext_tree; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct hfs_find_data*) ;
 int FUNC_3 (struct hfs_find_data*) ;
 int FUNC_4 (int ,struct hfs_find_data*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_0(VAR_1)->extent_state & VAR_0) {
  struct hfs_find_data VAR_3;

  VAR_2 = FUNC_4(FUNC_1(VAR_1->i_sb)->ext_tree, &VAR_3);
  if (VAR_2)
   return VAR_2;
  VAR_2 = FUNC_2(VAR_1, &VAR_3);
  FUNC_3(&VAR_3);
 }
 return VAR_2;
}
