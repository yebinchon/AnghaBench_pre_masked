
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_udc {int lock; } ;
typedef int irqreturn_t ;


 int FUNC_0 (char*,int) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_14, void *VAR_15)
{
 struct omap_udc *VAR_16 = VAR_15;
 u16 VAR_17;
 irqreturn_t VAR_18 = VAR_1;
 unsigned long VAR_19;

 FUNC_5(&VAR_16->lock, VAR_19);
 VAR_17 = FUNC_4(VAR_8);


 if (VAR_17 & VAR_2) {
  FUNC_1(VAR_15, VAR_17);
  VAR_18 = VAR_0;
  VAR_17 &= ~VAR_2;
 }


 if (VAR_17 & (VAR_3|VAR_11|VAR_4)) {
  FUNC_3(VAR_15, VAR_17);
  VAR_18 = VAR_0;
  VAR_17 &= ~(VAR_3|VAR_11|VAR_4);
 }


 if (VAR_13 && (VAR_17 & (VAR_12|VAR_9|VAR_10))) {
  FUNC_2(VAR_15, VAR_17);
  VAR_18 = VAR_0;
  VAR_17 &= ~(VAR_12|VAR_9|VAR_10);
 }

 VAR_17 &= ~(VAR_7 | VAR_6|VAR_5);
 if (VAR_17)
  FUNC_0("udc_irq, unhandled %03x\n", VAR_17);
 FUNC_6(&VAR_16->lock, VAR_19);

 return VAR_18;
}
