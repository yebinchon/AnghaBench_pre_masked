
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct inode {int i_sb; } ;
struct hfs_find_data {int dummy; } ;
struct TYPE_4__ {scalar_t__ cached_blocks; scalar_t__ cached_start; } ;
struct TYPE_3__ {int ext_tree; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (struct hfs_find_data*,struct inode*,scalar_t__) ;
 int FUNC_3 (struct hfs_find_data*) ;
 int FUNC_4 (int ,struct hfs_find_data*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, u16 VAR_1)
{
 struct hfs_find_data VAR_2;
 int VAR_3;

 if (VAR_1 >= FUNC_0(VAR_0)->cached_start &&
     VAR_1 < FUNC_0(VAR_0)->cached_start + FUNC_0(VAR_0)->cached_blocks)
  return 0;

 VAR_3 = FUNC_4(FUNC_1(VAR_0->i_sb)->ext_tree, &VAR_2);
 if (!VAR_3) {
  VAR_3 = FUNC_2(&VAR_2, VAR_0, VAR_1);
  FUNC_3(&VAR_2);
 }
 return VAR_3;
}
