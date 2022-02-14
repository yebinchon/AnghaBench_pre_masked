
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nilfs_bmap_ptr_req {int dummy; } nilfs_bmap_ptr_req ;
struct nilfs_bmap_stats {int bs_nblocks; } ;
struct nilfs_bmap {int b_inode; } ;
struct buffer_head {int dummy; } ;
typedef int __u64 ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct nilfs_bmap*,int ,int ,int const*,int const*,int,union nilfs_bmap_ptr_req*,union nilfs_bmap_ptr_req*,struct buffer_head*) ;
 int FUNC_3 (struct nilfs_bmap*) ;
 int FUNC_4 (struct nilfs_bmap*,int ,union nilfs_bmap_ptr_req*,union nilfs_bmap_ptr_req*,struct buffer_head**,struct nilfs_bmap_stats*) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct nilfs_bmap *VAR_1,
       __u64 VAR_2, __u64 VAR_3,
       const __u64 *VAR_4, const __u64 *VAR_5, int VAR_6)
{
 struct buffer_head *VAR_7 = ((void*)0);
 union nilfs_bmap_ptr_req VAR_8, VAR_9, *VAR_10, *VAR_11;
 struct nilfs_bmap_stats VAR_12;
 int VAR_13;

 if (VAR_6 + 1 <= VAR_0) {
  VAR_10 = &VAR_8;
  VAR_11 = ((void*)0);
 } else if ((VAR_6 + 1) <= FUNC_1(
      FUNC_3(VAR_1))) {
  VAR_10 = &VAR_8;
  VAR_11 = &VAR_9;
 } else {
  VAR_10 = ((void*)0);
  VAR_11 = ((void*)0);
  FUNC_0();
 }

 VAR_13 = FUNC_4(VAR_1, VAR_2, VAR_10, VAR_11, &VAR_7,
           &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;
 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_10, VAR_11, VAR_7);
 FUNC_5(VAR_1->b_inode, VAR_12.bs_nblocks);
 return 0;
}
