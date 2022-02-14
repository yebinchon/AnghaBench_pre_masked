
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ status; } ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct vub300_mmc_host {int datasize; int data_inp_ep; int udev; TYPE_1__ sg_request; TYPE_3__ sg_transfer_timer; int command_res_urb; int command_out_urb; scalar_t__ large_usb_packets; } ;
struct mmc_data {int bytes_xfered; int sg_len; int sg; } ;
struct mmc_command {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int *,int) ;
 unsigned int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,unsigned int,int ,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct vub300_mmc_host*,unsigned int,int *,int,int*,int) ;

__attribute__((used)) static int FUNC_11(struct vub300_mmc_host *VAR_5,
          struct mmc_command *VAR_6, struct mmc_data *VAR_7)
{

 int VAR_8 = VAR_5->datasize;
 int VAR_9 = VAR_5->large_usb_packets ?
  ((511 + VAR_8) >> 9) << 9 :
  ((63 + VAR_8) >> 6) << 6;
 if ((VAR_9 == VAR_8) || !VAR_4) {
  int VAR_10;
  unsigned VAR_11;
  VAR_11 = FUNC_6(VAR_5->udev, VAR_5->data_inp_ep);
  VAR_10 = FUNC_7(&VAR_5->sg_request, VAR_5->udev,
         VAR_11, 0, VAR_7->sg,
         VAR_7->sg_len, 0, VAR_2);
  if (VAR_10 < 0) {
   FUNC_9(VAR_5->command_out_urb);
   FUNC_9(VAR_5->command_res_urb);
   VAR_6->error = VAR_10;
   VAR_7->bytes_xfered = 0;
   return 0;
  } else {
   VAR_5->sg_transfer_timer.expires =
    VAR_3 + FUNC_4(2000 +
        (VAR_8 / 16384));
   FUNC_0(&VAR_5->sg_transfer_timer);
   FUNC_8(&VAR_5->sg_request);
   FUNC_1(&VAR_5->sg_transfer_timer);
   if (VAR_5->sg_request.status < 0) {
    VAR_6->error = VAR_5->sg_request.status;
    VAR_7->bytes_xfered = 0;
    return 0;
   } else {
    VAR_7->bytes_xfered = VAR_5->datasize;
    return VAR_8;
   }
  }
 } else {
  u8 *VAR_12 = FUNC_3(VAR_9, VAR_2);
  if (VAR_12) {
   int VAR_13;
   unsigned VAR_14 = FUNC_6(VAR_5->udev,
       VAR_5->data_inp_ep);
   int VAR_15 = 0;
   VAR_13 = FUNC_10(VAR_5, VAR_14, VAR_12,
          VAR_9, &VAR_15,
          2000 + (VAR_9 / 16384));
   if (VAR_13 < 0) {
    VAR_6->error = VAR_13;
    VAR_7->bytes_xfered = 0;
    FUNC_2(VAR_12);
    return 0;
   } else if (VAR_15 < VAR_8) {
    VAR_6->error = -VAR_1;
    VAR_7->bytes_xfered = 0;
    FUNC_2(VAR_12);
    return 0;
   } else {
    FUNC_5(VAR_7->sg, VAR_7->sg_len, VAR_12,
          VAR_8);
    FUNC_2(VAR_12);
    VAR_7->bytes_xfered = VAR_5->datasize;
    return VAR_8;
   }
  } else {
   VAR_6->error = -VAR_0;
   VAR_7->bytes_xfered = 0;
   return 0;
  }
 }
}
