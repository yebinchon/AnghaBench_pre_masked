
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpuart_port {int port; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct lpuart_port *VAR_14)
{
 unsigned long VAR_15, VAR_16;
 unsigned long VAR_17;

 VAR_16 = FUNC_0(&VAR_14->port, VAR_0);
 VAR_17 = VAR_16;
 VAR_16 &= ~(VAR_5 | VAR_3 | VAR_4 |
   VAR_2 | VAR_1);
 FUNC_1(&VAR_14->port, VAR_16, VAR_0);


 VAR_15 = FUNC_0(&VAR_14->port, VAR_6);
 VAR_15 |= VAR_9 | VAR_7;
 VAR_15 |= VAR_10 | VAR_8;
 FUNC_1(&VAR_14->port, VAR_15, VAR_6);


 VAR_15 = (0x1 << VAR_12) | (0x0 << VAR_13);
 FUNC_1(&VAR_14->port, VAR_15, VAR_11);


 FUNC_1(&VAR_14->port, VAR_17, VAR_0);
}
