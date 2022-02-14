
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ actual; scalar_t__ status; struct bulk_cb_wrap* buf; } ;
struct fsg_dev {int bulk_out; int atomic_bitflags; struct fsg_common* common; } ;
struct fsg_common {scalar_t__ cmnd_size; scalar_t__ data_size; scalar_t__ lun; int tag; int * curlun; int ** luns; int data_dir; int cmnd; scalar_t__ can_stall; } ;
struct fsg_buffhd {struct usb_request* outreq; } ;
struct bulk_cb_wrap {scalar_t__ Signature; scalar_t__ Lun; int Flags; scalar_t__ Length; scalar_t__ DataTransferLength; int Tag; int CDB; } ;


 scalar_t__ FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fsg_dev*,char*,scalar_t__,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct fsg_dev*,int ) ;
 int FUNC_4 (struct fsg_dev*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct fsg_dev*) ;

__attribute__((used)) static int FUNC_10(struct fsg_dev *VAR_9, struct fsg_buffhd *VAR_10)
{
 struct usb_request *VAR_11 = VAR_10->outreq;
 struct bulk_cb_wrap *VAR_12 = VAR_11->buf;
 struct fsg_common *VAR_13 = VAR_9->common;


 if (VAR_11->status || FUNC_8(VAR_4, &VAR_9->atomic_bitflags))
  return -VAR_3;


 if (VAR_11->actual != VAR_7 ||
   VAR_12->Signature != FUNC_2(
    VAR_6)) {
  FUNC_1(VAR_9, "invalid CBW: len %u sig 0x%x\n",
    VAR_11->actual,
    FUNC_5(VAR_12->Signature));
  FUNC_9(VAR_9);
  FUNC_7(VAR_4, &VAR_9->atomic_bitflags);
  return -VAR_3;
 }


 if (VAR_12->Lun >= FUNC_0(VAR_13->luns) ||
     VAR_12->Flags & ~VAR_8 || VAR_12->Length <= 0 ||
     VAR_12->Length > VAR_5) {
  FUNC_1(VAR_9, "non-meaningful CBW: lun = %u, flags = 0x%x, "
    "cmdlen %u\n",
    VAR_12->Lun, VAR_12->Flags, VAR_12->Length);





  if (VAR_13->can_stall) {
   FUNC_3(VAR_9, VAR_9->bulk_out);
   FUNC_4(VAR_9);
  }
  return -VAR_3;
 }


 VAR_13->cmnd_size = VAR_12->Length;
 FUNC_6(VAR_13->cmnd, VAR_12->CDB, VAR_13->cmnd_size);
 if (VAR_12->Flags & VAR_8)
  VAR_13->data_dir = VAR_2;
 else
  VAR_13->data_dir = VAR_0;
 VAR_13->data_size = FUNC_5(VAR_12->DataTransferLength);
 if (VAR_13->data_size == 0)
  VAR_13->data_dir = VAR_1;
 VAR_13->lun = VAR_12->Lun;
 if (VAR_13->lun < FUNC_0(VAR_13->luns))
  VAR_13->curlun = VAR_13->luns[VAR_13->lun];
 else
  VAR_13->curlun = ((void*)0);
 VAR_13->tag = VAR_12->Tag;
 return 0;
}
