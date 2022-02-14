
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned char u8 ;
struct TYPE_5__ {int status; } ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct vub300_mmc_host {int datasize; unsigned char* padded_buffer; TYPE_1__ sg_request; TYPE_3__ sg_transfer_timer; int command_res_urb; int command_out_urb; int udev; scalar_t__ large_usb_packets; int data_out_ep; } ;
struct mmc_data {int bytes_xfered; int sg_len; int sg; } ;
struct mmc_command {int error; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int ,unsigned char*,int) ;
 int FUNC_7 (TYPE_1__*,int ,unsigned int,int ,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 unsigned int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct vub300_mmc_host*,unsigned int,unsigned char*,int,int*,int) ;

__attribute__((used)) static int FUNC_12(struct vub300_mmc_host *VAR_3,
    struct mmc_command *VAR_4, struct mmc_data *VAR_5)
{

 unsigned VAR_6 = FUNC_9(VAR_3->udev, VAR_3->data_out_ep);
 int VAR_7 = VAR_3->datasize;
 int VAR_8 = VAR_7 & 0x003F;
 int VAR_9 = VAR_7 & 0x01FF;
 if (VAR_7 < 64) {
  int VAR_10;
  int VAR_11;
  FUNC_6(VAR_5->sg, VAR_5->sg_len,
      VAR_3->padded_buffer,
      sizeof(VAR_3->padded_buffer));
  FUNC_4(VAR_3->padded_buffer + VAR_7, 0,
         sizeof(VAR_3->padded_buffer) - VAR_7);
  VAR_10 = FUNC_11(VAR_3, VAR_6, VAR_3->padded_buffer,
          sizeof(VAR_3->padded_buffer),
          &VAR_11, 2000 +
          (sizeof(VAR_3->padded_buffer) /
           16384));
  if (VAR_10 < 0) {
   VAR_4->error = VAR_10;
   VAR_5->bytes_xfered = 0;
  } else {
   VAR_5->bytes_xfered = VAR_3->datasize;
  }
 } else if ((!VAR_3->large_usb_packets && (0 < VAR_8)) ||
      (VAR_3->large_usb_packets && (64 > VAR_9))
  ) {
  int VAR_12 = ((63 + VAR_7) >> 6) << 6;
  u8 *VAR_13 = FUNC_3(VAR_12, VAR_1);
  if (VAR_13) {
   int VAR_14;
   int VAR_15;
   FUNC_6(VAR_5->sg, VAR_5->sg_len, VAR_13,
       VAR_12);
   FUNC_4(VAR_13 + VAR_7, 0,
          VAR_12 - VAR_7);
   VAR_14 =
    FUNC_11(VAR_3, VAR_6, VAR_13,
          VAR_12, &VAR_15,
          2000 + VAR_12 / 16384);
   FUNC_2(VAR_13);
   if (VAR_14 < 0) {
    VAR_4->error = VAR_14;
    VAR_5->bytes_xfered = 0;
   } else {
    VAR_5->bytes_xfered = VAR_3->datasize;
   }
  } else {
   VAR_4->error = -VAR_0;
   VAR_5->bytes_xfered = 0;
  }
 } else {
  int VAR_16;
  unsigned char VAR_17[64 * 4];
  FUNC_6(VAR_5->sg, VAR_5->sg_len, VAR_17, sizeof(VAR_17));
  VAR_16 = FUNC_7(&VAR_3->sg_request, VAR_3->udev,
         VAR_6, 0, VAR_5->sg,
         VAR_5->sg_len, 0, VAR_1);
  if (VAR_16 < 0) {
   FUNC_10(VAR_3->command_out_urb);
   FUNC_10(VAR_3->command_res_urb);
   VAR_4->error = VAR_16;
   VAR_5->bytes_xfered = 0;
  } else {
   VAR_3->sg_transfer_timer.expires =
    VAR_2 + FUNC_5(2000 +
          VAR_7 / 16384);
   FUNC_0(&VAR_3->sg_transfer_timer);
   FUNC_8(&VAR_3->sg_request);
   if (VAR_4->error) {
    VAR_5->bytes_xfered = 0;
   } else {
    FUNC_1(&VAR_3->sg_transfer_timer);
    if (VAR_3->sg_request.status < 0) {
     VAR_4->error = VAR_3->sg_request.status;
     VAR_5->bytes_xfered = 0;
    } else {
     VAR_5->bytes_xfered = VAR_3->datasize;
    }
   }
  }
 }
 return VAR_7;
}
