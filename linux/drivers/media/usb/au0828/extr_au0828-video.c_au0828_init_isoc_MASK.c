
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int number_of_packets; int transfer_flags; TYPE_1__* iso_frame_desc; int transfer_dma; } ;
struct au0828_dmaqueue {int dummy; } ;
struct TYPE_4__ {int (* isoc_copy ) (struct au0828_dev*,struct urb*) ;int num_bufs; int max_pkt_size; struct urb** urb; int * transfer_buffer; int * buf; } ;
struct au0828_dev {TYPE_2__ isoc_ctl; int usbdev; int isoc_in_endpointaddr; struct au0828_dmaqueue vidq; } ;
struct TYPE_3__ {int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct au0828_dev*) ;
 scalar_t__ FUNC_2 () ;
 void* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct urb**) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*,int,int,char*) ;
 int FUNC_7 (int ,int,int ,int *) ;
 struct urb* FUNC_8 (int,int ) ;
 int FUNC_9 (struct urb*,int ,int,int ,int,int ,struct au0828_dmaqueue*,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_12(struct au0828_dev *VAR_6, int VAR_7,
       int VAR_8, int VAR_9,
       int (*VAR_10) (struct au0828_dev *VAR_11, struct urb *VAR_12))
{
 struct au0828_dmaqueue *VAR_13 = &VAR_6->vidq;
 int VAR_14;
 int VAR_15, VAR_16;
 struct urb *VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;

 FUNC_0("au0828: called au0828_prepare_isoc\n");

 VAR_6->isoc_ctl.isoc_copy = VAR_10;
 VAR_6->isoc_ctl.num_bufs = VAR_8;

 VAR_6->isoc_ctl.urb = FUNC_3(VAR_8, sizeof(void *), VAR_2);
 if (!VAR_6->isoc_ctl.urb) {
  FUNC_0("cannot alloc memory for usb buffers\n");
  return -VAR_0;
 }

 VAR_6->isoc_ctl.transfer_buffer = FUNC_3(VAR_8, sizeof(void *),
      VAR_2);
 if (!VAR_6->isoc_ctl.transfer_buffer) {
  FUNC_0("cannot allocate memory for usb transfer\n");
  FUNC_4(VAR_6->isoc_ctl.urb);
  return -VAR_0;
 }

 VAR_6->isoc_ctl.max_pkt_size = VAR_9;
 VAR_6->isoc_ctl.buf = ((void*)0);

 VAR_15 = VAR_7 * VAR_6->isoc_ctl.max_pkt_size;


 for (VAR_14 = 0; VAR_14 < VAR_6->isoc_ctl.num_bufs; VAR_14++) {
  VAR_17 = FUNC_8(VAR_7, VAR_2);
  if (!VAR_17) {
   FUNC_1(VAR_6);
   return -VAR_0;
  }
  VAR_6->isoc_ctl.urb[VAR_14] = VAR_17;

  VAR_6->isoc_ctl.transfer_buffer[VAR_14] = FUNC_7(VAR_6->usbdev,
   VAR_15, VAR_2, &VAR_17->transfer_dma);
  if (!VAR_6->isoc_ctl.transfer_buffer[VAR_14]) {
   FUNC_6("unable to allocate %i bytes for transfer buffer %i%s\n",
     VAR_15, VAR_14,
     FUNC_2() ? " while in int" : "");
   FUNC_1(VAR_6);
   return -VAR_0;
  }
  FUNC_5(VAR_6->isoc_ctl.transfer_buffer[VAR_14], 0, VAR_15);

  VAR_16 = FUNC_10(VAR_6->usbdev,
           VAR_6->isoc_in_endpointaddr),

  FUNC_9(VAR_17, VAR_6->usbdev, VAR_16,
     VAR_6->isoc_ctl.transfer_buffer[VAR_14], VAR_15,
     VAR_5, VAR_13, 1);

  VAR_17->number_of_packets = VAR_7;
  VAR_17->transfer_flags = VAR_3 | VAR_4;

  VAR_19 = 0;
  for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++) {
   VAR_17->iso_frame_desc[VAR_18].offset = VAR_19;
   VAR_17->iso_frame_desc[VAR_18].length =
      VAR_6->isoc_ctl.max_pkt_size;
   VAR_19 += VAR_6->isoc_ctl.max_pkt_size;
  }
 }


 for (VAR_14 = 0; VAR_14 < VAR_6->isoc_ctl.num_bufs; VAR_14++) {
  VAR_20 = FUNC_11(VAR_6->isoc_ctl.urb[VAR_14], VAR_1);
  if (VAR_20) {
   FUNC_0("submit of urb %i failed (error=%i)\n",
           VAR_14, VAR_20);
   FUNC_1(VAR_6);
   return VAR_20;
  }
 }

 return 0;
}
