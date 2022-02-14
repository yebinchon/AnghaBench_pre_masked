
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int read_status_mask; int lock; scalar_t__ membase; int ignore_status_mask; } ;
struct ktermios {unsigned int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct uart_port *VAR_30, struct ktermios *VAR_31,
      struct ktermios *VAR_32)
{
 unsigned long VAR_33;
 unsigned long VAR_34, VAR_35, VAR_36;
 unsigned int VAR_37 = VAR_32 ? VAR_32->c_cflag & VAR_4 : VAR_3;

 VAR_34 = FUNC_0(VAR_30->membase + VAR_29);
 VAR_35 = VAR_34;


 VAR_36 = FUNC_0(VAR_30->membase + VAR_9);
 VAR_36 |= VAR_10;
 FUNC_3(VAR_36, VAR_30->membase + VAR_9);


 while ((FUNC_0(VAR_30->membase + VAR_25)
  & VAR_12)
  != VAR_11)
  ;
 while ((VAR_31->c_cflag & VAR_4) != VAR_3 &&
        (VAR_31->c_cflag & VAR_4) != VAR_2) {
  VAR_31->c_cflag &= ~VAR_4;
  VAR_31->c_cflag |= VAR_37;
  VAR_37 = VAR_3;
 }

 if ((VAR_31->c_cflag & VAR_4) == VAR_2) {

  VAR_34 = VAR_35 & ~VAR_17 & ~VAR_16;
 }

 if ((VAR_31->c_cflag & VAR_4) == VAR_3) {

  VAR_34 = (VAR_35 | VAR_16) & ~VAR_17;
 }

 if (VAR_31->c_cflag & VAR_1) {
  if ((VAR_31->c_cflag & VAR_4) != VAR_3) {
   VAR_31->c_cflag &= ~VAR_4;
   VAR_31->c_cflag |= VAR_3;
  }

  VAR_34 |= VAR_16;
 }

 if (VAR_31->c_cflag & VAR_5)
  VAR_31->c_cflag &= ~VAR_5;


 if ((VAR_31->c_cflag & VAR_4) == VAR_2)
  VAR_31->c_cflag |= VAR_26;

 if ((VAR_31->c_cflag & VAR_26)) {
  VAR_34 |= VAR_15;
  if (VAR_31->c_cflag & VAR_28)
   VAR_34 = (VAR_34 | VAR_13) &
        (~VAR_14);
  else
   VAR_34 = VAR_34 & (~VAR_14 &
       ~VAR_13);
 } else {
  VAR_34 &= ~VAR_15;
 }

 FUNC_1(&VAR_30->lock, VAR_33);

 VAR_30->read_status_mask = 0;

 if (VAR_31->c_iflag & VAR_8)
  VAR_30->read_status_mask |= (VAR_19 |
       VAR_21 |
       VAR_22 |
       VAR_23 |
       VAR_24);
 if (VAR_31->c_iflag & (VAR_6 | VAR_0 | VAR_27))
  VAR_30->read_status_mask |= VAR_19;


 VAR_30->ignore_status_mask = 0;
 if (VAR_31->c_iflag & VAR_7)
  VAR_30->ignore_status_mask |= VAR_20;
 if (VAR_31->c_iflag & VAR_6) {
  VAR_30->ignore_status_mask |= VAR_20;




  if (VAR_31->c_iflag & VAR_7)
   VAR_30->ignore_status_mask |= VAR_18;
 }

 FUNC_3(VAR_34, VAR_30->membase + VAR_29);

 VAR_36 &= ~(VAR_10);

 FUNC_3(VAR_36, VAR_30->membase + VAR_9);

 FUNC_2(&VAR_30->lock, VAR_33);
}
