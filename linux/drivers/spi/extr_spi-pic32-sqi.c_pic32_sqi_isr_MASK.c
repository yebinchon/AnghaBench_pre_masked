
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_sqi {scalar_t__ regs; int xfer_done; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_13, void *VAR_14)
{
 struct pic32_sqi *VAR_15 = VAR_14;
 u32 VAR_16, VAR_17;

 VAR_16 = FUNC_1(VAR_15->regs + VAR_4);
 VAR_17 = FUNC_1(VAR_15->regs + VAR_5);


 if (!VAR_17)
  return VAR_1;

 if (VAR_17 & VAR_3) {
  VAR_16 = 0;
  goto irq_done;
 }

 if (VAR_17 & VAR_12)
  VAR_16 &= ~(VAR_12 | VAR_11 | VAR_10);

 if (VAR_17 & VAR_9)
  VAR_16 &= ~(VAR_9 | VAR_8 | VAR_7);

 if (VAR_17 & VAR_2)
  VAR_16 &= ~VAR_2;


 if (VAR_17 & VAR_6) {

  VAR_16 = 0;

  FUNC_0(&VAR_15->xfer_done);
 }

irq_done:

 FUNC_2(VAR_16, VAR_15->regs + VAR_4);

 return VAR_0;
}
