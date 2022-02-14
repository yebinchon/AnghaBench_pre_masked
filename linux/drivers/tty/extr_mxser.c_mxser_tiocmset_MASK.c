
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ index; struct mxser_port* driver_data; } ;
struct mxser_port {int slock; scalar_t__ ioaddr; int MCR; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_8,
  unsigned int VAR_9, unsigned int VAR_10)
{
 struct mxser_port *VAR_11 = VAR_8->driver_data;
 unsigned long VAR_12;


 if (VAR_8->index == VAR_2)
  return -VAR_1;
 if (FUNC_3(VAR_8))
  return -VAR_0;

 FUNC_1(&VAR_11->slock, VAR_12);

 if (VAR_9 & VAR_4)
  VAR_11->MCR |= VAR_7;
 if (VAR_9 & VAR_3)
  VAR_11->MCR |= VAR_6;

 if (VAR_10 & VAR_4)
  VAR_11->MCR &= ~VAR_7;
 if (VAR_10 & VAR_3)
  VAR_11->MCR &= ~VAR_6;

 FUNC_0(VAR_11->MCR, VAR_11->ioaddr + VAR_5);
 FUNC_2(&VAR_11->slock, VAR_12);
 return 0;
}
