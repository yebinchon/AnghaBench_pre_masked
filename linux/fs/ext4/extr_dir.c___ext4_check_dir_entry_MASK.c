
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {TYPE_3__* i_sb; } ;
struct file {int dummy; } ;
struct ext4_dir_entry_2 {int name_len; int inode; int rec_len; } ;
struct buffer_head {int b_blocknr; } ;
struct TYPE_6__ {int s_blocksize; } ;
struct TYPE_5__ {TYPE_1__* s_es; } ;
struct TYPE_4__ {int s_inodes_count; } ;


 int const FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct file*,char const*,unsigned int,int ,char*,char const*,unsigned int,scalar_t__,int const,int,int) ;
 int FUNC_3 (struct inode*,char const*,unsigned int,int ,char*,char const*,unsigned int,scalar_t__,int const,int,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(const char *VAR_0, unsigned int VAR_1,
      struct inode *VAR_2, struct file *VAR_3,
      struct ext4_dir_entry_2 *VAR_4,
      struct buffer_head *VAR_5, char *VAR_6, int VAR_7,
      unsigned int VAR_8)
{
 const char *VAR_9 = ((void*)0);
 const int VAR_10 = FUNC_4(VAR_4->rec_len,
      VAR_2->i_sb->s_blocksize);

 if (FUNC_6(VAR_10 < FUNC_0(1)))
  VAR_9 = "rec_len is smaller than minimal";
 else if (FUNC_6(VAR_10 % 4 != 0))
  VAR_9 = "rec_len % 4 != 0";
 else if (FUNC_6(VAR_10 < FUNC_0(VAR_4->name_len)))
  VAR_9 = "rec_len is too small for name_len";
 else if (FUNC_6(((char *) VAR_4 - VAR_6) + VAR_10 > VAR_7))
  VAR_9 = "directory entry overrun";
 else if (FUNC_6(FUNC_5(VAR_4->inode) >
   FUNC_5(FUNC_1(VAR_2->i_sb)->s_es->s_inodes_count)))
  VAR_9 = "inode out of bounds";
 else
  return 0;

 if (VAR_3)
  FUNC_2(VAR_3, VAR_0, VAR_1, VAR_5->b_blocknr,
    "bad entry in directory: %s - offset=%u, "
    "inode=%u, rec_len=%d, name_len=%d, size=%d",
    VAR_9, VAR_8, FUNC_5(VAR_4->inode),
    VAR_10, VAR_4->name_len, VAR_7);
 else
  FUNC_3(VAR_2, VAR_0, VAR_1, VAR_5->b_blocknr,
    "bad entry in directory: %s - offset=%u, "
    "inode=%u, rec_len=%d, name_len=%d, size=%d",
     VAR_9, VAR_8, FUNC_5(VAR_4->inode),
     VAR_10, VAR_4->name_len, VAR_7);

 return 1;
}
