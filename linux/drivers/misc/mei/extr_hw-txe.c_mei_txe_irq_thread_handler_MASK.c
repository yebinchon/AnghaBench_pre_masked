
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_txe_hw {int aliveness; int slots; int intr_cause; int wait_aliveness_resp; int readiness; } ;
struct mei_device {int recvd_hw_ready; scalar_t__ dev_state; int hbuf_is_ready; int device_lock; int dev; int reset_work; int pg_event; int wait_hw_ready; } ;
struct list_head {int dummy; } ;
typedef int s32 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct list_head*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct mei_device*) ;
 int FUNC_5 (struct mei_device*) ;
 void* FUNC_6 (struct mei_device*) ;
 int FUNC_7 (struct mei_device*,struct list_head*) ;
 int FUNC_8 (struct mei_device*,struct list_head*,int *) ;
 int FUNC_9 (struct mei_device*,struct list_head*) ;
 int FUNC_10 (struct mei_device*) ;
 int FUNC_11 (struct mei_txe_hw*,int ) ;
 int FUNC_12 (struct mei_device*,int) ;
 int FUNC_13 (struct mei_device*) ;
 int FUNC_14 (struct mei_device*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct mei_txe_hw*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int ,int *) ;
 int FUNC_22 (int ) ;
 struct mei_txe_hw* FUNC_23 (struct mei_device*) ;
 scalar_t__ FUNC_24 (int *) ;
 int FUNC_25 (int *) ;

irqreturn_t FUNC_26(int VAR_13, void *VAR_14)
{
 struct mei_device *VAR_15 = (struct mei_device *) VAR_14;
 struct mei_txe_hw *VAR_16 = FUNC_23(VAR_15);
 struct list_head VAR_17;
 s32 VAR_18;
 int VAR_19 = 0;

 FUNC_1(VAR_15->dev, "irq thread: Interrupt Registers HHISR|HISR|SEC=%02X|%04X|%02X\n",
  FUNC_11(VAR_16, VAR_1),
  FUNC_11(VAR_16, VAR_2),
  FUNC_16(VAR_16, VAR_7));



 FUNC_17(&VAR_15->device_lock);
 FUNC_0(&VAR_17);

 if (FUNC_19(FUNC_22(VAR_15->dev)))
  FUNC_12(VAR_15, 1);


 FUNC_13(VAR_15);

 VAR_16->aliveness = FUNC_10(VAR_15);
 VAR_16->readiness = FUNC_14(VAR_15);





 if (FUNC_21(VAR_12, &VAR_16->intr_cause)) {
  FUNC_1(VAR_15->dev, "Readiness Interrupt was received...\n");


  if (FUNC_15(VAR_16->readiness)) {
   FUNC_1(VAR_15->dev, "we need to start the dev.\n");
   VAR_15->recvd_hw_ready = 1;
  } else {
   VAR_15->recvd_hw_ready = 0;
   if (VAR_15->dev_state != VAR_5) {

    FUNC_3(VAR_15->dev, "FW not ready: resetting.\n");
    FUNC_20(&VAR_15->reset_work);
    goto end;

   }
  }
  FUNC_25(&VAR_15->wait_hw_ready);
 }







 if (FUNC_21(VAR_9, &VAR_16->intr_cause)) {

  FUNC_1(VAR_15->dev,
   "Aliveness Interrupt: Status: %d\n", VAR_16->aliveness);
  VAR_15->pg_event = VAR_6;
  if (FUNC_24(&VAR_16->wait_aliveness_resp))
   FUNC_25(&VAR_16->wait_aliveness_resp);
 }





 VAR_18 = FUNC_4(VAR_15);
 if (FUNC_21(VAR_11, &VAR_16->intr_cause)) {

  VAR_19 = FUNC_8(VAR_15, &VAR_17, &VAR_18);
  if (VAR_19 &&
      (VAR_15->dev_state != VAR_5 &&
       VAR_15->dev_state != VAR_4)) {
   FUNC_2(VAR_15->dev,
    "mei_irq_read_handler ret = %d.\n", VAR_19);

   FUNC_20(&VAR_15->reset_work);
   goto end;
  }
 }

 if (FUNC_21(VAR_10, &VAR_16->intr_cause)) {
  VAR_15->hbuf_is_ready = 1;
  VAR_16->slots = VAR_8;
 }

 if (VAR_16->aliveness && VAR_15->hbuf_is_ready) {

  VAR_15->hbuf_is_ready = FUNC_6(VAR_15);
  VAR_19 = FUNC_9(VAR_15, &VAR_17);
  if (VAR_19 && VAR_19 != -VAR_0)
   FUNC_2(VAR_15->dev, "mei_irq_write_handler ret = %d.\n",
    VAR_19);
  VAR_15->hbuf_is_ready = FUNC_6(VAR_15);
 }

 FUNC_7(VAR_15, &VAR_17);

end:
 FUNC_1(VAR_15->dev, "interrupt thread end ret = %d\n", VAR_19);

 FUNC_18(&VAR_15->device_lock);

 FUNC_5(VAR_15);
 return VAR_3;
}
