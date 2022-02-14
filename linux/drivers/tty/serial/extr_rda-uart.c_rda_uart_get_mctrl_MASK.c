
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct uart_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_6)
{
 unsigned int VAR_7 = 0;
 u32 VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_6, VAR_0);
 VAR_9 = FUNC_0(VAR_6, VAR_3);
 if (VAR_8 & VAR_2)
  VAR_7 |= VAR_5;
 if (!(VAR_9 & VAR_1))
  VAR_7 |= VAR_4;

 return VAR_7;
}
