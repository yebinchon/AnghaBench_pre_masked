
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
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned int FUNC_2 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_3 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_8, struct ktermios *VAR_9,
         struct ktermios *VAR_10)
{
 unsigned long VAR_11;
 unsigned int VAR_12;

 FUNC_0(&VAR_8->lock, VAR_11);

 VAR_8->read_status_mask = VAR_6 | VAR_4
  | VAR_7;

 if (VAR_9->c_iflag & VAR_2)
  VAR_8->read_status_mask |=
   VAR_5 | VAR_3;

 VAR_8->ignore_status_mask = 0;
 if (VAR_9->c_iflag & VAR_1)
  VAR_8->ignore_status_mask |= VAR_5
   | VAR_3 | VAR_4;


 if ((VAR_9->c_cflag & VAR_0) == 0)
  VAR_8->ignore_status_mask |=
   VAR_6 | VAR_5
   | VAR_3 | VAR_4;


 VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_10, 0, 460800);
 FUNC_3(VAR_8, VAR_9->c_cflag, VAR_12);

 FUNC_1(&VAR_8->lock, VAR_11);
}
