
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xad_t ;
struct inode {int i_blkbits; int i_size; TYPE_1__* i_sb; } ;
struct buffer_head {int b_size; } ;
typedef int sector_t ;
typedef int s64 ;
typedef int s32 ;
struct TYPE_2__ {int s_blocksize_bits; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*,int,int,int *,int) ;
 int FUNC_10 (struct inode*,int,int *) ;
 int FUNC_11 (struct inode*,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct buffer_head*,TYPE_1__*,int) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct inode*,int,int,int*,int*,int*,int ) ;

int FUNC_16(struct inode *VAR_2, sector_t VAR_3,
    struct buffer_head *VAR_4, int VAR_5)
{
 s64 VAR_6 = VAR_3;
 int VAR_7 = 0;
 xad_t VAR_8;
 s64 VAR_9;
 int VAR_10;
 s32 VAR_11 = VAR_4->b_size >> VAR_2->i_blkbits;




 if (VAR_5)
  FUNC_3(VAR_2, VAR_0);
 else
  FUNC_1(VAR_2, VAR_0);

 if (((VAR_6 << VAR_2->i_sb->s_blocksize_bits) < VAR_2->i_size) &&
     (!FUNC_15(VAR_2, VAR_6, VAR_11, &VAR_10, &VAR_9, &VAR_11, 0)) &&
     VAR_9) {
  if (VAR_10 & VAR_1) {
   if (!VAR_5)




    goto unlock;
   FUNC_0();

   VAR_7 = FUNC_11(VAR_2, &VAR_8);
   if (VAR_7)
    goto unlock;
   FUNC_14(VAR_4);
  }

  FUNC_13(VAR_4, VAR_2->i_sb, VAR_9);
  VAR_4->b_size = VAR_11 << VAR_2->i_blkbits;
  goto unlock;
 }
 if (!VAR_5)
  goto unlock;
 FUNC_0();


      unlock:



 if (VAR_5)
  FUNC_4(VAR_2);
 else
  FUNC_2(VAR_2);
 return VAR_7;
}
