
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int overrun; } ;
struct TYPE_4__ {TYPE_1__ icount; int lock; } ;
struct imx_port {TYPE_2__ port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int FUNC_0 (struct imx_port*) ;
 unsigned int FUNC_1 (struct imx_port*,int ) ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (int,void*) ;
 int FUNC_4 (int,void*) ;
 int FUNC_5 (struct imx_port*,unsigned int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_24, void *VAR_25)
{
 struct imx_port *VAR_26 = VAR_25;
 unsigned int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
 irqreturn_t VAR_33 = VAR_1;

 VAR_27 = FUNC_1(VAR_26, VAR_14);
 VAR_28 = FUNC_1(VAR_26, VAR_21);
 VAR_29 = FUNC_1(VAR_26, VAR_2);
 VAR_30 = FUNC_1(VAR_26, VAR_6);
 VAR_31 = FUNC_1(VAR_26, VAR_8);
 VAR_32 = FUNC_1(VAR_26, VAR_11);
 if ((VAR_29 & VAR_3) == 0)
  VAR_27 &= ~VAR_18;
 if ((VAR_30 & VAR_7) == 0)
  VAR_27 &= ~VAR_15;
 if ((VAR_29 & VAR_5) == 0)
  VAR_27 &= ~VAR_20;
 if ((VAR_32 & VAR_13) == 0)
  VAR_28 &= ~VAR_23;
 if ((VAR_31 & VAR_10) == 0)
  VAR_27 &= ~VAR_17;
 if ((VAR_29 & VAR_4) == 0)
  VAR_27 &= ~VAR_19;
 if ((VAR_31 & VAR_9) == 0)
  VAR_27 &= ~VAR_16;
 if ((VAR_32 & VAR_12) == 0)
  VAR_28 &= ~VAR_22;

 if (VAR_27 & (VAR_18 | VAR_15)) {
  FUNC_3(VAR_24, VAR_25);
  VAR_33 = VAR_0;
 }

 if ((VAR_27 & VAR_20) || (VAR_28 & VAR_23)) {
  FUNC_4(VAR_24, VAR_25);
  VAR_33 = VAR_0;
 }

 if (VAR_27 & VAR_17) {
  FUNC_5(VAR_26, VAR_17, VAR_14);

  FUNC_6(&VAR_26->port.lock);
  FUNC_0(VAR_26);
  FUNC_7(&VAR_26->port.lock);

  VAR_33 = VAR_0;
 }

 if (VAR_27 & VAR_19) {
  FUNC_2(VAR_24, VAR_25);
  VAR_33 = VAR_0;
 }

 if (VAR_27 & VAR_16) {
  FUNC_5(VAR_26, VAR_16, VAR_14);
  VAR_33 = VAR_0;
 }

 if (VAR_28 & VAR_22) {
  VAR_26->port.icount.overrun++;
  FUNC_5(VAR_26, VAR_22, VAR_21);
  VAR_33 = VAR_0;
 }

 return VAR_33;
}
