
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct timespec64 {int dummy; } ;
struct super_block {scalar_t__ s_blocksize; } ;
struct TYPE_3__ {scalar_t__ isvfat; } ;
struct msdos_sb_info {TYPE_1__ options; } ;
struct msdos_dir_entry {scalar_t__ size; void* cdate; void* adate; scalar_t__ ctime_cs; void* ctime; void* date; void* time; scalar_t__ lcase; int attr; int name; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;
typedef void* __le16 ;
struct TYPE_4__ {int i_logstart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_5 ;
 struct msdos_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct inode*,int*,int) ;
 int FUNC_3 (struct msdos_sb_info*,int) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (struct msdos_dir_entry*,int) ;
 int FUNC_6 (struct msdos_sb_info*,struct timespec64*,void**,void**,scalar_t__*) ;
 int FUNC_7 (struct inode*,int ,int,struct buffer_head**,int) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*,struct inode*) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct msdos_dir_entry*,int ,scalar_t__) ;
 struct buffer_head* FUNC_12 (struct super_block*,int ) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*) ;

int FUNC_15(struct inode *VAR_6, struct timespec64 *VAR_7)
{
 struct super_block *VAR_8 = VAR_6->i_sb;
 struct msdos_sb_info *VAR_9 = FUNC_1(VAR_8);
 struct buffer_head *VAR_10[VAR_2];
 struct msdos_dir_entry *VAR_11;
 sector_t VAR_12;
 __le16 VAR_13, VAR_14;
 u8 VAR_15;
 int VAR_16, VAR_17;

 VAR_16 = FUNC_2(VAR_6, &VAR_17, 1);
 if (VAR_16)
  goto error;

 VAR_12 = FUNC_3(VAR_9, VAR_17);
 VAR_10[0] = FUNC_12(VAR_8, VAR_12);
 if (!VAR_10[0]) {
  VAR_16 = -VAR_1;
  goto error_free;
 }

 FUNC_6(VAR_9, VAR_7, &VAR_14, &VAR_13, &VAR_15);

 VAR_11 = (struct msdos_dir_entry *)VAR_10[0]->b_data;

 FUNC_8(VAR_10[0]);

 FUNC_10(VAR_11[0].name, VAR_3, VAR_5);
 FUNC_10(VAR_11[1].name, VAR_4, VAR_5);
 VAR_11->attr = VAR_11[1].attr = VAR_0;
 VAR_11[0].lcase = VAR_11[1].lcase = 0;
 VAR_11[0].time = VAR_11[1].time = VAR_14;
 VAR_11[0].date = VAR_11[1].date = VAR_13;
 if (VAR_9->options.isvfat) {

  VAR_11[0].ctime = VAR_11[1].ctime = VAR_14;
  VAR_11[0].ctime_cs = VAR_11[1].ctime_cs = VAR_15;
  VAR_11[0].adate = VAR_11[0].cdate = VAR_11[1].adate = VAR_11[1].cdate = VAR_13;
 } else {
  VAR_11[0].ctime = VAR_11[1].ctime = 0;
  VAR_11[0].ctime_cs = VAR_11[1].ctime_cs = 0;
  VAR_11[0].adate = VAR_11[0].cdate = VAR_11[1].adate = VAR_11[1].cdate = 0;
 }
 FUNC_5(&VAR_11[0], VAR_17);
 FUNC_5(&VAR_11[1], FUNC_0(VAR_6)->i_logstart);
 VAR_11[0].size = VAR_11[1].size = 0;
 FUNC_11(VAR_11 + 2, 0, VAR_8->s_blocksize - 2 * sizeof(*VAR_11));
 FUNC_13(VAR_10[0]);
 FUNC_14(VAR_10[0]);
 FUNC_9(VAR_10[0], VAR_6);

 VAR_16 = FUNC_7(VAR_6, VAR_12, 1, VAR_10, VAR_2);
 if (VAR_16)
  goto error_free;

 return VAR_17;

error_free:
 FUNC_4(VAR_6, VAR_17);
error:
 return VAR_16;
}
