
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxs_auart_port {int mctrl_prev; int* gpio_irq; int port; scalar_t__ ms_irq_enabled; int gpios; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 (struct mxs_auart_port*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (struct mxs_auart_port*,int ) ;
 int FUNC_4 (struct mxs_auart_port*) ;
 int FUNC_5 (struct mxs_auart_port*) ;
 int FUNC_6 (int,struct mxs_auart_port*,int ) ;
 int FUNC_7 (struct mxs_auart_port*,int ) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_12, void *VAR_13)
{
 u32 VAR_14;
 struct mxs_auart_port *VAR_15 = VAR_13;
 u32 VAR_16 = VAR_15->mctrl_prev;
 u32 VAR_17 = FUNC_7(VAR_15, VAR_7);

 VAR_14 = FUNC_7(VAR_15, VAR_6);


 FUNC_6(VAR_14 & (VAR_1 | VAR_3 | VAR_2
  | VAR_0), VAR_15, VAR_6);




 if (VAR_12 == VAR_15->gpio_irq[VAR_8] ||
     VAR_12 == VAR_15->gpio_irq[VAR_9] ||
     VAR_12 == VAR_15->gpio_irq[VAR_10] ||
     VAR_12 == VAR_15->gpio_irq[VAR_11])
  FUNC_3(VAR_15,
    FUNC_2(VAR_15->gpios, &VAR_16));

 if (VAR_14 & VAR_0) {
  if (FUNC_0() && VAR_15->ms_irq_enabled)
   FUNC_8(&VAR_15->port,
     VAR_17 & VAR_4);
  FUNC_6(VAR_0, VAR_15, VAR_6);
  VAR_14 &= ~VAR_0;
 }

 if (VAR_14 & (VAR_1 | VAR_2)) {
  if (!FUNC_1(VAR_15))
   FUNC_4(VAR_15);
  VAR_14 &= ~(VAR_1 | VAR_2);
 }

 if (VAR_14 & VAR_3) {
  FUNC_5(VAR_15);
  VAR_14 &= ~VAR_3;
 }

 return VAR_5;
}
