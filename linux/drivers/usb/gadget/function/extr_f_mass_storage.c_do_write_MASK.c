
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fsg_lun {scalar_t__ num_sectors; unsigned int blkbits; unsigned int file_length; unsigned int sense_data_info; int info_valid; void* sense_data; int blksize; TYPE_2__* filp; int nofua; scalar_t__ ro; } ;
struct fsg_common {int* cmnd; scalar_t__ data_size_from_cmnd; unsigned int usb_amount_left; unsigned int residue; int short_packet_received; struct fsg_buffhd* next_buffhd_to_drain; struct fsg_buffhd* next_buffhd_to_fill; struct fsg_lun* curlun; } ;
struct fsg_buffhd {scalar_t__ state; unsigned int bulk_out_intended_length; TYPE_1__* outreq; int buf; struct fsg_buffhd* next; } ;
typedef unsigned int ssize_t ;
typedef unsigned int loff_t ;
struct TYPE_4__ {int f_lock; int f_flags; } ;
struct TYPE_3__ {scalar_t__ status; unsigned int actual; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct fsg_lun*,char*,int,...) ;
 int FUNC_1 (struct fsg_lun*,char*,unsigned int,unsigned long long,unsigned long long) ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_2 (struct fsg_lun*,char*,unsigned int,unsigned long long,int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int*) ;
 unsigned int FUNC_5 (TYPE_2__*,int ,unsigned int,unsigned int*) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;
 unsigned int FUNC_7 (unsigned int,int ) ;
 int FUNC_8 (struct fsg_common*,struct fsg_buffhd*,unsigned int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct fsg_common*,int,struct fsg_buffhd*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct fsg_common*,struct fsg_buffhd*) ;

__attribute__((used)) static int FUNC_14(struct fsg_common *VAR_13)
{
 struct fsg_lun *VAR_14 = VAR_13->curlun;
 u32 VAR_15;
 struct fsg_buffhd *VAR_16;
 int VAR_17;
 u32 VAR_18, VAR_19;
 loff_t VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23;
 ssize_t VAR_24;
 int VAR_25;

 if (VAR_14->ro) {
  VAR_14->sense_data = VAR_10;
  return -VAR_2;
 }
 FUNC_11(&VAR_14->filp->f_lock);
 VAR_14->filp->f_flags &= ~VAR_5;
 FUNC_12(&VAR_14->filp->f_lock);





 if (VAR_13->cmnd[0] == VAR_11)
  VAR_15 = FUNC_3(&VAR_13->cmnd[1]);
 else {
  VAR_15 = FUNC_4(&VAR_13->cmnd[2]);







  if (VAR_13->cmnd[1] & ~0x18) {
   VAR_14->sense_data = VAR_7;
   return -VAR_2;
  }
  if (!VAR_14->nofua && (VAR_13->cmnd[1] & 0x08)) {
   FUNC_11(&VAR_14->filp->f_lock);
   VAR_14->filp->f_flags |= VAR_5;
   FUNC_12(&VAR_14->filp->f_lock);
  }
 }
 if (VAR_15 >= VAR_14->num_sectors) {
  VAR_14->sense_data = VAR_8;
  return -VAR_2;
 }


 VAR_17 = 1;
 VAR_21 = VAR_20 = ((loff_t) VAR_15) << VAR_14->blkbits;
 VAR_18 = VAR_13->data_size_from_cmnd;
 VAR_19 = VAR_13->data_size_from_cmnd;

 while (VAR_19 > 0) {


  VAR_16 = VAR_13->next_buffhd_to_fill;
  if (VAR_16->state == VAR_0 && VAR_17) {






   VAR_23 = FUNC_6(VAR_18, VAR_4);


   if (VAR_20 >= VAR_14->file_length) {
    VAR_17 = 0;
    VAR_14->sense_data =
     VAR_8;
    VAR_14->sense_data_info =
     VAR_20 >> VAR_14->blkbits;
    VAR_14->info_valid = 1;
    continue;
   }


   VAR_20 += VAR_23;
   VAR_13->usb_amount_left -= VAR_23;
   VAR_18 -= VAR_23;
   if (VAR_18 == 0)
    VAR_17 = 0;






   FUNC_8(VAR_13, VAR_16, VAR_23);
   if (!FUNC_13(VAR_13, VAR_16))

    return -VAR_3;
   VAR_13->next_buffhd_to_fill = VAR_16->next;
   continue;
  }


  VAR_16 = VAR_13->next_buffhd_to_drain;
  if (VAR_16->state == VAR_0 && !VAR_17)
   break;


  VAR_25 = FUNC_10(VAR_13, 0, VAR_16);
  if (VAR_25)
   return VAR_25;

  VAR_13->next_buffhd_to_drain = VAR_16->next;
  VAR_16->state = VAR_0;


  if (VAR_16->outreq->status != 0) {
   VAR_14->sense_data = VAR_6;
   VAR_14->sense_data_info =
     VAR_21 >> VAR_14->blkbits;
   VAR_14->info_valid = 1;
   break;
  }

  VAR_23 = VAR_16->outreq->actual;
  if (VAR_14->file_length - VAR_21 < VAR_23) {
   FUNC_1(VAR_14, "write %u @ %llu beyond end %llu\n",
           VAR_23, (unsigned long long)VAR_21,
           (unsigned long long)VAR_14->file_length);
   VAR_23 = VAR_14->file_length - VAR_21;
  }





  VAR_23 = FUNC_6(VAR_23, VAR_16->bulk_out_intended_length);


  VAR_23 = FUNC_7(VAR_23, VAR_14->blksize);
  if (VAR_23 == 0)
   goto empty_write;


  VAR_22 = VAR_21;
  VAR_24 = FUNC_5(VAR_14->filp, VAR_16->buf, VAR_23,
    &VAR_22);
  FUNC_2(VAR_14, "file write %u @ %llu -> %d\n", VAR_23,
    (unsigned long long)VAR_21, (int)VAR_24);
  if (FUNC_9(VAR_12))
   return -VAR_1;

  if (VAR_24 < 0) {
   FUNC_0(VAR_14, "error in file write: %d\n",
     (int) VAR_24);
   VAR_24 = 0;
  } else if (VAR_24 < VAR_23) {
   FUNC_0(VAR_14, "partial file write: %d/%u\n",
     (int) VAR_24, VAR_23);
   VAR_24 = FUNC_7(VAR_24, VAR_14->blksize);
  }
  VAR_21 += VAR_24;
  VAR_19 -= VAR_24;
  VAR_13->residue -= VAR_24;


  if (VAR_24 < VAR_23) {
   VAR_14->sense_data = VAR_9;
   VAR_14->sense_data_info =
     VAR_21 >> VAR_14->blkbits;
   VAR_14->info_valid = 1;
   break;
  }

 empty_write:

  if (VAR_16->outreq->actual < VAR_16->bulk_out_intended_length) {
   VAR_13->short_packet_received = 1;
   break;
  }
 }

 return -VAR_3;
}
