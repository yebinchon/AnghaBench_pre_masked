
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fsg_lun {scalar_t__ num_sectors; unsigned int blkbits; unsigned int sense_data_info; int info_valid; void* sense_data; int blksize; int filp; scalar_t__ file_length; } ;
struct fsg_common {int* cmnd; scalar_t__ data_size_from_cmnd; unsigned int residue; struct fsg_buffhd* next_buffhd_to_fill; struct fsg_lun* curlun; } ;
struct fsg_buffhd {struct fsg_buffhd* next; TYPE_1__* inreq; void* state; int buf; } ;
typedef unsigned int ssize_t ;
typedef unsigned int loff_t ;
struct TYPE_2__ {unsigned int length; scalar_t__ zero; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct fsg_lun*,char*,int,...) ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (struct fsg_lun*,char*,unsigned int,unsigned long long,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int*) ;
 unsigned int FUNC_4 (int ,int ,unsigned int,unsigned int*) ;
 unsigned int FUNC_5 (unsigned int,scalar_t__) ;
 unsigned int FUNC_6 (unsigned int,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct fsg_common*,int,struct fsg_buffhd*) ;
 int FUNC_9 (struct fsg_common*,struct fsg_buffhd*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct fsg_common *VAR_10)
{
 struct fsg_lun *VAR_11 = VAR_10->curlun;
 u32 VAR_12;
 struct fsg_buffhd *VAR_13;
 int VAR_14;
 u32 VAR_15;
 loff_t VAR_16, VAR_17;
 unsigned int VAR_18;
 ssize_t VAR_19;





 if (VAR_10->cmnd[0] == VAR_5)
  VAR_12 = FUNC_2(&VAR_10->cmnd[1]);
 else {
  VAR_12 = FUNC_3(&VAR_10->cmnd[2]);






  if ((VAR_10->cmnd[1] & ~0x18) != 0) {
   VAR_11->sense_data = VAR_6;
   return -VAR_2;
  }
 }
 if (VAR_12 >= VAR_11->num_sectors) {
  VAR_11->sense_data = VAR_7;
  return -VAR_2;
 }
 VAR_16 = ((loff_t) VAR_12) << VAR_11->blkbits;


 VAR_15 = VAR_10->data_size_from_cmnd;
 if (FUNC_10(VAR_15 == 0))
  return -VAR_3;

 for (;;) {






  VAR_18 = FUNC_5(VAR_15, VAR_4);
  VAR_18 = FUNC_5((loff_t)VAR_18,
        VAR_11->file_length - VAR_16);


  VAR_13 = VAR_10->next_buffhd_to_fill;
  VAR_14 = FUNC_8(VAR_10, 0, VAR_13);
  if (VAR_14)
   return VAR_14;





  if (VAR_18 == 0) {
   VAR_11->sense_data =
     VAR_7;
   VAR_11->sense_data_info =
     VAR_16 >> VAR_11->blkbits;
   VAR_11->info_valid = 1;
   VAR_13->inreq->length = 0;
   VAR_13->state = VAR_0;
   break;
  }


  VAR_17 = VAR_16;
  VAR_19 = FUNC_4(VAR_11->filp, VAR_13->buf, VAR_18,
    &VAR_17);
  FUNC_1(VAR_11, "file read %u @ %llu -> %d\n", VAR_18,
        (unsigned long long)VAR_16, (int)VAR_19);
  if (FUNC_7(VAR_9))
   return -VAR_1;

  if (VAR_19 < 0) {
   FUNC_0(VAR_11, "error in file read: %d\n", (int)VAR_19);
   VAR_19 = 0;
  } else if (VAR_19 < VAR_18) {
   FUNC_0(VAR_11, "partial file read: %d/%u\n",
        (int)VAR_19, VAR_18);
   VAR_19 = FUNC_6(VAR_19, VAR_11->blksize);
  }
  VAR_16 += VAR_19;
  VAR_15 -= VAR_19;
  VAR_10->residue -= VAR_19;






  VAR_13->inreq->length = VAR_19;
  VAR_13->state = VAR_0;


  if (VAR_19 < VAR_18) {
   VAR_11->sense_data = VAR_8;
   VAR_11->sense_data_info =
     VAR_16 >> VAR_11->blkbits;
   VAR_11->info_valid = 1;
   break;
  }

  if (VAR_15 == 0)
   break;


  VAR_13->inreq->zero = 0;
  if (!FUNC_9(VAR_10, VAR_13))

   return -VAR_3;
  VAR_10->next_buffhd_to_fill = VAR_13->next;
 }

 return -VAR_3;
}
