
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_device {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_5__ {struct ivtv** sliced_mpeg_data; } ;
struct TYPE_4__ {int hdl; } ;
struct ivtv {int v4l2_cap; int v4l2_dev; int card_name; TYPE_2__ vbi; TYPE_3__* pdev; scalar_t__ base_addr; scalar_t__ has_cx23415; TYPE_1__ cxhdl; int irq_worker_task; int irq_worker; int dma_timer; int * streams; int i_flags; int decoding; int capturing; } ;
struct TYPE_6__ {int irq; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct v4l2_device* FUNC_3 (int *) ;
 int FUNC_4 (struct ivtv*) ;
 int FUNC_5 (struct ivtv*) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (struct ivtv*,int ,int ,int ,int ) ;
 int FUNC_8 (struct ivtv*) ;
 int FUNC_9 (struct ivtv*) ;
 int FUNC_10 (struct ivtv*,int) ;
 int FUNC_11 (struct ivtv*) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (struct ivtv*) ;
 int FUNC_14 (struct ivtv*) ;
 int FUNC_15 (struct ivtv*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (scalar_t__,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_21 (int ,int *) ;
 struct ivtv* FUNC_22 (struct v4l2_device*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_25(struct pci_dev *VAR_16)
{
 struct v4l2_device *VAR_17 = FUNC_3(&VAR_16->dev);
 struct ivtv *VAR_18 = FUNC_22(VAR_17);
 int VAR_19;

 FUNC_0("Removing card\n");

 FUNC_5(VAR_18);

 if (FUNC_21(VAR_6, &VAR_18->i_flags)) {

  FUNC_0("Stopping all streams\n");
  if (FUNC_1(&VAR_18->capturing) > 0)
   FUNC_11(VAR_18);


  FUNC_0("Stopping decoding\n");


  if (VAR_18->v4l2_cap & VAR_11)
   FUNC_7(VAR_18, VAR_7, VAR_15, VAR_14, 0);
  if (FUNC_1(&VAR_18->decoding) > 0) {
   int VAR_20;

   if (FUNC_21(VAR_5, &VAR_18->i_flags))
    VAR_20 = VAR_3;
   else
    VAR_20 = VAR_2;
   FUNC_12(&VAR_18->streams[VAR_20],
    VAR_13 | VAR_12, 0);
  }
  FUNC_8(VAR_18);
 }


 FUNC_10(VAR_18, 0xffffffff);
 FUNC_2(&VAR_18->dma_timer);


 FUNC_16(&VAR_18->irq_worker);
 FUNC_17(VAR_18->irq_worker_task);

 FUNC_13(VAR_18);
 FUNC_14(VAR_18);

 FUNC_23(&VAR_18->cxhdl.hdl);

 FUNC_4(VAR_18);

 FUNC_6(VAR_18->pdev->irq, (void *)VAR_18);
 FUNC_9(VAR_18);

 FUNC_20(VAR_18->base_addr, VAR_4);
 FUNC_20(VAR_18->base_addr + VAR_8, VAR_9);
 if (VAR_18->has_cx23415)
  FUNC_20(VAR_18->base_addr + VAR_0, VAR_1);

 FUNC_18(VAR_18->pdev);
 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++)
  FUNC_15(VAR_18->vbi.sliced_mpeg_data[VAR_19]);

 FUNC_19("Removed %s\n", VAR_18->card_name);

 FUNC_24(&VAR_18->v4l2_dev);
 FUNC_15(VAR_18);
}
