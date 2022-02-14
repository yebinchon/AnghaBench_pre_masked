
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct r852_device {int card_detected; int card_unstable; int dma_stage; scalar_t__ dma_state; int irqlock; int dma_done; int card_detect_work; int card_workqueue; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct r852_device*) ;
 int FUNC_7 (struct r852_device*,int ) ;
 int FUNC_8 (struct r852_device*) ;
 int FUNC_9 (struct r852_device*,int ) ;
 int FUNC_10 (struct r852_device*,int ) ;
 int FUNC_11 (struct r852_device*,int ,int) ;
 int FUNC_12 (struct r852_device*,int ,int) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_14, void *VAR_15)
{
 struct r852_device *VAR_16 = (struct r852_device *)VAR_15;

 uint8_t VAR_17, VAR_18;
 unsigned long VAR_19;
 irqreturn_t VAR_20 = VAR_4;

 FUNC_13(&VAR_16->irqlock, VAR_19);


 VAR_17 = FUNC_9(VAR_16, VAR_7);
 FUNC_11(VAR_16, VAR_7, VAR_17);

 if (VAR_17 & (VAR_5|VAR_6)) {

  VAR_20 = VAR_3;
  VAR_16->card_detected = !!(VAR_17 & VAR_5);



  FUNC_0(VAR_16->card_unstable);



  FUNC_6(VAR_16);

  if (VAR_16->card_unstable)
   goto out;


  VAR_16->card_unstable = 1;
  FUNC_5(VAR_16->card_workqueue,
   &VAR_16->card_detect_work, FUNC_4(100));
  goto out;
 }



 VAR_18 = FUNC_10(VAR_16, VAR_13);
 FUNC_12(VAR_16, VAR_13, VAR_18);

 if (VAR_18 & VAR_11) {

  VAR_20 = VAR_3;

  if (VAR_18 & VAR_9) {
   FUNC_3("received dma error IRQ");
   FUNC_7(VAR_16, -VAR_2);
   FUNC_2(&VAR_16->dma_done);
   goto out;
  }


  FUNC_1(VAR_16->dma_stage == 0);

  if (VAR_16->dma_stage == 0)
   goto out;


  if (VAR_16->dma_state == VAR_0 &&
    (VAR_18 & VAR_10)) {

   VAR_16->dma_state = VAR_1;
   VAR_16->dma_stage++;
  }


  if (VAR_16->dma_state == VAR_1 &&
    (VAR_18 & VAR_12)) {
   VAR_16->dma_state = VAR_0;
   VAR_16->dma_stage++;
  }


  if (VAR_16->dma_stage == 2)
   FUNC_8(VAR_16);


  if (VAR_16->dma_stage == 3) {
   FUNC_7(VAR_16, 0);
   FUNC_2(&VAR_16->dma_done);
  }
  goto out;
 }


 if (VAR_18)
  FUNC_3("bad dma IRQ status = %x", VAR_18);

 if (VAR_17 & ~VAR_8)
  FUNC_3("strange card status = %x", VAR_17);

out:
 FUNC_14(&VAR_16->irqlock, VAR_19);
 return VAR_20;
}
