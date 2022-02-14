
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int blocks_per_seg; } ;
struct f2fs_nm_info {int nat_blkaddr; int nat_bitmap; } ;
typedef int pgoff_t ;
typedef int nid_t ;


 int FUNC_0 (int ) ;
 struct f2fs_nm_info* FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static inline pgoff_t FUNC_3(struct f2fs_sb_info *VAR_0, nid_t VAR_1)
{
 struct f2fs_nm_info *VAR_2 = FUNC_1(VAR_0);
 pgoff_t VAR_3;
 pgoff_t VAR_4;






 VAR_3 = FUNC_0(VAR_1);

 VAR_4 = (pgoff_t)(VAR_2->nat_blkaddr +
  (VAR_3 << 1) -
  (VAR_3 & (VAR_0->blocks_per_seg - 1)));

 if (FUNC_2(VAR_3, VAR_2->nat_bitmap))
  VAR_4 += VAR_0->blocks_per_seg;

 return VAR_4;
}
