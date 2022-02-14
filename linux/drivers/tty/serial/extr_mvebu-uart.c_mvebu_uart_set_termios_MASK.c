
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int read_status_mask; int ignore_status_mask; int lock; } ;
struct ktermios {int c_iflag; int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct uart_port*) ;
 int VAR_9 ;
 int FUNC_1 (struct uart_port*) ;
 scalar_t__ FUNC_2 (struct uart_port*,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_6 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_7 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_10,
       struct ktermios *VAR_11,
       struct ktermios *VAR_12)
{
 unsigned long VAR_13;
 unsigned int VAR_14;

 FUNC_3(&VAR_10->lock, VAR_13);

 VAR_10->read_status_mask = FUNC_0(VAR_10) | VAR_7 |
  FUNC_1(VAR_10) | VAR_9;

 if (VAR_11->c_iflag & VAR_4)
  VAR_10->read_status_mask |= VAR_6 | VAR_8;

 VAR_10->ignore_status_mask = 0;
 if (VAR_11->c_iflag & VAR_3)
  VAR_10->ignore_status_mask |=
   VAR_6 | VAR_8 | VAR_7;

 if ((VAR_11->c_cflag & VAR_1) == 0)
  VAR_10->ignore_status_mask |= FUNC_0(VAR_10) | VAR_5;







 VAR_14 = FUNC_6(VAR_10, VAR_11, VAR_12, 0, 230400);
 if (FUNC_2(VAR_10, VAR_14)) {

  if (VAR_12)
   VAR_14 = FUNC_6(VAR_10, VAR_12, ((void*)0), 0, 230400);
 } else {
  FUNC_5(VAR_11, VAR_14, VAR_14);
  FUNC_7(VAR_10, VAR_11->c_cflag, VAR_14);
 }


 if (VAR_12) {
  VAR_11->c_iflag &= VAR_4 | VAR_3;
  VAR_11->c_iflag |= VAR_12->c_iflag & ~(VAR_4 | VAR_3);
  VAR_11->c_cflag &= VAR_1 | VAR_0;
  VAR_11->c_cflag |= VAR_12->c_cflag & ~(VAR_1 | VAR_0);
  VAR_11->c_cflag |= VAR_2;
 }

 FUNC_4(&VAR_10->lock, VAR_13);
}
