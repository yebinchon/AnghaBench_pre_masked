
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {unsigned int transfer_flags; int actual_length; int status; } ;
struct sisusb_usb_data {int* urbstatus; int wait_q; TYPE_1__* urbout_context; int sisusb_dev; struct urb** sisurbout; } ;
struct TYPE_2__ {int* actual_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct urb*,int ,unsigned int,void*,int,int ,TYPE_1__*) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct urb*,int ) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct sisusb_usb_data *VAR_4, int VAR_5,
  unsigned int VAR_6, void *VAR_7, int VAR_8, int *VAR_9,
  int VAR_10, unsigned int VAR_11)
{
 struct urb *VAR_12 = VAR_4->sisurbout[VAR_5];
 int VAR_13, VAR_14 = 0;


 VAR_12->transfer_flags = 0;

 FUNC_0(VAR_12, VAR_4->sisusb_dev, VAR_6, VAR_7, VAR_8,
   VAR_3,
   &VAR_4->urbout_context[VAR_5]);

 VAR_12->transfer_flags |= VAR_11;
 VAR_12->actual_length = 0;


 VAR_4->urbout_context[VAR_5].actual_length = (VAR_10) ?
   ((void*)0) : VAR_9;


 VAR_4->urbstatus[VAR_5] |= VAR_2;


 VAR_13 = FUNC_2(VAR_12, VAR_1);


 if ((VAR_13 == 0) && VAR_10) {
  FUNC_3(VAR_4->wait_q,
    (!(VAR_4->urbstatus[VAR_5] & VAR_2)),
    VAR_10);
  if (VAR_4->urbstatus[VAR_5] & VAR_2) {

   FUNC_1(VAR_12);
   VAR_13 = -VAR_0;
  } else {

   VAR_13 = VAR_12->status;
   VAR_14 = VAR_12->actual_length;
  }
 }

 if (VAR_9)
  *VAR_9 = VAR_14;

 return VAR_13;
}
