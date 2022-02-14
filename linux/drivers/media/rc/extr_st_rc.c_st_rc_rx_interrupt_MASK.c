
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct st_rc_device {unsigned int sample_mult; unsigned int sample_div; int rdev; scalar_t__ rx_base; scalar_t__ overclocking; int dev; scalar_t__ irq_wake; } ;
struct ir_raw_event {int pulse; void* duration; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct ir_raw_event*) ;
 unsigned long VAR_11 ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (unsigned long) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_12, void *VAR_13)
{
 unsigned long VAR_14;
 unsigned int VAR_15, VAR_16 = 0;
 struct st_rc_device *VAR_17 = VAR_13;
 int VAR_18 = 0;
 u32 VAR_19, VAR_20;
 struct ir_raw_event VAR_21 = {};

 if (VAR_17->irq_wake)
  FUNC_6(VAR_17->dev, 0);


 VAR_14 = VAR_11 + FUNC_5(10);
 do {
  VAR_19 = FUNC_7(VAR_17->rx_base + VAR_7);
  if (!(VAR_19 & (VAR_0 | VAR_1)))
   break;

  VAR_20 = FUNC_7(VAR_17->rx_base + VAR_4);
  if (FUNC_10(VAR_20 & VAR_6)) {

   FUNC_3(VAR_17->rdev);
   FUNC_1(VAR_17->dev, "IR RX overrun\n");
   FUNC_11(VAR_6,
     VAR_17->rx_base + VAR_3);
   continue;
  }

  VAR_15 = FUNC_7(VAR_17->rx_base + VAR_8);
  VAR_16 = FUNC_7(VAR_17->rx_base + VAR_5);

  if (VAR_15 == VAR_9)
   VAR_18 = 1;


  if ((VAR_16 > 2) && (VAR_15 > 1)) {
   VAR_15 -= VAR_16;
   if (VAR_17->overclocking) {
    VAR_15 *= VAR_17->sample_mult;
    VAR_15 /= VAR_17->sample_div;
    VAR_16 *= VAR_17->sample_mult;
    VAR_16 /= VAR_17->sample_div;
   }

   VAR_21.duration = FUNC_0(VAR_16);
   VAR_21.pulse = 1;
   FUNC_4(VAR_17->rdev, &VAR_21);

   if (!VAR_18) {
    VAR_21.duration = FUNC_0(VAR_15);
    VAR_21.pulse = 0;
    FUNC_4(VAR_17->rdev, &VAR_21);
   } else {
    FUNC_8(VAR_17->rdev);
   }

  }
  VAR_18 = 0;
 } while (FUNC_9(VAR_14));

 FUNC_11(VAR_2, VAR_17->rx_base + VAR_3);


 FUNC_2(VAR_17->rdev);
 return VAR_10;
}
