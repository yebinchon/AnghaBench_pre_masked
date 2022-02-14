
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_15)
{
 unsigned long VAR_16, VAR_17, VAR_18;


 VAR_17 = FUNC_0(VAR_15->membase + VAR_12);
 VAR_17 &= ~(VAR_4 | VAR_5);
 FUNC_1(VAR_17, VAR_15->membase + VAR_12);

 VAR_16 = FUNC_0(VAR_15->membase + VAR_14);
 VAR_16 &= ~(VAR_8 | VAR_9);
 FUNC_1(VAR_16, VAR_15->membase + VAR_14);




 VAR_18 = VAR_1 | VAR_3
       | VAR_2;
 FUNC_1(VAR_18, VAR_15->membase + VAR_0);


 while ((FUNC_0(VAR_15->membase + VAR_13)
  & VAR_7)
  != VAR_6)
  ;
 FUNC_1(VAR_10, VAR_15->membase + VAR_14);

 VAR_16 = (VAR_8 | VAR_9 |
       VAR_11 | VAR_10);

 FUNC_1(VAR_16, VAR_15->membase + VAR_14);

 VAR_18 &= ~(VAR_2);

 FUNC_1(VAR_18, VAR_15->membase + VAR_0);

 VAR_17 = FUNC_0(VAR_15->membase + VAR_12);
 VAR_17 |= VAR_4;
 VAR_17 |= VAR_5;

 FUNC_1(VAR_17, VAR_15->membase + VAR_12);
}
