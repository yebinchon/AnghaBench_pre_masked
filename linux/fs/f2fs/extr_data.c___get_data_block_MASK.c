
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int i_blkbits; int i_sb; } ;
struct f2fs_map_blocks {int m_len; int m_seg_type; int m_may_create; int m_flags; int m_pblk; int * m_next_extent; int * m_next_pgofs; int m_lblk; } ;
struct buffer_head {int b_size; int b_state; } ;
typedef int sector_t ;
typedef int pgoff_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct f2fs_map_blocks*,int,int) ;
 int FUNC_1 (struct buffer_head*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, sector_t VAR_2,
   struct buffer_head *VAR_3, int VAR_4, int VAR_5,
   pgoff_t *VAR_6, int VAR_7, bool VAR_8)
{
 struct f2fs_map_blocks VAR_9;
 int VAR_10;

 VAR_9.m_lblk = VAR_2;
 VAR_9.m_len = VAR_3->b_size >> VAR_1->i_blkbits;
 VAR_9.m_next_pgofs = VAR_6;
 VAR_9.m_next_extent = ((void*)0);
 VAR_9.m_seg_type = VAR_7;
 VAR_9.m_may_create = VAR_8;

 VAR_10 = FUNC_0(VAR_1, &VAR_9, VAR_4, VAR_5);
 if (!VAR_10) {
  FUNC_1(VAR_3, VAR_1->i_sb, VAR_9.m_pblk);
  VAR_3->b_state = (VAR_3->b_state & ~VAR_0) | VAR_9.m_flags;
  VAR_3->b_size = (u64)VAR_9.m_len << VAR_1->i_blkbits;
 }
 return VAR_10;
}
