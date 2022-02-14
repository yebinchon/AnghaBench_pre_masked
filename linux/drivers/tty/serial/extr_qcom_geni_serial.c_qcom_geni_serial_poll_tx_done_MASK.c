
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_port*,int ,int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_6)
{
 int VAR_7;
 u32 VAR_8 = VAR_1;

 VAR_7 = FUNC_0(VAR_6, VAR_5,
      VAR_1, 1);
 if (!VAR_7) {
  FUNC_1(VAR_2, VAR_6->membase +
      VAR_3);
  VAR_8 |= VAR_0;
  FUNC_0(VAR_6, VAR_5,
       VAR_0, 1);
 }
 FUNC_1(VAR_8, VAR_6->membase + VAR_4);
}
