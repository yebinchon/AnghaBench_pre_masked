
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int s_blocksize; unsigned long s_blocksize_bits; } ;
struct ocfs2_dir_entry {int rec_len; int file_type; int inode; int name_len; int name; } ;
struct inode {struct super_block* i_sb; } ;
struct dir_context {int pos; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct dir_context*,int ,int ,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct inode*,struct ocfs2_dir_entry*,struct buffer_head*,unsigned long) ;
 scalar_t__ FUNC_10 (struct inode*,unsigned long,struct buffer_head**,int ) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_1,
        u64 *VAR_2,
        struct dir_context *VAR_3,
        bool VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7 = 0;
 int VAR_8;
 struct buffer_head * VAR_9, * VAR_10;
 struct ocfs2_dir_entry * VAR_11;
 struct super_block * VAR_12 = VAR_1->i_sb;
 unsigned int VAR_13 = 16;
 int VAR_14 = 0;

 VAR_9 = ((void*)0);

 VAR_5 = VAR_3->pos & (VAR_12->s_blocksize - 1);

 while (VAR_3->pos < FUNC_4(VAR_1)) {
  VAR_6 = VAR_3->pos >> VAR_12->s_blocksize_bits;
  if (FUNC_10(VAR_1, VAR_6, &VAR_9, 0)) {

   VAR_3->pos += VAR_12->s_blocksize - VAR_5;
   continue;
  }






  if (!VAR_7
      || (((VAR_7 - VAR_6) << 9) <= (VAR_13 / 2))) {
   for (VAR_8 = VAR_13 >> (VAR_12->s_blocksize_bits - 9);
        VAR_8 > 0; VAR_8--) {
    VAR_10 = ((void*)0);
    if (!FUNC_10(VAR_1, ++VAR_6, &VAR_10,
         VAR_0))
     FUNC_1(VAR_10);
   }
   VAR_7 = VAR_6;
   VAR_13 = 8;
  }





  if (!FUNC_5(VAR_1, *VAR_2)) {
   for (VAR_8 = 0; VAR_8 < VAR_12->s_blocksize && VAR_8 < VAR_5; ) {
    VAR_11 = (struct ocfs2_dir_entry *) (VAR_9->b_data + VAR_8);






    if (FUNC_7(VAR_11->rec_len) <
        FUNC_0(1))
     break;
    VAR_8 += FUNC_7(VAR_11->rec_len);
   }
   VAR_5 = VAR_8;
   VAR_3->pos = (VAR_3->pos & ~(VAR_12->s_blocksize - 1))
    | VAR_5;
   *VAR_2 = FUNC_6(VAR_1);
  }

  while (VAR_3->pos < FUNC_4(VAR_1)
         && VAR_5 < VAR_12->s_blocksize) {
   VAR_11 = (struct ocfs2_dir_entry *) (VAR_9->b_data + VAR_5);
   if (!FUNC_9(VAR_1, VAR_11, VAR_9, VAR_5)) {


    VAR_3->pos = (VAR_3->pos | (VAR_12->s_blocksize - 1)) + 1;
    break;
   }
   if (FUNC_8(VAR_11->inode)) {
    if (!FUNC_2(VAR_3, VAR_11->name,
      VAR_11->name_len,
      FUNC_8(VAR_11->inode),
     FUNC_3(VAR_11->file_type))) {
     FUNC_1(VAR_9);
     return 0;
    }
    VAR_14++;
   }
   VAR_5 += FUNC_7(VAR_11->rec_len);
   VAR_3->pos += FUNC_7(VAR_11->rec_len);
  }
  VAR_5 = 0;
  FUNC_1(VAR_9);
  VAR_9 = ((void*)0);
  if (!VAR_4 && VAR_14)
   break;
 }
 return 0;
}
