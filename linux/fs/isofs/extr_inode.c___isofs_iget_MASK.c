
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; } ;
struct isofs_iget5_callback_data {unsigned long block; unsigned long offset; } ;
struct inode {int i_state; } ;


 long VAR_0 ;
 long VAR_1 ;
 struct inode* FUNC_0 (long) ;
 int VAR_2 ;
 struct inode* FUNC_1 (struct super_block*,unsigned long,int *,int *,struct isofs_iget5_callback_data*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_3 (struct inode*,int) ;
 int FUNC_4 (struct inode*) ;

struct inode *FUNC_5(struct super_block *VAR_5,
      unsigned long VAR_6,
      unsigned long VAR_7,
      int VAR_8)
{
 unsigned long VAR_9;
 struct inode *VAR_10;
 struct isofs_iget5_callback_data VAR_11;
 long VAR_12;

 if (VAR_7 >= 1ul << VAR_5->s_blocksize_bits)
  return FUNC_0(-VAR_0);

 VAR_11.block = VAR_6;
 VAR_11.offset = VAR_7;

 VAR_9 = (VAR_6 << VAR_5->s_blocksize_bits) | VAR_7;

 VAR_10 = FUNC_1(VAR_5, VAR_9, &VAR_4,
    &VAR_3, &VAR_11);

 if (!VAR_10)
  return FUNC_0(-VAR_1);

 if (VAR_10->i_state & VAR_2) {
  VAR_12 = FUNC_3(VAR_10, VAR_8);
  if (VAR_12 < 0) {
   FUNC_2(VAR_10);
   VAR_10 = FUNC_0(VAR_12);
  } else {
   FUNC_4(VAR_10);
  }
 }

 return VAR_10;
}
