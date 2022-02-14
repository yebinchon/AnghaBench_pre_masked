
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fsg_lun {scalar_t__ num_sectors; scalar_t__ blkbits; unsigned int sense_data_info; int info_valid; void* sense_data; int blksize; int filp; scalar_t__ file_length; } ;
struct fsg_common {int* cmnd; struct fsg_buffhd* next_buffhd_to_fill; struct fsg_lun* curlun; } ;
struct fsg_buffhd {int buf; } ;
typedef unsigned int ssize_t ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct fsg_lun*,char*,int,...) ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (struct fsg_lun*,char*,unsigned int,unsigned long long,int) ;
 int VAR_7 ;
 int FUNC_2 (struct fsg_lun*) ;
 scalar_t__ FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 (struct fsg_lun*) ;
 unsigned int FUNC_6 (int ,int ,unsigned int,unsigned int*) ;
 unsigned int FUNC_7 (unsigned int,scalar_t__) ;
 unsigned int FUNC_8 (unsigned int,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct fsg_common *VAR_8)
{
 struct fsg_lun *VAR_9 = VAR_8->curlun;
 u32 VAR_10;
 u32 VAR_11;
 struct fsg_buffhd *VAR_12 = VAR_8->next_buffhd_to_fill;
 loff_t VAR_13, VAR_14;
 u32 VAR_15;
 unsigned int VAR_16;
 ssize_t VAR_17;





 VAR_10 = FUNC_4(&VAR_8->cmnd[2]);
 if (VAR_10 >= VAR_9->num_sectors) {
  VAR_9->sense_data = VAR_5;
  return -VAR_1;
 }





 if (VAR_8->cmnd[1] & ~0x10) {
  VAR_9->sense_data = VAR_4;
  return -VAR_1;
 }

 VAR_11 = FUNC_3(&VAR_8->cmnd[7]);
 if (FUNC_10(VAR_11 == 0))
  return -VAR_2;


 VAR_15 = VAR_11 << VAR_9->blkbits;
 VAR_13 = ((loff_t) VAR_10) << VAR_9->blkbits;


 FUNC_2(VAR_9);
 if (FUNC_9(VAR_7))
  return -VAR_0;

 FUNC_5(VAR_9);
 if (FUNC_9(VAR_7))
  return -VAR_0;


 while (VAR_15 > 0) {






  VAR_16 = FUNC_7(VAR_15, VAR_3);
  VAR_16 = FUNC_7((loff_t)VAR_16,
        VAR_9->file_length - VAR_13);
  if (VAR_16 == 0) {
   VAR_9->sense_data =
     VAR_5;
   VAR_9->sense_data_info =
    VAR_13 >> VAR_9->blkbits;
   VAR_9->info_valid = 1;
   break;
  }


  VAR_14 = VAR_13;
  VAR_17 = FUNC_6(VAR_9->filp, VAR_12->buf, VAR_16,
    &VAR_14);
  FUNC_1(VAR_9, "file read %u @ %llu -> %d\n", VAR_16,
    (unsigned long long) VAR_13,
    (int) VAR_17);
  if (FUNC_9(VAR_7))
   return -VAR_0;

  if (VAR_17 < 0) {
   FUNC_0(VAR_9, "error in file verify: %d\n", (int)VAR_17);
   VAR_17 = 0;
  } else if (VAR_17 < VAR_16) {
   FUNC_0(VAR_9, "partial file verify: %d/%u\n",
        (int)VAR_17, VAR_16);
   VAR_17 = FUNC_8(VAR_17, VAR_9->blksize);
  }
  if (VAR_17 == 0) {
   VAR_9->sense_data = VAR_6;
   VAR_9->sense_data_info =
    VAR_13 >> VAR_9->blkbits;
   VAR_9->info_valid = 1;
   break;
  }
  VAR_13 += VAR_17;
  VAR_15 -= VAR_17;
 }
 return 0;
}
