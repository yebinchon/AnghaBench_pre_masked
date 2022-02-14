
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_blkbits; TYPE_1__* i_sb; } ;
struct ext4_map_blocks {int m_len; int m_flags; int m_pblk; int m_lblk; } ;
struct buffer_head {int b_size; } ;
typedef int sector_t ;
struct TYPE_2__ {int s_blocksize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct inode*,struct ext4_map_blocks*,int) ;
 int FUNC_3 (struct buffer_head*,int ) ;
 int FUNC_4 (struct buffer_head*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, sector_t VAR_2,
      struct buffer_head *VAR_3, int VAR_4)
{
 struct ext4_map_blocks VAR_5;
 int VAR_6 = 0;

 if (FUNC_0(VAR_1))
  return -VAR_0;

 VAR_5.m_lblk = VAR_2;
 VAR_5.m_len = VAR_3->b_size >> VAR_1->i_blkbits;

 VAR_6 = FUNC_2(FUNC_1(), VAR_1, &VAR_5,
         VAR_4);
 if (VAR_6 > 0) {
  FUNC_4(VAR_3, VAR_1->i_sb, VAR_5.m_pblk);
  FUNC_3(VAR_3, VAR_5.m_flags);
  VAR_3->b_size = VAR_1->i_sb->s_blocksize * VAR_5.m_len;
  VAR_6 = 0;
 } else if (VAR_6 == 0) {

  VAR_3->b_size = VAR_1->i_sb->s_blocksize * VAR_5.m_len;
 }
 return VAR_6;
}
