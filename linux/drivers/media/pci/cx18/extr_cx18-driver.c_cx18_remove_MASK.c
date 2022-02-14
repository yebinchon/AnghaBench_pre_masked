
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_device {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {int hdl; } ;
struct TYPE_4__ {struct cx18** sliced_mpeg_data; } ;
struct cx18 {int card_name; TYPE_2__ av_state; TYPE_1__ vbi; TYPE_3__* pci_dev; int base_addr; int in_work_queue; int tot_capturing; } ;
struct TYPE_6__ {int irq; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct cx18*) ;
 int FUNC_4 (struct cx18*) ;
 int FUNC_5 (struct cx18*) ;
 int FUNC_6 (struct cx18*) ;
 int FUNC_7 (struct cx18*) ;
 int FUNC_8 (struct cx18*,int) ;
 int FUNC_9 (struct cx18*,int) ;
 int FUNC_10 (struct cx18*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct cx18*) ;
 int FUNC_13 (struct cx18*) ;
 int FUNC_14 (int ,void*) ;
 int FUNC_15 (struct cx18*) ;
 int FUNC_16 (TYPE_3__*) ;
 struct v4l2_device* FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (int ,int ) ;
 struct cx18* FUNC_19 (struct v4l2_device*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct v4l2_device*) ;

__attribute__((used)) static void FUNC_22(struct pci_dev *VAR_6)
{
 struct v4l2_device *VAR_7 = FUNC_17(VAR_6);
 struct cx18 *VAR_8 = FUNC_19(VAR_7);
 int VAR_9;

 FUNC_0("Removing Card\n");

 FUNC_13(VAR_8);


 FUNC_0("Stopping all streams\n");
 if (FUNC_2(&VAR_8->tot_capturing) > 0)
  FUNC_7(VAR_8);


 FUNC_9(VAR_8, VAR_4 | VAR_2);


 FUNC_3(VAR_8);
 FUNC_4(VAR_8);


 FUNC_10(VAR_8, VAR_5 | VAR_3);

 FUNC_5(VAR_8);

 FUNC_11(VAR_8->in_work_queue);

 FUNC_8(VAR_8, 1);

 FUNC_12(VAR_8);

 FUNC_14(VAR_8->pci_dev->irq, (void *)VAR_8);

 FUNC_6(VAR_8);

 FUNC_18(VAR_8->base_addr, VAR_0);

 FUNC_16(VAR_8->pci_dev);

 if (VAR_8->vbi.sliced_mpeg_data[0])
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
   FUNC_15(VAR_8->vbi.sliced_mpeg_data[VAR_9]);

 FUNC_20(&VAR_8->av_state.hdl);

 FUNC_1("Removed %s\n", VAR_8->card_name);

 FUNC_21(VAR_7);
 FUNC_15(VAR_8);
}
