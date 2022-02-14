
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct serial_state* driver_data; } ;
struct serial_state {int MCR; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct serial_state*,int ,char*) ;
 scalar_t__ FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_6, unsigned int VAR_7,
      unsigned int VAR_8)
{
 struct serial_state *VAR_9 = VAR_6->driver_data;
 unsigned long VAR_10;

 if (FUNC_3(VAR_9, VAR_6->name, "rs_ioctl"))
  return -VAR_1;
 if (FUNC_4(VAR_6))
  return -VAR_0;

 FUNC_1(VAR_10);
 if (VAR_7 & VAR_5)
  VAR_9->MCR |= VAR_3;
 if (VAR_7 & VAR_4)
  VAR_9->MCR |= VAR_2;
 if (VAR_8 & VAR_5)
  VAR_9->MCR &= ~VAR_3;
 if (VAR_8 & VAR_4)
  VAR_9->MCR &= ~VAR_2;
 FUNC_2(VAR_9->MCR);
 FUNC_0(VAR_10);
 return 0;
}
