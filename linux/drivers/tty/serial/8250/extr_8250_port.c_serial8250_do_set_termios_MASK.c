
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int fifosize; int read_status_mask; int ignore_status_mask; int flags; scalar_t__ type; int lock; int mctrl; } ;
struct uart_8250_port {int capabilities; unsigned char lcr; int fcr; int ier; int bugs; int port; int mcr; scalar_t__ fifo_bug; int dma; } ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned char VAR_24 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 unsigned char FUNC_1 (struct uart_8250_port*,int) ;
 unsigned int FUNC_2 (struct uart_port*,struct ktermios*,struct ktermios*) ;
 unsigned int FUNC_3 (struct uart_port*,unsigned int,unsigned int*) ;
 int FUNC_4 (struct uart_8250_port*) ;
 int FUNC_5 (struct uart_8250_port*) ;
 int FUNC_6 (struct uart_port*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_7 (struct uart_port*,int ) ;
 int FUNC_8 (struct uart_port*,int ,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (struct ktermios*) ;
 int FUNC_12 (struct ktermios*,unsigned int,unsigned int) ;
 int FUNC_13 (struct uart_port*,int,unsigned int) ;
 struct uart_8250_port* FUNC_14 (struct uart_port*) ;

void
FUNC_15(struct uart_port *VAR_44, struct ktermios *VAR_45,
     struct ktermios *VAR_46)
{
 struct uart_8250_port *VAR_47 = FUNC_14(VAR_44);
 unsigned char VAR_48;
 unsigned long VAR_49;
 unsigned int VAR_50, VAR_51, VAR_52 = 0;

 if (VAR_47->capabilities & VAR_20) {
  VAR_45->c_cflag &= ~(VAR_8 | VAR_12 | VAR_14 | VAR_1);
  if ((VAR_45->c_cflag & VAR_7) == VAR_4 ||
      (VAR_45->c_cflag & VAR_7) == VAR_5)
   VAR_45->c_cflag = (VAR_45->c_cflag & ~VAR_7) | VAR_6;
 }
 VAR_48 = FUNC_1(VAR_47, VAR_45->c_cflag);

 VAR_50 = FUNC_2(VAR_44, VAR_45, VAR_46);
 VAR_51 = FUNC_3(VAR_44, VAR_50, &VAR_52);





 FUNC_4(VAR_47);
 FUNC_9(&VAR_44->lock, VAR_49);

 VAR_47->lcr = VAR_48;

 if (VAR_47->capabilities & VAR_19 && VAR_44->fifosize > 1) {

  if ((VAR_50 < 2400 && !VAR_47->dma) || VAR_47->fifo_bug) {
   VAR_47->fcr &= ~VAR_28;
   VAR_47->fcr |= VAR_27;
  }
 }






 if (VAR_47->capabilities & VAR_17) {
  VAR_47->mcr &= ~VAR_41;
  if (VAR_45->c_cflag & VAR_3)
   VAR_47->mcr |= VAR_41;
 }




 FUNC_13(VAR_44, VAR_45->c_cflag, VAR_50);

 VAR_44->read_status_mask = VAR_38 | VAR_40 | VAR_36;
 if (VAR_45->c_iflag & VAR_11)
  VAR_44->read_status_mask |= VAR_37 | VAR_39;
 if (VAR_45->c_iflag & (VAR_9 | VAR_0 | VAR_13))
  VAR_44->read_status_mask |= VAR_35;




 VAR_44->ignore_status_mask = 0;
 if (VAR_45->c_iflag & VAR_10)
  VAR_44->ignore_status_mask |= VAR_39 | VAR_37;
 if (VAR_45->c_iflag & VAR_9) {
  VAR_44->ignore_status_mask |= VAR_35;




  if (VAR_45->c_iflag & VAR_10)
   VAR_44->ignore_status_mask |= VAR_38;
 }




 if ((VAR_45->c_cflag & VAR_2) == 0)
  VAR_44->ignore_status_mask |= VAR_36;




 VAR_47->ier &= ~VAR_30;
 if (!(VAR_47->bugs & VAR_16) &&
   FUNC_0(&VAR_47->port, VAR_45->c_cflag))
  VAR_47->ier |= VAR_30;
 if (VAR_47->capabilities & VAR_22)
  VAR_47->ier |= VAR_32;
 if (VAR_47->capabilities & VAR_21)
  VAR_47->ier |= VAR_31;

 FUNC_8(VAR_44, VAR_29, VAR_47->ier);

 if (VAR_47->capabilities & VAR_18) {
  unsigned char VAR_53 = 0;





  if (VAR_45->c_cflag & VAR_3)
   VAR_53 |= VAR_24;

  FUNC_8(VAR_44, VAR_33, VAR_34);
  if (VAR_44->flags & VAR_43)
   FUNC_8(VAR_44, VAR_42, VAR_53);
  else
   FUNC_8(VAR_44, VAR_23, VAR_53);
 }

 FUNC_6(VAR_44, VAR_50, VAR_51, VAR_52);





 if (VAR_44->type == VAR_15)
  FUNC_8(VAR_44, VAR_25, VAR_47->fcr);

 FUNC_8(VAR_44, VAR_33, VAR_47->lcr);
 if (VAR_44->type != VAR_15) {

  if (VAR_47->fcr & VAR_26)
   FUNC_8(VAR_44, VAR_25, VAR_26);
  FUNC_8(VAR_44, VAR_25, VAR_47->fcr);
 }
 FUNC_7(VAR_44, VAR_44->mctrl);
 FUNC_10(&VAR_44->lock, VAR_49);
 FUNC_5(VAR_47);


 if (FUNC_11(VAR_45))
  FUNC_12(VAR_45, VAR_50, VAR_50);
}
