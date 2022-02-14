
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uart_port {int lock; } ;
struct msm_dma {int chan; scalar_t__ count; } ;
struct msm_port {int break_detected; scalar_t__ imr; scalar_t__ is_uartdm; struct msm_dma rx_dma; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 struct msm_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*,unsigned int) ;
 int FUNC_5 (struct uart_port*) ;
 unsigned int FUNC_6 (struct uart_port*,int ) ;
 int FUNC_7 (struct uart_port*,scalar_t__,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_12, void *VAR_13)
{
 struct uart_port *VAR_14 = VAR_13;
 struct msm_port *VAR_15 = FUNC_0(VAR_14);
 struct msm_dma *VAR_16 = &VAR_15->rx_dma;
 unsigned long VAR_17;
 unsigned int VAR_18;
 u32 VAR_19;

 FUNC_8(&VAR_14->lock, VAR_17);
 VAR_18 = FUNC_6(VAR_14, VAR_11);
 FUNC_7(VAR_14, 0, VAR_5);

 if (VAR_18 & VAR_7) {
  VAR_15->break_detected = 1;
  FUNC_7(VAR_14, VAR_2, VAR_1);
 }

 if (VAR_18 & (VAR_8 | VAR_9)) {
  if (VAR_16->count) {
   VAR_19 = VAR_4;
   FUNC_7(VAR_14, VAR_19, VAR_1);
   VAR_19 = VAR_3;
   FUNC_7(VAR_14, VAR_19, VAR_1);




   FUNC_1(VAR_16->chan);
  } else if (VAR_15->is_uartdm) {
   FUNC_4(VAR_14, VAR_18);
  } else {
   FUNC_3(VAR_14);
  }
 }
 if (VAR_18 & VAR_10)
  FUNC_5(VAR_14);
 if (VAR_18 & VAR_6)
  FUNC_2(VAR_14);

 FUNC_7(VAR_14, VAR_15->imr, VAR_5);
 FUNC_9(&VAR_14->lock, VAR_17);

 return VAR_0;
}
