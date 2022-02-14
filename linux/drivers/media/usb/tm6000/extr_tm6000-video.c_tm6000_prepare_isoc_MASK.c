
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct urb {int number_of_packets; int transfer_flags; TYPE_5__* iso_frame_desc; int interval; int transfer_dma; } ;
struct tm6000_dmaqueue {int dummy; } ;
struct TYPE_9__ {int maxsize; TYPE_3__* endp; int bAlternateSetting; int bInterfaceNumber; } ;
struct TYPE_6__ {int max_pkt_size; int num_bufs; struct urb** transfer_buffer; struct urb** urb; } ;
struct tm6000_core {int urb_size; TYPE_4__ isoc_in; TYPE_1__ isoc_ctl; int udev; struct urb** urb_buffer; int * urb_dma; struct tm6000_dmaqueue vidq; } ;
struct TYPE_10__ {int offset; int length; } ;
struct TYPE_7__ {int bEndpointAddress; int bInterval; } ;
struct TYPE_8__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tm6000_core*,int ,char*,int,int,int,int,int) ;
 int FUNC_1 (struct urb**) ;
 void* FUNC_2 (int,int,int ) ;
 scalar_t__ FUNC_3 (struct tm6000_core*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct tm6000_core*) ;
 int FUNC_6 (struct tm6000_core*) ;
 int FUNC_7 (struct tm6000_core*) ;
 int VAR_8 ;
 int FUNC_8 (struct tm6000_core*) ;
 struct urb* FUNC_9 (int,int ) ;
 int FUNC_10 (struct urb*,int ,int,struct urb*,int,int ,struct tm6000_dmaqueue*) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct tm6000_core *VAR_9)
{
 struct tm6000_dmaqueue *VAR_10 = &VAR_9->vidq;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17 = VAR_3;
 struct urb *VAR_18;


 FUNC_8(VAR_9);

 FUNC_7(VAR_9);

 FUNC_14(VAR_9->udev,
     VAR_9->isoc_in.bInterfaceNumber,
     VAR_9->isoc_in.bAlternateSetting);


 FUNC_6(VAR_9);

 VAR_14 = FUNC_13(VAR_9->udev,
          VAR_9->isoc_in.endp->desc.bEndpointAddress &
          VAR_6);

 VAR_15 = FUNC_11(VAR_9->udev, VAR_14, FUNC_12(VAR_14));

 if (VAR_15 > VAR_9->isoc_in.maxsize)
  VAR_15 = VAR_9->isoc_in.maxsize;

 VAR_9->isoc_ctl.max_pkt_size = VAR_15;

 VAR_16 = VAR_2;
 VAR_13 = VAR_16 * VAR_15;
 VAR_9->urb_size = VAR_13;

 VAR_9->isoc_ctl.num_bufs = VAR_17;

 VAR_9->isoc_ctl.urb = FUNC_2(VAR_17, sizeof(void *),
       VAR_1);
 if (!VAR_9->isoc_ctl.urb)
  return -VAR_0;

 VAR_9->isoc_ctl.transfer_buffer = FUNC_2(VAR_17,
            sizeof(void *),
            VAR_1);
 if (!VAR_9->isoc_ctl.transfer_buffer) {
  FUNC_1(VAR_9->isoc_ctl.urb);
  return -VAR_0;
 }

 FUNC_0(VAR_9, VAR_7, "Allocating %d x %d packets (%d bytes) of %d bytes each to handle %u size\n",
      VAR_16, VAR_17, VAR_13,
      VAR_9->isoc_in.maxsize, VAR_15);


 if (FUNC_3(VAR_9) < 0) {
  FUNC_4("cannot allocate memory for urb buffers\n");


  FUNC_5(VAR_9);
  FUNC_1(VAR_9->isoc_ctl.urb);
  FUNC_1(VAR_9->isoc_ctl.transfer_buffer);
  return -VAR_0;
 }


 for (VAR_11 = 0; VAR_11 < VAR_9->isoc_ctl.num_bufs; VAR_11++) {
  VAR_18 = FUNC_9(VAR_16, VAR_1);
  if (!VAR_18) {
   FUNC_8(VAR_9);
   FUNC_5(VAR_9);
   return -VAR_0;
  }
  VAR_9->isoc_ctl.urb[VAR_11] = VAR_18;

  VAR_18->transfer_dma = VAR_9->urb_dma[VAR_11];
  VAR_9->isoc_ctl.transfer_buffer[VAR_11] = VAR_9->urb_buffer[VAR_11];

  FUNC_10(VAR_18, VAR_9->udev, VAR_14,
      VAR_9->isoc_ctl.transfer_buffer[VAR_11], VAR_13,
      VAR_8, VAR_10);
  VAR_18->interval = VAR_9->isoc_in.endp->desc.bInterval;
  VAR_18->number_of_packets = VAR_16;
  VAR_18->transfer_flags = VAR_4 | VAR_5;

  for (VAR_12 = 0; VAR_12 < VAR_16; VAR_12++) {
   VAR_18->iso_frame_desc[VAR_12].offset = VAR_15 * VAR_12;
   VAR_18->iso_frame_desc[VAR_12].length = VAR_15;
  }
 }

 return 0;
}
