
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; int number_of_packets; unsigned char* transfer_buffer; TYPE_1__* iso_frame_desc; scalar_t__ context; } ;
struct TYPE_4__ {int vb2_buf; } ;
struct msi2500_frame_buf {TYPE_2__ vb; } ;
struct msi2500_dev {scalar_t__ isoc_errors; int dev; int vb_full; } ;
struct TYPE_3__ {int status; int actual_length; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct msi2500_dev*,void*,unsigned char*,int) ;
 struct msi2500_frame_buf* FUNC_3 (struct msi2500_dev*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct urb*,int ) ;
 int FUNC_6 (int *,int ) ;
 void* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int) ;

__attribute__((used)) static void FUNC_9(struct urb *VAR_6)
{
 struct msi2500_dev *VAR_7 = (struct msi2500_dev *)VAR_6->context;
 int VAR_8, VAR_9, VAR_10;
 unsigned char *VAR_11 = ((void*)0);
 struct msi2500_frame_buf *VAR_12;

 if (FUNC_4(VAR_6->status == -VAR_1 ||
       VAR_6->status == -VAR_0 ||
       VAR_6->status == -VAR_2)) {
  FUNC_0(VAR_7->dev, "URB (%p) unlinked %ssynchronously\n",
   VAR_6, VAR_6->status == -VAR_1 ? "" : "a");
  return;
 }

 if (FUNC_4(VAR_6->status != 0)) {
  FUNC_0(VAR_7->dev, "called with status %d\n", VAR_6->status);

  if (++VAR_7->isoc_errors > VAR_4)
   FUNC_0(VAR_7->dev, "Too many ISOC errors, bailing out\n");
  goto handler_end;
 } else {

  VAR_7->isoc_errors = 0;
 }


 for (VAR_8 = 0; VAR_8 < VAR_6->number_of_packets; VAR_8++) {
  void *VAR_13;


  VAR_10 = VAR_6->iso_frame_desc[VAR_8].status;
  if (FUNC_4(VAR_10)) {
   FUNC_1(VAR_7->dev,
         "frame=%d/%d has error %d skipping\n",
         VAR_8, VAR_6->number_of_packets, VAR_10);
   continue;
  }


  VAR_9 = VAR_6->iso_frame_desc[VAR_8].actual_length;
  if (FUNC_4(VAR_9 == 0))
   continue;

  VAR_11 = VAR_6->transfer_buffer + VAR_6->iso_frame_desc[VAR_8].offset;


  VAR_12 = FUNC_3(VAR_7);
  if (FUNC_4(VAR_12 == ((void*)0))) {
   VAR_7->vb_full++;
   FUNC_1(VAR_7->dev,
         "videobuf is full, %d packets dropped\n",
         VAR_7->vb_full);
   continue;
  }


  VAR_13 = FUNC_7(&VAR_12->vb.vb2_buf, 0);
  VAR_9 = FUNC_2(VAR_7, VAR_13, VAR_11, VAR_9);
  FUNC_8(&VAR_12->vb.vb2_buf, 0, VAR_9);
  FUNC_6(&VAR_12->vb.vb2_buf, VAR_5);
 }

handler_end:
 VAR_8 = FUNC_5(VAR_6, VAR_3);
 if (FUNC_4(VAR_8 != 0))
  FUNC_0(VAR_7->dev, "Error (%d) re-submitting urb\n", VAR_8);
}
