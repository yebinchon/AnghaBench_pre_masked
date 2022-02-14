
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_blkbits; TYPE_1__* i_sb; } ;
struct ext4_map_blocks {unsigned long m_lblk; int m_len; } ;
struct buffer_head {int b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (int *,struct inode*,unsigned long,int ) ;
 int FUNC_6 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_7 (int *,struct buffer_head*) ;
 int FUNC_8 (int *,struct inode*,struct ext4_map_blocks*,int ) ;
 int FUNC_9 (int *,struct inode*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int*) ;
 int FUNC_11 (struct inode*,int) ;
 int FUNC_12 (struct inode*,int) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int ,void const*,int) ;
 int FUNC_16 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_17(handle_t *VAR_3, struct inode *VAR_4,
      const void *VAR_5, int VAR_6)
{
 struct buffer_head *VAR_7 = ((void*)0);
 unsigned long VAR_8 = 0;
 int VAR_9 = VAR_4->i_sb->s_blocksize;
 int VAR_10 = (VAR_6 + VAR_9 - 1) >> VAR_4->i_blkbits;
 int VAR_11, VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;

retry:
 while (VAR_13 >= 0 && VAR_13 < VAR_10) {
  struct ext4_map_blocks VAR_15;
  VAR_15.m_lblk = VAR_8 += VAR_13;
  VAR_15.m_len = VAR_10 -= VAR_13;

  VAR_13 = FUNC_8(VAR_3, VAR_4, &VAR_15,
          VAR_2);
  if (VAR_13 <= 0) {
   FUNC_9(VAR_3, VAR_4);
   if (VAR_13 == -VAR_1 &&
       FUNC_10(VAR_4->i_sb, &VAR_14)) {
    VAR_13 = 0;
    goto retry;
   }
   break;
  }
 }

 if (VAR_13 < 0)
  return VAR_13;

 VAR_8 = 0;
 while (VAR_12 < VAR_6) {
  if (VAR_7 != ((void*)0))
   FUNC_4(VAR_7);
  VAR_11 = (VAR_6 - VAR_12) > VAR_9 ? VAR_9 :
        VAR_6 - VAR_12;
  VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_8, 0);
  if (FUNC_1(VAR_7))
   return FUNC_2(VAR_7);
  if (!VAR_7) {
   FUNC_3(1);
   FUNC_0(VAR_4,
      "ext4_getblk() return bh = NULL");
   return -VAR_0;
  }
  VAR_13 = FUNC_7(VAR_3, VAR_7);
  if (VAR_13)
   goto out;

  FUNC_15(VAR_7->b_data, VAR_5, VAR_11);
  FUNC_16(VAR_7);
  FUNC_6(VAR_3, VAR_4, VAR_7);

  VAR_5 += VAR_11;
  VAR_12 += VAR_11;
  VAR_8 += 1;
 }

 FUNC_13(VAR_4);
 FUNC_12(VAR_4, VAR_12);
 FUNC_11(VAR_4, VAR_12);
 FUNC_14(VAR_4);

 FUNC_9(VAR_3, VAR_4);

out:
 FUNC_4(VAR_7);

 return VAR_13;
}
