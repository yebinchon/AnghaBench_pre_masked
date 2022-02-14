
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_device {scalar_t__ dev_state; int recvd_hw_ready; scalar_t__ pg_event; int device_lock; int dev; void* hbuf_is_ready; int reset_work; int wait_hw_ready; } ;
struct list_head {int dummy; } ;
typedef scalar_t__ s32 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct mei_device*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct mei_device*) ;
 void* FUNC_7 (struct mei_device*) ;
 int FUNC_8 (struct mei_device*) ;
 int FUNC_9 (struct mei_device*) ;
 int FUNC_10 (struct mei_device*) ;
 scalar_t__ FUNC_11 (struct mei_device*) ;
 int FUNC_12 (struct mei_device*,struct list_head*) ;
 int FUNC_13 (struct mei_device*,struct list_head*,scalar_t__*) ;
 int FUNC_14 (struct mei_device*,struct list_head*) ;
 scalar_t__ FUNC_15 (struct mei_device*) ;
 int FUNC_16 (struct mei_device*) ;
 int FUNC_17 (struct mei_device*,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

irqreturn_t FUNC_22(int VAR_6, void *VAR_7)
{
 struct mei_device *VAR_8 = (struct mei_device *) VAR_7;
 struct list_head VAR_9;
 s32 VAR_10;
 u32 VAR_11;
 int VAR_12 = 0;

 FUNC_1(VAR_8->dev, "function called after ISR to handle the interrupt processing.\n");

 FUNC_18(&VAR_8->device_lock);

 VAR_11 = FUNC_8(VAR_8);
 FUNC_4(VAR_8, VAR_11);

 FUNC_0(&VAR_9);


 if (!FUNC_11(VAR_8) && VAR_8->dev_state != VAR_3) {
  FUNC_3(VAR_8->dev, "FW not ready: resetting.\n");
  FUNC_20(&VAR_8->reset_work);
  goto end;
 }

 if (FUNC_15(VAR_8))
  FUNC_9(VAR_8);

 FUNC_17(VAR_8, FUNC_5(VAR_11));


 if (!FUNC_10(VAR_8)) {
  if (FUNC_11(VAR_8)) {
   FUNC_1(VAR_8->dev, "we need to start the dev.\n");
   VAR_8->recvd_hw_ready = 1;
   FUNC_21(&VAR_8->wait_hw_ready);
  } else {
   FUNC_1(VAR_8->dev, "Spurious Interrupt\n");
  }
  goto end;
 }

 VAR_10 = FUNC_6(VAR_8);
 while (VAR_10 > 0) {
  FUNC_1(VAR_8->dev, "slots to read = %08x\n", VAR_10);
  VAR_12 = FUNC_13(VAR_8, &VAR_9, &VAR_10);




  if (VAR_12 == -VAR_0)
   break;

  if (VAR_12 &&
      (VAR_8->dev_state != VAR_3 &&
       VAR_8->dev_state != VAR_2)) {
   FUNC_2(VAR_8->dev, "mei_irq_read_handler ret = %d.\n",
      VAR_12);
   FUNC_20(&VAR_8->reset_work);
   goto end;
  }
 }

 VAR_8->hbuf_is_ready = FUNC_7(VAR_8);






 if (VAR_8->pg_event != VAR_5 &&
     VAR_8->pg_event != VAR_4) {
  VAR_12 = FUNC_14(VAR_8, &VAR_9);
  VAR_8->hbuf_is_ready = FUNC_7(VAR_8);
 }

 FUNC_12(VAR_8, &VAR_9);

end:
 FUNC_1(VAR_8->dev, "interrupt thread end ret = %d\n", VAR_12);
 FUNC_16(VAR_8);
 FUNC_19(&VAR_8->device_lock);
 return VAR_1;
}
