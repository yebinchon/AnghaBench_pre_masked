
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_map_blocks {int m_may_create; unsigned long long m_lblk; int m_len; int m_seg_type; int * m_next_extent; int * m_next_pgofs; } ;
typedef int pgoff_t ;
typedef unsigned long long loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long long VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct f2fs_sb_info*,int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,unsigned long long) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct f2fs_map_blocks*,int,int ) ;
 int FUNC_6 (struct inode*) ;
 unsigned long long FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,unsigned long long) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_7, loff_t VAR_8,
     loff_t VAR_9, int VAR_10)
{
 struct f2fs_sb_info *VAR_11 = FUNC_0(VAR_7);
 struct f2fs_map_blocks VAR_12 = { .m_next_pgofs = ((void*)0),
   .m_next_extent = ((void*)0), .m_seg_type = VAR_4,
   .m_may_create = 1 };
 pgoff_t VAR_13;
 loff_t VAR_14 = FUNC_7(VAR_7);
 loff_t VAR_15;
 int VAR_16;

 VAR_16 = FUNC_8(VAR_7, (VAR_9 + VAR_8));
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_7);
 if (VAR_16)
  return VAR_16;

 FUNC_1(VAR_11, 1);

 VAR_13 = ((unsigned long long)VAR_8 + VAR_9) >> VAR_5;
 VAR_15 = (VAR_8 + VAR_9) & (VAR_6 - 1);

 VAR_12.m_lblk = ((unsigned long long)VAR_8) >> VAR_5;
 VAR_12.m_len = VAR_13 - VAR_12.m_lblk;
 if (VAR_15)
  VAR_12.m_len++;

 if (FUNC_4(VAR_7))
  VAR_12.m_seg_type = VAR_0;

 VAR_16 = FUNC_5(VAR_7, &VAR_12, 1, (FUNC_4(VAR_7) ?
      VAR_2 :
      VAR_1));
 if (VAR_16) {
  pgoff_t VAR_17;

  if (!VAR_12.m_len)
   return VAR_16;

  VAR_17 = VAR_12.m_lblk + VAR_12.m_len - 1;


  VAR_14 = (VAR_17 == VAR_13) ? VAR_8 + VAR_9 :
     (loff_t)(VAR_17 + 1) << VAR_5;
 } else {
  VAR_14 = ((loff_t)VAR_13 << VAR_5) + VAR_15;
 }

 if (VAR_14 > FUNC_7(VAR_7)) {
  if (VAR_10 & VAR_3)
   FUNC_6(VAR_7);
  else
   FUNC_3(VAR_7, VAR_14);
 }

 return VAR_16;
}
