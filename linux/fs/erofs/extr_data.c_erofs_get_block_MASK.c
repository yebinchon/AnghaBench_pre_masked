
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct erofs_map_blocks {int m_la; int m_flags; int m_pa; } ;
struct buffer_head {int b_blocknr; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct erofs_map_blocks*,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, sector_t VAR_3,
      struct buffer_head *VAR_4, int VAR_5)
{
 struct erofs_map_blocks VAR_6 = {
  .m_la = VAR_3 << 9,
 };
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, &VAR_6, VAR_0);
 if (VAR_7)
  return VAR_7;

 if (VAR_6.m_flags & VAR_1)
  VAR_4->b_blocknr = FUNC_0(VAR_6.m_pa);

 return VAR_7;
}
