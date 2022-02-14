
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {unsigned int i_blkbits; int i_sb; } ;
struct buffer_head {unsigned int b_size; } ;
typedef int sector_t ;


 int FUNC_0 (struct inode*,int ,unsigned int,int *,int*,int*,int) ;
 int FUNC_1 (struct buffer_head*,int ,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;

int FUNC_4(struct inode *VAR_0, sector_t VAR_1,
  struct buffer_head *VAR_2, int VAR_3)
{
 unsigned VAR_4 = VAR_2->b_size >> VAR_0->i_blkbits;
 bool VAR_5 = 0, VAR_6 = 0;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_4, &VAR_7, &VAR_5, &VAR_6,
   VAR_3);
 if (VAR_8 <= 0)
  return VAR_8;

 FUNC_1(VAR_2, VAR_0->i_sb, VAR_7);
 VAR_2->b_size = (VAR_8 << VAR_0->i_blkbits);
 if (VAR_5)
  FUNC_3(VAR_2);
 if (VAR_6)
  FUNC_2(VAR_2);
 return 0;

}
