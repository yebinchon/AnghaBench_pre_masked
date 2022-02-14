
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ir_raw_event {int pulse; int duration; } ;
struct ene_device {int rx_period_adjust; int hw_lock; int rdev; int w_pointer; int r_pointer; int hw_extra_buffer; scalar_t__ rx_fan_input_inuse; scalar_t__ hw_learning_and_tx_capable; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct ene_device*) ;
 int FUNC_4 (struct ene_device*,int) ;
 int FUNC_5 (struct ene_device*) ;
 int FUNC_6 (struct ene_device*) ;
 int FUNC_7 (struct ene_device*) ;
 int FUNC_8 (struct ene_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,struct ir_raw_event*) ;
 int VAR_11 ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_12, void *VAR_13)
{
 u16 VAR_14, VAR_15;
 int VAR_16, VAR_17;
 bool VAR_18;
 unsigned long VAR_19;
 irqreturn_t VAR_20 = VAR_10;
 struct ene_device *VAR_21 = (struct ene_device *)VAR_13;
 struct ir_raw_event VAR_22 = {};

 FUNC_11(&VAR_21->hw_lock, VAR_19);

 FUNC_2("ISR called");
 FUNC_6(VAR_21);
 VAR_17 = FUNC_3(VAR_21);

 if (!VAR_17)
  goto unlock;

 VAR_20 = VAR_9;

 if (VAR_17 & VAR_8) {
  FUNC_2("TX interrupt");
  if (!VAR_21->hw_learning_and_tx_capable) {
   FUNC_1("TX interrupt on unsupported device!");
   goto unlock;
  }
  FUNC_8(VAR_21);
 }

 if (!(VAR_17 & VAR_7))
  goto unlock;

 FUNC_2("RX interrupt");

 if (VAR_21->hw_learning_and_tx_capable)
  FUNC_7(VAR_21);



 if (!VAR_21->hw_extra_buffer)
  VAR_21->r_pointer = VAR_21->w_pointer == 0 ? VAR_0 : 0;

 while (1) {

  VAR_15 = FUNC_5(VAR_21);

  FUNC_2("next sample to read at: %04x", VAR_15);
  if (!VAR_15)
   break;

  VAR_14 = FUNC_4(VAR_21, VAR_15);

  if (VAR_21->rx_fan_input_inuse) {

   int VAR_23 = VAR_4 - VAR_1;


   VAR_14 |= FUNC_4(VAR_21, VAR_15 + VAR_23) << 8;
   VAR_18 = VAR_14 & VAR_6;


   VAR_14 &= VAR_5;
   VAR_16 = VAR_14 * VAR_2;

  } else {
   VAR_18 = !(VAR_14 & VAR_3);
   VAR_14 &= ~VAR_3;
   VAR_16 = VAR_14 * VAR_11;

   if (VAR_21->rx_period_adjust) {
    VAR_16 *= 100;
    VAR_16 /= (100 + VAR_21->rx_period_adjust);
   }
  }

  if (!VAR_21->hw_extra_buffer && !VAR_16) {
   VAR_21->r_pointer = VAR_21->w_pointer;
   continue;
  }

  FUNC_1("RX: %d (%s)", VAR_16, VAR_18 ? "pulse" : "space");

  VAR_22.duration = FUNC_0(VAR_16);
  VAR_22.pulse = VAR_18;
  FUNC_10(VAR_21->rdev, &VAR_22);
 }

 FUNC_9(VAR_21->rdev);
unlock:
 FUNC_12(&VAR_21->hw_lock, VAR_19);
 return VAR_20;
}
