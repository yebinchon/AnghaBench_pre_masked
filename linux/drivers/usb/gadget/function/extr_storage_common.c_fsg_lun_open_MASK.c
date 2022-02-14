
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_bdev; TYPE_1__* i_mapping; int i_mode; } ;
struct fsg_lun {int initially_ro; unsigned int blksize; unsigned int blkbits; int ro; unsigned int file_length; unsigned int num_sectors; struct file* filp; scalar_t__ cdrom; } ;
struct file {int f_mode; } ;
typedef unsigned int loff_t ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct fsg_lun*,char*,char const*) ;
 int FUNC_2 (struct fsg_lun*,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (scalar_t__) ;
 unsigned int FUNC_7 (unsigned int) ;
 struct inode* FUNC_8 (struct file*) ;
 struct file* FUNC_9 (char const*,int,int ) ;
 int FUNC_10 (struct file*) ;
 int FUNC_11 (struct fsg_lun*) ;
 scalar_t__ FUNC_12 (struct fsg_lun*) ;
 unsigned int FUNC_13 (int ) ;

int FUNC_14(struct fsg_lun *VAR_10, const char *VAR_11)
{
 int VAR_12;
 struct file *VAR_13 = ((void*)0);
 int VAR_14 = -VAR_1;
 struct inode *VAR_15 = ((void*)0);
 loff_t VAR_16;
 loff_t VAR_17;
 loff_t VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20;


 VAR_12 = VAR_10->initially_ro;
 if (!VAR_12) {
  VAR_13 = FUNC_9(VAR_11, VAR_9 | VAR_7, 0);
  if (FUNC_3(VAR_13) == -VAR_2 || FUNC_3(VAR_13) == -VAR_0)
   VAR_12 = 1;
 }
 if (VAR_12)
  VAR_13 = FUNC_9(VAR_11, VAR_8 | VAR_7, 0);
 if (FUNC_0(VAR_13)) {
  FUNC_2(VAR_10, "unable to open backing file: %s\n", VAR_11);
  return FUNC_3(VAR_13);
 }

 if (!(VAR_13->f_mode & VAR_6))
  VAR_12 = 1;

 VAR_15 = FUNC_8(VAR_13);
 if ((!FUNC_5(VAR_15->i_mode) && !FUNC_4(VAR_15->i_mode))) {
  FUNC_2(VAR_10, "invalid file type: %s\n", VAR_11);
  goto out;
 }





 if (!(VAR_13->f_mode & VAR_4)) {
  FUNC_2(VAR_10, "file not readable: %s\n", VAR_11);
  goto out;
 }
 if (!(VAR_13->f_mode & VAR_5))
  VAR_12 = 1;

 VAR_16 = FUNC_13(VAR_15->i_mapping->host);
 if (VAR_16 < 0) {
  FUNC_2(VAR_10, "unable to find file size: %s\n", VAR_11);
  VAR_14 = (int) VAR_16;
  goto out;
 }

 if (VAR_10->cdrom) {
  VAR_20 = 2048;
  VAR_19 = 11;
 } else if (VAR_15->i_bdev) {
  VAR_20 = FUNC_6(VAR_15->i_bdev);
  VAR_19 = FUNC_7(VAR_20);
 } else {
  VAR_20 = 512;
  VAR_19 = 9;
 }

 VAR_17 = VAR_16 >> VAR_19;
 VAR_18 = 1;
 if (VAR_10->cdrom) {
  VAR_18 = 300;
  if (VAR_17 >= 256*60*75) {
   VAR_17 = 256*60*75 - 1;
   FUNC_2(VAR_10, "file too big: %s\n", VAR_11);
   FUNC_2(VAR_10, "using only first %d blocks\n",
     (int) VAR_17);
  }
 }
 if (VAR_17 < VAR_18) {
  FUNC_2(VAR_10, "file too small: %s\n", VAR_11);
  VAR_14 = -VAR_3;
  goto out;
 }

 if (FUNC_12(VAR_10))
  FUNC_11(VAR_10);

 VAR_10->blksize = VAR_20;
 VAR_10->blkbits = VAR_19;
 VAR_10->ro = VAR_12;
 VAR_10->filp = VAR_13;
 VAR_10->file_length = VAR_16;
 VAR_10->num_sectors = VAR_17;
 FUNC_1(VAR_10, "open backing file: %s\n", VAR_11);
 return 0;

out:
 FUNC_10(VAR_13);
 return VAR_14;
}
