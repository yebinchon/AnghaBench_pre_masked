
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read_status_mask; int ignore_status_mask; } ;
struct uart_ip22zilog_port {int* curregs; int parity_mask; TYPE_1__ port; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;




 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
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

__attribute__((used)) static void
FUNC_0(struct uart_ip22zilog_port *VAR_40, unsigned int VAR_41,
         unsigned int VAR_42, int VAR_43)
{

 VAR_40->curregs[VAR_17] = VAR_10;
 VAR_40->curregs[VAR_18] = VAR_32 | VAR_23;


 VAR_40->curregs[VAR_22] &= ~VAR_39;
 VAR_40->curregs[VAR_22] |= VAR_38;
 VAR_40->curregs[VAR_19] = VAR_43 & 0xff;
 VAR_40->curregs[VAR_20] = (VAR_43 >> 8) & 0xff;
 VAR_40->curregs[VAR_21] = VAR_0;


 VAR_40->curregs[3] &= ~VAR_28;
 VAR_40->curregs[5] &= ~VAR_37;
 switch (VAR_41 & VAR_5) {
 case 131:
  VAR_40->curregs[3] |= VAR_24;
  VAR_40->curregs[5] |= VAR_33;
  VAR_40->parity_mask = 0x1f;
  break;
 case 130:
  VAR_40->curregs[3] |= VAR_25;
  VAR_40->curregs[5] |= VAR_34;
  VAR_40->parity_mask = 0x3f;
  break;
 case 129:
  VAR_40->curregs[3] |= VAR_26;
  VAR_40->curregs[5] |= VAR_35;
  VAR_40->parity_mask = 0x7f;
  break;
 case 128:
 default:
  VAR_40->curregs[3] |= VAR_27;
  VAR_40->curregs[5] |= VAR_36;
  VAR_40->parity_mask = 0xff;
  break;
 }
 VAR_40->curregs[4] &= ~0x0c;
 if (VAR_41 & VAR_6)
  VAR_40->curregs[4] |= VAR_31;
 else
  VAR_40->curregs[4] |= VAR_30;
 if (VAR_41 & VAR_11)
  VAR_40->curregs[4] |= VAR_14;
 else
  VAR_40->curregs[4] &= ~VAR_14;
 if (!(VAR_41 & VAR_13))
  VAR_40->curregs[4] |= VAR_16;
 else
  VAR_40->curregs[4] &= ~VAR_16;

 VAR_40->port.read_status_mask = VAR_29;
 if (VAR_42 & VAR_9)
  VAR_40->port.read_status_mask |= VAR_3 | VAR_15;
 if (VAR_42 & (VAR_7 | VAR_1 | VAR_12))
  VAR_40->port.read_status_mask |= VAR_2;

 VAR_40->port.ignore_status_mask = 0;
 if (VAR_42 & VAR_8)
  VAR_40->port.ignore_status_mask |= VAR_3 | VAR_15;
 if (VAR_42 & VAR_7) {
  VAR_40->port.ignore_status_mask |= VAR_2;
  if (VAR_42 & VAR_8)
   VAR_40->port.ignore_status_mask |= VAR_29;
 }

 if ((VAR_41 & VAR_4) == 0)
  VAR_40->port.ignore_status_mask = 0xff;
}
