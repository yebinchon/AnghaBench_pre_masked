
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int lock; } ;
struct asc_port {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct asc_port* FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_2, unsigned int VAR_3,
  unsigned int VAR_4)
{
 struct asc_port *VAR_5 = FUNC_6(VAR_2);
 unsigned long VAR_6 = 0;
 u32 VAR_7;

 switch (VAR_3) {
 case 128:
  FUNC_3(VAR_5->clk);
  break;
 case 129:





  FUNC_4(&VAR_2->lock, VAR_6);
  VAR_7 = FUNC_0(VAR_2, VAR_0) & ~VAR_1;
  FUNC_1(VAR_2, VAR_0, VAR_7);
  FUNC_5(&VAR_2->lock, VAR_6);
  FUNC_2(VAR_5->clk);
  break;
 }
}
