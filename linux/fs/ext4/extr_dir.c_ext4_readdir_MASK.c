
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int s_blocksize; TYPE_2__* s_bdev; } ;
struct inode {int i_size; int i_blkbits; int i_blocks; struct super_block* i_sb; } ;
struct fscrypt_str {int len; int * name; } ;
struct TYPE_7__ {int prev_pos; } ;
struct file {int f_version; TYPE_3__ f_ra; } ;
struct ext4_map_blocks {int m_lblk; int m_len; int m_pblk; } ;
struct ext4_dir_entry_2 {int name_len; int rec_len; int file_type; int inode; int * name; } ;
struct dir_context {int pos; } ;
struct buffer_head {int b_size; scalar_t__ b_data; } ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_6__ {TYPE_1__* bd_inode; } ;
struct TYPE_5__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct file*,int ,char*,unsigned long long) ;
 int VAR_3 ;
 int VAR_4 ;
 struct fscrypt_str FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int VAR_5 ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 () ;
 int VAR_6 ;
 int FUNC_10 (struct dir_context*,int *,int,scalar_t__,int ) ;
 int FUNC_11 (struct inode*) ;
 struct buffer_head* FUNC_12 (int *,struct inode*,int,int ) ;
 scalar_t__ FUNC_13 (struct inode*,struct file*,struct ext4_dir_entry_2*,struct buffer_head*,scalar_t__,int ,unsigned int) ;
 int FUNC_14 (struct inode*,int ) ;
 int FUNC_15 (struct inode*,struct buffer_head*) ;
 int FUNC_16 (struct file*,struct dir_context*) ;
 scalar_t__ FUNC_17 (struct inode*) ;
 int FUNC_18 (int *,struct inode*,struct ext4_map_blocks*,int ) ;
 int FUNC_19 (struct file*,struct dir_context*,int*) ;
 scalar_t__ FUNC_20 (int ,int) ;
 scalar_t__ FUNC_21 (int ) ;
 struct inode* FUNC_22 (struct file*) ;
 int FUNC_23 (struct inode*,int ,struct fscrypt_str*) ;
 int FUNC_24 (struct inode*,int ,int ,struct fscrypt_str*,struct fscrypt_str*) ;
 int FUNC_25 (struct fscrypt_str*) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (struct super_block*,int ) ;
 int FUNC_28 (struct inode*,int ) ;
 int FUNC_29 (struct inode*) ;
 scalar_t__ FUNC_30 (struct inode*) ;
 scalar_t__ FUNC_31 (int ) ;
 int FUNC_32 (int ,TYPE_3__*,struct file*,int,int) ;
 int FUNC_33 (TYPE_3__*,int) ;
 int FUNC_34 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_35(struct file *VAR_7, struct dir_context *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;
 struct ext4_dir_entry_2 *VAR_11;
 int VAR_12;
 struct inode *VAR_13 = FUNC_22(VAR_7);
 struct super_block *VAR_14 = VAR_13->i_sb;
 struct buffer_head *VAR_15 = ((void*)0);
 struct fscrypt_str VAR_16 = FUNC_3(((void*)0), 0);

 if (FUNC_4(VAR_13)) {
  VAR_12 = FUNC_26(VAR_13);
  if (VAR_12 && VAR_12 != -VAR_0)
   return VAR_12;
 }

 if (FUNC_30(VAR_13)) {
  VAR_12 = FUNC_16(VAR_7, VAR_8);
  if (VAR_12 != VAR_2) {
   return VAR_12;
  }




  FUNC_14(FUNC_22(VAR_7),
          VAR_3);
 }

 if (FUNC_17(VAR_13)) {
  int VAR_17 = 1;
  VAR_12 = FUNC_19(VAR_7, VAR_8,
        &VAR_17);
  if (VAR_17)
   return VAR_12;
 }

 if (FUNC_4(VAR_13)) {
  VAR_12 = FUNC_23(VAR_13, VAR_4, &VAR_16);
  if (VAR_12 < 0)
   return VAR_12;
 }

 while (VAR_8->pos < VAR_13->i_size) {
  struct ext4_map_blocks VAR_18;

  if (FUNC_21(VAR_6)) {
   VAR_12 = -VAR_1;
   goto errout;
  }
  FUNC_9();
  VAR_9 = VAR_8->pos & (VAR_14->s_blocksize - 1);
  VAR_18.m_lblk = VAR_8->pos >> FUNC_0(VAR_14);
  VAR_18.m_len = 1;
  VAR_12 = FUNC_18(((void*)0), VAR_13, &VAR_18, 0);
  if (VAR_12 == 0) {


   if (VAR_18.m_len == 0)
    VAR_18.m_len = 1;
   VAR_8->pos += VAR_18.m_len * VAR_14->s_blocksize;
   continue;
  }
  if (VAR_12 > 0) {
   pgoff_t VAR_19 = VAR_18.m_pblk >>
     (VAR_5 - VAR_13->i_blkbits);
   if (!FUNC_33(&VAR_7->f_ra, VAR_19))
    FUNC_32(
     VAR_14->s_bdev->bd_inode->i_mapping,
     &VAR_7->f_ra, VAR_7,
     VAR_19, 1);
   VAR_7->f_ra.prev_pos = (loff_t)VAR_19 << VAR_5;
   VAR_15 = FUNC_12(((void*)0), VAR_13, VAR_18.m_lblk, 0);
   if (FUNC_5(VAR_15)) {
    VAR_12 = FUNC_6(VAR_15);
    VAR_15 = ((void*)0);
    goto errout;
   }
  }

  if (!VAR_15) {

   if (VAR_8->pos > VAR_13->i_blocks << 9)
    break;
   VAR_8->pos += VAR_14->s_blocksize - VAR_9;
   continue;
  }


  if (!FUNC_8(VAR_15) &&
      !FUNC_15(VAR_13, VAR_15)) {
   FUNC_2(VAR_7, 0, "directory fails checksum "
     "at offset %llu",
     (unsigned long long)VAR_8->pos);
   VAR_8->pos += VAR_14->s_blocksize - VAR_9;
   FUNC_7(VAR_15);
   VAR_15 = ((void*)0);
   continue;
  }
  FUNC_34(VAR_15);





  if (!FUNC_28(VAR_13, VAR_7->f_version)) {
   for (VAR_10 = 0; VAR_10 < VAR_14->s_blocksize && VAR_10 < VAR_9; ) {
    VAR_11 = (struct ext4_dir_entry_2 *)
     (VAR_15->b_data + VAR_10);






    if (FUNC_20(VAR_11->rec_len,
     VAR_14->s_blocksize) < FUNC_1(1))
     break;
    VAR_10 += FUNC_20(VAR_11->rec_len,
           VAR_14->s_blocksize);
   }
   VAR_9 = VAR_10;
   VAR_8->pos = (VAR_8->pos & ~(VAR_14->s_blocksize - 1))
    | VAR_9;
   VAR_7->f_version = FUNC_29(VAR_13);
  }

  while (VAR_8->pos < VAR_13->i_size
         && VAR_9 < VAR_14->s_blocksize) {
   VAR_11 = (struct ext4_dir_entry_2 *) (VAR_15->b_data + VAR_9);
   if (FUNC_13(VAR_13, VAR_7, VAR_11, VAR_15,
       VAR_15->b_data, VAR_15->b_size,
       VAR_9)) {



    VAR_8->pos = (VAR_8->pos |
      (VAR_14->s_blocksize - 1)) + 1;
    break;
   }
   VAR_9 += FUNC_20(VAR_11->rec_len,
     VAR_14->s_blocksize);
   if (FUNC_31(VAR_11->inode)) {
    if (!FUNC_4(VAR_13)) {
     if (!FUNC_10(VAR_8, VAR_11->name,
         VAR_11->name_len,
         FUNC_31(VAR_11->inode),
         FUNC_27(VAR_14, VAR_11->file_type)))
      goto done;
    } else {
     int VAR_20 = VAR_16.len;
     struct fscrypt_str VAR_21 =
       FUNC_3(VAR_11->name,
        VAR_11->name_len);


     VAR_12 = FUNC_24(VAR_13,
      0, 0, &VAR_21, &VAR_16);
     VAR_21 = VAR_16;
     VAR_16.len = VAR_20;
     if (VAR_12)
      goto errout;
     if (!FUNC_10(VAR_8,
         VAR_21.name, VAR_21.len,
         FUNC_31(VAR_11->inode),
         FUNC_27(VAR_14, VAR_11->file_type)))
      goto done;
    }
   }
   VAR_8->pos += FUNC_20(VAR_11->rec_len,
      VAR_14->s_blocksize);
  }
  if ((VAR_8->pos < VAR_13->i_size) && !FUNC_11(VAR_13))
   goto done;
  FUNC_7(VAR_15);
  VAR_15 = ((void*)0);
  VAR_9 = 0;
 }
done:
 VAR_12 = 0;
errout:
 FUNC_25(&VAR_16);
 FUNC_7(VAR_15);
 return VAR_12;
}
