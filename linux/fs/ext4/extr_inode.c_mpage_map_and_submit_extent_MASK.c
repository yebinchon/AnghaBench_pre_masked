
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_7__ {TYPE_1__* io_end; } ;
struct ext4_map_blocks {scalar_t__ m_len; scalar_t__ m_lblk; } ;
struct mpage_da_data {scalar_t__ first_page; TYPE_2__ io_submit; struct ext4_map_blocks map; struct inode* inode; } ;
struct inode {scalar_t__ i_blkbits; int i_ino; struct super_block* i_sb; } ;
typedef scalar_t__ loff_t ;
typedef int handle_t ;
struct TYPE_9__ {scalar_t__ i_disksize; int i_data_sem; } ;
struct TYPE_8__ {int s_mount_flags; } ;
struct TYPE_6__ {scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (struct super_block*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,char*,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,struct inode*) ;
 int FUNC_7 (struct super_block*,int ,char*,...) ;
 int FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (struct mpage_da_data*) ;
 int FUNC_11 (int *,struct mpage_da_data*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(handle_t *VAR_5,
           struct mpage_da_data *VAR_6,
           bool *VAR_7)
{
 struct inode *VAR_8 = VAR_6->inode;
 struct ext4_map_blocks *VAR_9 = &VAR_6->map;
 int VAR_10;
 loff_t VAR_11;
 int VAR_12 = 0;

 VAR_6->io_submit.io_end->offset =
    ((loff_t)VAR_9->m_lblk) << VAR_8->i_blkbits;
 do {
  VAR_10 = FUNC_11(VAR_5, VAR_6);
  if (VAR_10 < 0) {
   struct super_block *VAR_13 = VAR_8->i_sb;

   if (FUNC_5(FUNC_1(VAR_13)) ||
       FUNC_1(VAR_13)->s_mount_flags & VAR_2)
    goto invalidate_dirty_pages;





   if ((VAR_10 == -VAR_0) ||
       (VAR_10 == -VAR_1 && FUNC_3(VAR_13))) {
    if (VAR_12)
     goto update_disksize;
    return VAR_10;
   }
   FUNC_7(VAR_13, VAR_3,
     "Delayed block allocation failed for "
     "inode %lu at logical offset %llu with"
     " max blocks %u with error %d",
     VAR_8->i_ino,
     (unsigned long long)VAR_9->m_lblk,
     (unsigned)VAR_9->m_len, -VAR_10);
   FUNC_7(VAR_13, VAR_3,
     "This should not happen!! Data will "
     "be lost\n");
   if (VAR_10 == -VAR_1)
    FUNC_8(VAR_8);
  invalidate_dirty_pages:
   *VAR_7 = 1;
   return VAR_10;
  }
  VAR_12 = 1;




  VAR_10 = FUNC_10(VAR_6);
  if (VAR_10 < 0)
   goto update_disksize;
 } while (VAR_9->m_len);

update_disksize:




 VAR_11 = ((loff_t)VAR_6->first_page) << VAR_4;
 if (VAR_11 > FUNC_0(VAR_8)->i_disksize) {
  int VAR_14;
  loff_t VAR_15;

  FUNC_2(&FUNC_0(VAR_8)->i_data_sem);
  VAR_15 = FUNC_9(VAR_8);
  if (VAR_11 > VAR_15)
   VAR_11 = VAR_15;
  if (VAR_11 > FUNC_0(VAR_8)->i_disksize)
   FUNC_0(VAR_8)->i_disksize = VAR_11;
  FUNC_12(&FUNC_0(VAR_8)->i_data_sem);
  VAR_14 = FUNC_6(VAR_5, VAR_8);
  if (VAR_14)
   FUNC_4(VAR_8->i_sb,
       "Failed to mark inode %lu dirty",
       VAR_8->i_ino);
  if (!VAR_10)
   VAR_10 = VAR_14;
 }
 return VAR_10;
}
