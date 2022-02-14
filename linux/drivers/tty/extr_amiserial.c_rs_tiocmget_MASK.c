
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct serial_state* driver_data; } ;
struct serial_state {unsigned char MCR; } ;
struct TYPE_2__ {unsigned char pra; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct serial_state*,int ,char*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_13)
{
 struct serial_state *VAR_14 = VAR_13->driver_data;
 unsigned char VAR_15, VAR_16;
 unsigned long VAR_17;

 if (FUNC_2(VAR_14, VAR_13->name, "rs_ioctl"))
  return -VAR_1;
 if (FUNC_3(VAR_13))
  return -VAR_0;

 VAR_15 = VAR_14->MCR;
 FUNC_1(VAR_17);
 VAR_16 = VAR_12.pra;
 FUNC_0(VAR_17);
 return ((VAR_15 & VAR_6) ? VAR_11 : 0)
  | ((VAR_15 & VAR_5) ? VAR_10 : 0)
  | (!(VAR_16 & VAR_3) ? VAR_7 : 0)
  | (!(VAR_16 & VAR_4) ? VAR_9 : 0)
  | (!(VAR_16 & VAR_2) ? VAR_8 : 0);
}
