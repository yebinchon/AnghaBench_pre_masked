
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_sb_info {scalar_t__ s_cluster_ratio; } ;
struct ext4_map_blocks {scalar_t__ m_lblk; void* m_len; scalar_t__ m_pblk; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {int dummy; } ;
typedef scalar_t__ ext4_lblk_t ;
typedef unsigned short ext4_fsblk_t ;


 scalar_t__ FUNC_0 (struct ext4_sb_info*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct ext4_sb_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ext4_sb_info*,unsigned short) ;
 struct ext4_sb_info* FUNC_3 (struct super_block*) ;
 unsigned short FUNC_4 (struct ext4_extent*) ;
 scalar_t__ FUNC_5 (struct ext4_ext_path*) ;
 unsigned short FUNC_6 (struct ext4_extent*) ;
 scalar_t__ FUNC_7 (int ) ;
 void* FUNC_8 (void*,scalar_t__) ;
 int FUNC_9 (struct super_block*,struct ext4_map_blocks*,int) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_0,
         struct ext4_map_blocks *VAR_1,
         struct ext4_extent *VAR_2,
         struct ext4_ext_path *VAR_3)
{
 struct ext4_sb_info *VAR_4 = FUNC_3(VAR_0);
 ext4_lblk_t VAR_5 = FUNC_1(VAR_4, VAR_1->m_lblk);
 ext4_lblk_t VAR_6, VAR_7;
 ext4_lblk_t VAR_8;
 ext4_lblk_t VAR_9 = FUNC_7(VAR_2->ee_block);
 ext4_fsblk_t VAR_10 = FUNC_6(VAR_2);
 unsigned short VAR_11 = FUNC_4(VAR_2);


 VAR_6 = FUNC_0(VAR_4, VAR_9);
 VAR_7 = FUNC_0(VAR_4, VAR_9 + VAR_11 - 1);


 VAR_8 = FUNC_0(VAR_4, VAR_1->m_lblk);

 if ((VAR_8 == VAR_7) ||
     (VAR_8 == VAR_6)) {
  if (VAR_8 == VAR_7)
   VAR_10 += VAR_11 - 1;
  VAR_1->m_pblk = FUNC_2(VAR_4, VAR_10) + VAR_5;
  VAR_1->m_len = FUNC_8(VAR_1->m_len,
     (unsigned) VAR_4->s_cluster_ratio - VAR_5);
  if (VAR_1->m_lblk < VAR_9)
   VAR_1->m_len = FUNC_8(VAR_1->m_len, VAR_9 - VAR_1->m_lblk);
  if (VAR_1->m_lblk > VAR_9) {
   ext4_lblk_t VAR_12 = FUNC_5(VAR_3);
   VAR_1->m_len = FUNC_8(VAR_1->m_len, VAR_12 - VAR_1->m_lblk);
  }

  FUNC_9(VAR_0, VAR_1, 1);
  return 1;
 }

 FUNC_9(VAR_0, VAR_1, 0);
 return 0;
}
