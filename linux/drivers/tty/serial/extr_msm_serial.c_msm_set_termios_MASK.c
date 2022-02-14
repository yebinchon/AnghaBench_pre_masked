
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; int read_status_mask; } ;
struct msm_dma {scalar_t__ chan; } ;
struct msm_port {struct msm_dma rx_dma; } ;
struct ktermios {int c_cflag; int c_iflag; } ;


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
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 struct msm_port* FUNC_0 (struct uart_port*) ;
 unsigned int FUNC_1 (struct uart_port*,int ) ;
 unsigned int FUNC_2 (struct uart_port*,unsigned int,unsigned long*) ;
 int FUNC_3 (struct msm_port*) ;
 int FUNC_4 (struct uart_port*,struct msm_dma*) ;
 int FUNC_5 (struct uart_port*,unsigned int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (struct ktermios*) ;
 int FUNC_9 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_10 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_11 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_12(struct uart_port *VAR_27, struct ktermios *VAR_28,
       struct ktermios *VAR_29)
{
 struct msm_port *VAR_30 = FUNC_0(VAR_27);
 struct msm_dma *VAR_31 = &VAR_30->rx_dma;
 unsigned long VAR_32;
 unsigned int VAR_33, VAR_34;

 FUNC_6(&VAR_27->lock, VAR_32);

 if (VAR_31->chan)
  FUNC_4(VAR_27, VAR_31);


 VAR_33 = FUNC_10(VAR_27, VAR_28, VAR_29, 300, 4000000);
 VAR_33 = FUNC_2(VAR_27, VAR_33, &VAR_32);
 if (FUNC_8(VAR_28))
  FUNC_9(VAR_28, VAR_33, VAR_33);


 VAR_34 = FUNC_1(VAR_27, VAR_13);
 VAR_34 &= ~VAR_19;
 if (VAR_28->c_cflag & VAR_7) {
  if (VAR_28->c_cflag & VAR_9)
   VAR_34 |= VAR_21;
  else if (VAR_28->c_cflag & VAR_1)
   VAR_34 |= VAR_22;
  else
   VAR_34 |= VAR_20;
 }


 VAR_34 &= ~VAR_14;
 switch (VAR_28->c_cflag & VAR_3) {
 case 131:
  VAR_34 |= VAR_15;
  break;
 case 130:
  VAR_34 |= VAR_16;
  break;
 case 129:
  VAR_34 |= VAR_17;
  break;
 case 128:
 default:
  VAR_34 |= VAR_18;
  break;
 }


 VAR_34 &= ~(VAR_23 | VAR_24);
 if (VAR_28->c_cflag & VAR_4)
  VAR_34 |= VAR_24;
 else
  VAR_34 |= VAR_23;


 FUNC_5(VAR_27, VAR_34, VAR_13);


 VAR_34 = FUNC_1(VAR_27, VAR_10);
 VAR_34 &= ~(VAR_11 | VAR_12);
 if (VAR_28->c_cflag & VAR_2) {
  VAR_34 |= VAR_11;
  VAR_34 |= VAR_12;
 }
 FUNC_5(VAR_27, VAR_34, VAR_10);


 VAR_27->read_status_mask = 0;
 if (VAR_28->c_iflag & VAR_6)
  VAR_27->read_status_mask |= VAR_25;
 if (VAR_28->c_iflag & (VAR_5 | VAR_0 | VAR_8))
  VAR_27->read_status_mask |= VAR_26;

 FUNC_11(VAR_27, VAR_28->c_cflag, VAR_33);


 FUNC_3(VAR_30);

 FUNC_7(&VAR_27->lock, VAR_32);
}
