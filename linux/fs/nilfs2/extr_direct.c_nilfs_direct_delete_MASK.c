
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nilfs_bmap_ptr_req {scalar_t__ bpr_ptr; } ;
struct nilfs_bmap {int b_inode; } ;
struct inode {int dummy; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct nilfs_bmap*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct nilfs_bmap*,union nilfs_bmap_ptr_req*,struct inode*) ;
 struct inode* FUNC_2 (struct nilfs_bmap*) ;
 int FUNC_3 (struct nilfs_bmap*,union nilfs_bmap_ptr_req*,struct inode*) ;
 scalar_t__ FUNC_4 (struct nilfs_bmap*,scalar_t__) ;
 int FUNC_5 (struct nilfs_bmap*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct nilfs_bmap *VAR_3, __u64 VAR_4)
{
 union nilfs_bmap_ptr_req VAR_5;
 struct inode *VAR_6;
 int VAR_7;

 if (VAR_4 > VAR_2 ||
     FUNC_4(VAR_3, VAR_4) == VAR_1)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_3) ? FUNC_2(VAR_3) : ((void*)0);
 VAR_5.bpr_ptr = FUNC_4(VAR_3, VAR_4);

 VAR_7 = FUNC_3(VAR_3, &VAR_5, VAR_6);
 if (!VAR_7) {
  FUNC_1(VAR_3, &VAR_5, VAR_6);
  FUNC_5(VAR_3, VAR_4, VAR_1);
  FUNC_6(VAR_3->b_inode, 1);
 }
 return VAR_7;
}
