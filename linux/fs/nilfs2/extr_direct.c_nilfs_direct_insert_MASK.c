
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nilfs_bmap_ptr_req {int bpr_ptr; } ;
struct nilfs_bmap {int b_inode; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct nilfs_bmap*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct nilfs_bmap*,union nilfs_bmap_ptr_req*,struct inode*) ;
 int FUNC_2 (struct nilfs_bmap*) ;
 struct inode* FUNC_3 (struct nilfs_bmap*) ;
 int FUNC_4 (struct nilfs_bmap*,union nilfs_bmap_ptr_req*,struct inode*) ;
 int FUNC_5 (struct nilfs_bmap*) ;
 int FUNC_6 (struct nilfs_bmap*,scalar_t__,int ) ;
 int FUNC_7 (struct nilfs_bmap*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct nilfs_bmap*,scalar_t__) ;
 int FUNC_9 (struct nilfs_bmap*,scalar_t__,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_12(struct nilfs_bmap *VAR_4, __u64 VAR_5, __u64 VAR_6)
{
 union nilfs_bmap_ptr_req VAR_7;
 struct inode *VAR_8 = ((void*)0);
 struct buffer_head *VAR_9;
 int VAR_10;

 if (VAR_5 > VAR_3)
  return -VAR_1;
 if (FUNC_8(VAR_4, VAR_5) != VAR_2)
  return -VAR_0;

 if (FUNC_0(VAR_4)) {
  VAR_7.bpr_ptr = FUNC_7(VAR_4, VAR_5);
  VAR_8 = FUNC_3(VAR_4);
 }
 VAR_10 = FUNC_4(VAR_4, &VAR_7, VAR_8);
 if (!VAR_10) {

  VAR_9 = (struct buffer_head *)((unsigned long)VAR_6);
  FUNC_11(VAR_9);

  FUNC_1(VAR_4, &VAR_7, VAR_8);
  FUNC_9(VAR_4, VAR_5, VAR_7.bpr_ptr);

  if (!FUNC_2(VAR_4))
   FUNC_5(VAR_4);

  if (FUNC_0(VAR_4))
   FUNC_6(VAR_4, VAR_5, VAR_7.bpr_ptr);

  FUNC_10(VAR_4->b_inode, 1);
 }
 return VAR_10;
}
