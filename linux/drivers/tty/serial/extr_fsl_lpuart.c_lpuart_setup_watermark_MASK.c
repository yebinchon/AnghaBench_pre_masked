
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ membase; } ;
struct lpuart_port {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned char VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct lpuart_port *VAR_19)
{
 unsigned char VAR_20, VAR_21;
 unsigned char VAR_22;

 VAR_21 = FUNC_0(VAR_19->port.membase + VAR_3);
 VAR_22 = VAR_21;
 VAR_21 &= ~(VAR_8 | VAR_6 | VAR_7 |
   VAR_5 | VAR_4);
 FUNC_1(VAR_21, VAR_19->port.membase + VAR_3);

 VAR_20 = FUNC_0(VAR_19->port.membase + VAR_10);
 FUNC_1(VAR_20 | VAR_12 | VAR_11,
   VAR_19->port.membase + VAR_10);


 FUNC_1(VAR_2 | VAR_1,
   VAR_19->port.membase + VAR_0);


 if (FUNC_0(VAR_19->port.membase + VAR_16) & VAR_17) {
  FUNC_0(VAR_19->port.membase + VAR_9);
  FUNC_1(VAR_15, VAR_19->port.membase + VAR_14);
 }

 FUNC_1(0, VAR_19->port.membase + VAR_18);
 FUNC_1(1, VAR_19->port.membase + VAR_13);


 FUNC_1(VAR_22, VAR_19->port.membase + VAR_3);
}
