
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct ext4_map_blocks {int m_len; int m_flags; int m_pblk; int m_lblk; } ;
struct buffer_head {scalar_t__ b_size; } ;
typedef int sector_t ;
struct TYPE_2__ {scalar_t__ s_blocksize; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*,int ,struct ext4_map_blocks*,struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*,int ) ;
 int FUNC_4 (struct buffer_head*,TYPE_1__*,int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;

int FUNC_7(struct inode *VAR_0, sector_t VAR_1,
      struct buffer_head *VAR_2, int VAR_3)
{
 struct ext4_map_blocks VAR_4;
 int VAR_5 = 0;

 FUNC_0(VAR_3 == 0);
 FUNC_0(VAR_2->b_size != VAR_0->i_sb->s_blocksize);

 VAR_4.m_lblk = VAR_1;
 VAR_4.m_len = 1;






 VAR_5 = FUNC_2(VAR_0, VAR_1, &VAR_4, VAR_2);
 if (VAR_5 <= 0)
  return VAR_5;

 FUNC_4(VAR_2, VAR_0->i_sb, VAR_4.m_pblk);
 FUNC_3(VAR_2, VAR_4.m_flags);

 if (FUNC_1(VAR_2)) {






  FUNC_6(VAR_2);
  FUNC_5(VAR_2);
 }
 return 0;
}
