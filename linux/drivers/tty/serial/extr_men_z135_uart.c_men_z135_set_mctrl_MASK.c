
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_11, unsigned int VAR_12)
{
 u32 VAR_13;
 u32 VAR_14;

 VAR_14 = VAR_13 = FUNC_0(VAR_11->membase + VAR_0);
 if (VAR_12 & VAR_10)
  VAR_14 |= VAR_5;
 else
  VAR_14 &= ~VAR_5;

 if (VAR_12 & VAR_6)
  VAR_14 |= VAR_1;
 else
  VAR_14 &= ~VAR_1;

 if (VAR_12 & VAR_8)
  VAR_14 |= VAR_3;
 else
  VAR_14 &= ~VAR_3;

 if (VAR_12 & VAR_9)
  VAR_14 |= VAR_4;
 else
  VAR_14 &= ~VAR_4;

 if (VAR_12 & VAR_7)
  VAR_14 |= VAR_2;
 else
  VAR_14 &= ~VAR_2;

 if (VAR_14 != VAR_13)
  FUNC_1(VAR_14, VAR_11->membase + VAR_0);
}
