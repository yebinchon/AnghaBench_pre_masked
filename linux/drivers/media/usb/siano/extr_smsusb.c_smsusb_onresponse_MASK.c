
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ status; scalar_t__ actual_length; scalar_t__ context; } ;
struct smsusb_urb_t {int wq; TYPE_1__* cb; struct smsusb_device_t* dev; } ;
struct smsusb_device_t {scalar_t__ response_alignment; int coredev; } ;
struct sms_msg_hdr {scalar_t__ msg_length; int msg_flags; int msg_type; } ;
struct sms_msg_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ offset; scalar_t__ p; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,struct sms_msg_hdr*,int) ;
 int FUNC_2 (char*,int ,int ,scalar_t__) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sms_msg_hdr*) ;
 int FUNC_8 (struct sms_msg_data*) ;

__attribute__((used)) static void FUNC_9(struct urb *VAR_3)
{
 struct smsusb_urb_t *VAR_4 = (struct smsusb_urb_t *) VAR_3->context;
 struct smsusb_device_t *VAR_5 = VAR_4->dev;

 if (VAR_3->status == -VAR_0) {
  FUNC_3("error, urb status %d (-ESHUTDOWN), %d bytes\n",
   VAR_3->status, VAR_3->actual_length);
  return;
 }

 if ((VAR_3->actual_length > 0) && (VAR_3->status == 0)) {
  struct sms_msg_hdr *VAR_6 = (struct sms_msg_hdr *)VAR_4->cb->p;

  FUNC_7(VAR_6);
  if (VAR_3->actual_length >= VAR_6->msg_length) {
   VAR_4->cb->size = VAR_6->msg_length;

   if (VAR_5->response_alignment &&
       (VAR_6->msg_flags & VAR_1)) {

    VAR_4->cb->offset =
     VAR_5->response_alignment +
     ((VAR_6->msg_flags >> 8) & 3);


    if (((int) VAR_6->msg_length +
         VAR_4->cb->offset) > VAR_3->actual_length) {
     FUNC_3("invalid response msglen %d offset %d size %d\n",
      VAR_6->msg_length,
      VAR_4->cb->offset,
      VAR_3->actual_length);
     goto exit_and_resubmit;
    }



    FUNC_1((char *) VAR_6 + VAR_4->cb->offset,
           VAR_6, sizeof(struct sms_msg_hdr));
   } else
    VAR_4->cb->offset = 0;

   FUNC_2("received %s(%d) size: %d\n",
      FUNC_6(VAR_6->msg_type),
      VAR_6->msg_type, VAR_6->msg_length);

   FUNC_8((struct sms_msg_data *) VAR_6);

   FUNC_5(VAR_5->coredev, VAR_4->cb);
   VAR_4->cb = ((void*)0);
  } else {
   FUNC_3("invalid response msglen %d actual %d\n",
    VAR_6->msg_length, VAR_3->actual_length);
  }
 } else
  FUNC_3("error, urb status %d, %d bytes\n",
   VAR_3->status, VAR_3->actual_length);


exit_and_resubmit:
 FUNC_0(&VAR_4->wq, VAR_2);
 FUNC_4(&VAR_4->wq);
}
