
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ dir; int rem_bytes; } ;
struct qcom_qspi {int lock; int dev; scalar_t__ base; TYPE_1__ xfer; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qcom_qspi*) ;
 int FUNC_3 (struct qcom_qspi*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_11, void *VAR_12)
{
 u32 VAR_13;
 struct qcom_qspi *VAR_14 = VAR_12;
 irqreturn_t VAR_15 = VAR_2;
 unsigned long VAR_16;

 FUNC_6(&VAR_14->lock, VAR_16);

 VAR_13 = FUNC_4(VAR_14->base + VAR_4);
 FUNC_8(VAR_13, VAR_14->base + VAR_4);

 if (VAR_14->xfer.dir == VAR_6) {
  if (VAR_13 & VAR_9)
   VAR_15 = FUNC_3(VAR_14);
 } else {
  if (VAR_13 & VAR_7)
   VAR_15 = FUNC_2(VAR_14);
 }

 if (VAR_13 & VAR_5) {
  if (VAR_13 & VAR_8)
   FUNC_0(VAR_14->dev, "IRQ error: FIFO underrun\n");
  if (VAR_13 & VAR_10)
   FUNC_0(VAR_14->dev, "IRQ error: FIFO overrun\n");
  if (VAR_13 & VAR_0)
   FUNC_0(VAR_14->dev, "IRQ error: NOC response error\n");
  VAR_15 = VAR_1;
 }

 if (!VAR_14->xfer.rem_bytes) {
  FUNC_8(0, VAR_14->base + VAR_3);
  FUNC_5(FUNC_1(VAR_14->dev));
 }

 FUNC_7(&VAR_14->lock, VAR_16);
 return VAR_15;
}
