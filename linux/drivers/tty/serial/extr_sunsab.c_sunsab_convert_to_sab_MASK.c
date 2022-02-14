
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read_status_mask; int ignore_status_mask; int uartclk; } ;
struct uart_sunsab_port {unsigned char cached_dafo; int cached_ebrg; int tec_timeout; int cec_timeout; int irqflags; int cached_mode; TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;




 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (unsigned int,int*,int*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct uart_sunsab_port*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,unsigned int,int) ;

__attribute__((used)) static void FUNC_5(struct uart_sunsab_port *VAR_32, unsigned int VAR_33,
      unsigned int VAR_34, unsigned int VAR_35,
      unsigned int VAR_36)
{
 unsigned char VAR_37;
 int VAR_38, VAR_39, VAR_40;


 switch (VAR_33 & VAR_2) {
       case 131: VAR_37 = VAR_10; VAR_38 = 7; break;
       case 130: VAR_37 = VAR_11; VAR_38 = 8; break;
       case 129: VAR_37 = VAR_12; VAR_38 = 9; break;
       case 128: VAR_37 = VAR_13; VAR_38 = 10; break;

       default: VAR_37 = VAR_10; VAR_38 = 7; break;
 }

 if (VAR_33 & VAR_3) {
  VAR_37 |= VAR_17;
  VAR_38++;
 }

 if (VAR_33 & VAR_7) {
  VAR_37 |= VAR_14;
  VAR_38++;
 }

 if (VAR_33 & VAR_9) {
  VAR_37 |= VAR_16;
 } else {
  VAR_37 |= VAR_15;
 }
 VAR_32->cached_dafo = VAR_37;

 FUNC_0(VAR_35, &VAR_39, &VAR_40);

 VAR_32->cached_ebrg = VAR_39 | (VAR_40 << 6);

 VAR_32->tec_timeout = (10 * 1000000) / VAR_35;
 VAR_32->cec_timeout = VAR_32->tec_timeout >> 2;
 VAR_32->port.read_status_mask = (VAR_23 | VAR_24 |
         VAR_21 | VAR_22 |
         VAR_18);
 VAR_32->port.read_status_mask |= (VAR_27 |
          VAR_25 |
          VAR_28) << 8;
 if (VAR_34 & VAR_6)
  VAR_32->port.read_status_mask |= (VAR_20 |
           VAR_19);
 if (VAR_34 & (VAR_4 | VAR_0 | VAR_8))
  VAR_32->port.read_status_mask |= (VAR_26 << 8);




 VAR_32->port.ignore_status_mask = 0;
 if (VAR_34 & VAR_5)
  VAR_32->port.ignore_status_mask |= (VAR_20 |
      VAR_19);
 if (VAR_34 & VAR_4) {
  VAR_32->port.ignore_status_mask |= (VAR_26 << 8);




  if (VAR_34 & VAR_5)
   VAR_32->port.ignore_status_mask |= VAR_21;
 }




 if ((VAR_33 & VAR_1) == 0)
  VAR_32->port.ignore_status_mask |= (VAR_22 |
      VAR_23);

 FUNC_4(&VAR_32->port, VAR_33,
       (VAR_32->port.uartclk / (16 * VAR_36)));




 VAR_32->cached_mode |= VAR_29;
 FUNC_1(VAR_30, &VAR_32->irqflags);
 if (FUNC_3(VAR_31, &VAR_32->irqflags))
  FUNC_2(VAR_32);
}
