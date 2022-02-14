
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct us_data {scalar_t__ iobuf; TYPE_1__* current_urb; int dflags; int iobuf_dma; } ;
struct completion {int dummy; } ;
struct TYPE_4__ {scalar_t__ transfer_buffer; int status; int transfer_dma; int transfer_flags; struct completion* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct completion*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct us_data*,char*,...) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 long FUNC_9 (struct completion*,int ) ;

__attribute__((used)) static int FUNC_10(struct us_data *VAR_6, int VAR_7)
{
 struct completion VAR_8;
 long VAR_9;
 int VAR_10;


 if (FUNC_4(VAR_4, &VAR_6->dflags))
  return -VAR_0;


 FUNC_1(&VAR_8);


 VAR_6->current_urb->context = &VAR_8;
 VAR_6->current_urb->transfer_flags = 0;







 if (VAR_6->current_urb->transfer_buffer == VAR_6->iobuf)
  VAR_6->current_urb->transfer_flags |= VAR_3;
 VAR_6->current_urb->transfer_dma = VAR_6->iobuf_dma;


 VAR_10 = FUNC_7(VAR_6->current_urb, VAR_1);
 if (VAR_10) {

  return VAR_10;
 }





 FUNC_2(VAR_5, &VAR_6->dflags);


 if (FUNC_4(VAR_4, &VAR_6->dflags)) {


  if (FUNC_3(VAR_5, &VAR_6->dflags)) {
   FUNC_6(VAR_6, "-- cancelling URB\n");
   FUNC_8(VAR_6->current_urb);
  }
 }


 VAR_9 = FUNC_9(
   &VAR_8, VAR_7 ? : VAR_2);

 FUNC_0(VAR_5, &VAR_6->dflags);

 if (VAR_9 <= 0) {
  FUNC_6(VAR_6, "%s -- cancelling URB\n",
        VAR_9 == 0 ? "Timeout" : "Signal");
  FUNC_5(VAR_6->current_urb);
 }


 return VAR_6->current_urb->status;
}
