
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct usb_ctrlrequest {int dummy; } ;
struct urb {int transfer_buffer_length; void* setup_packet; int transfer_flags; int pipe; void* transfer_buffer; int dev; scalar_t__ transfer_dma; } ;
struct list_head {int dummy; } ;
struct isp1760_qtd {int qtd_list; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,unsigned long,int) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (int ) ;
 struct isp1760_qtd* FUNC_4 (int ,struct urb*,scalar_t__) ;
 int FUNC_5 (struct isp1760_qtd*,void*,int) ;
 int FUNC_6 (struct list_head*) ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct usb_hcd *VAR_4,
  struct urb *VAR_5, struct list_head *VAR_6, gfp_t VAR_7)
{
 struct isp1760_qtd *VAR_8;
 void *VAR_9;
 int VAR_10, VAR_11;
 u8 VAR_12;





 if (!VAR_5->transfer_buffer && VAR_5->transfer_buffer_length) {

  FUNC_1(VAR_4->self.controller,
    "buf is null, dma is %08lx len is %d\n",
    (long unsigned)VAR_5->transfer_dma,
    VAR_5->transfer_buffer_length);
  FUNC_0(1);
 }

 if (FUNC_10(VAR_5->pipe))
  VAR_12 = VAR_0;
 else
  VAR_12 = VAR_1;

 if (FUNC_9(VAR_5->pipe)) {
  VAR_8 = FUNC_4(VAR_7, VAR_5, VAR_2);
  if (!VAR_8)
   goto cleanup;
  FUNC_5(VAR_8, VAR_5->setup_packet, sizeof(struct usb_ctrlrequest));
  FUNC_2(&VAR_8->qtd_list, VAR_6);


  if (VAR_5->transfer_buffer_length == 0)
   VAR_12 = VAR_0;
 }

 VAR_11 = FUNC_3(FUNC_7(VAR_5->dev, VAR_5->pipe,
      FUNC_11(VAR_5->pipe)));






 VAR_9 = VAR_5->transfer_buffer;
 VAR_10 = VAR_5->transfer_buffer_length;

 for (;;) {
  int VAR_13;

  VAR_8 = FUNC_4(VAR_7, VAR_5, VAR_12);
  if (!VAR_8)
   goto cleanup;
  VAR_13 = FUNC_5(VAR_8, VAR_9, VAR_10);
  FUNC_2(&VAR_8->qtd_list, VAR_6);

  VAR_10 -= VAR_13;
  VAR_9 += VAR_13;

  if (VAR_10 <= 0)
   break;
 }





 if (VAR_5->transfer_buffer_length != 0) {
  int VAR_14 = 0;

  if (FUNC_9(VAR_5->pipe)) {
   VAR_14 = 1;
   if (VAR_12 == VAR_0)
    VAR_12 = VAR_1;
   else
    VAR_12 = VAR_0;
  } else if (FUNC_8(VAR_5->pipe)
    && (VAR_5->transfer_flags & VAR_3)
    && !(VAR_5->transfer_buffer_length %
       VAR_11)) {
   VAR_14 = 1;
  }
  if (VAR_14) {
   VAR_8 = FUNC_4(VAR_7, VAR_5, VAR_12);
   if (!VAR_8)
    goto cleanup;


   FUNC_5(VAR_8, ((void*)0), 0);
   FUNC_2(&VAR_8->qtd_list, VAR_6);
  }
 }

 return;

cleanup:
 FUNC_6(VAR_6);
}
