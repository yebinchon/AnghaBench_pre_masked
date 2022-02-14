
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ir_raw_event {int pulse; void* duration; } ;
struct hix5hd2_ir_priv {int rdev; scalar_t__ base; int dev; } ;
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
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,struct ir_raw_event*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_13, void *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19;
 u32 VAR_20, VAR_21;
 struct hix5hd2_ir_priv *VAR_22 = VAR_14;

 VAR_20 = FUNC_6(VAR_22->base + VAR_12);
 if (VAR_20 & VAR_0) {





  FUNC_3(VAR_22->rdev);
  VAR_15 = FUNC_6(VAR_22->base + VAR_9);
  for (VAR_21 = 0; VAR_21 < VAR_15; VAR_21++)
   FUNC_6(VAR_22->base + VAR_10);

  FUNC_7(VAR_3, VAR_22->base + VAR_11);
  FUNC_1(VAR_22->dev, "overflow, level=%d\n",
    VAR_7);
 }

 if ((VAR_20 & VAR_1) || (VAR_20 & VAR_2)) {
  struct ir_raw_event VAR_23 = {};

  VAR_15 = FUNC_6(VAR_22->base + VAR_9);
  for (VAR_21 = 0; VAR_21 < VAR_15; VAR_21++) {
   VAR_16 = FUNC_6(VAR_22->base + VAR_10);
   VAR_18 = ((VAR_16 & 0xffff) * 10);
   VAR_19 = ((VAR_16 >> 16) & 0xffff) * 10;
   VAR_17 = (VAR_18 + VAR_19) / 10;

   VAR_23.duration = FUNC_0(VAR_18);
   VAR_23.pulse = 1;
   FUNC_5(VAR_22->rdev, &VAR_23);

   if (VAR_17 < VAR_8) {
    VAR_23.duration = FUNC_0(VAR_19);
    VAR_23.pulse = 0;
    FUNC_5(VAR_22->rdev, &VAR_23);
   } else {
    FUNC_4(VAR_22->rdev, 1);
   }
  }

  if (VAR_20 & VAR_1)
   FUNC_7(VAR_4, VAR_22->base + VAR_11);
  if (VAR_20 & VAR_2)
   FUNC_7(VAR_5, VAR_22->base + VAR_11);
 }


 FUNC_2(VAR_22->rdev);
 return VAR_6;
}
