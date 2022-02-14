
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int fifosize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_port*,int ) ;

__attribute__((used)) static inline unsigned FUNC_1(struct uart_port *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3, VAR_0);

 if (VAR_4 & VAR_2)
  return VAR_3->fifosize / 2;
 else if (!(VAR_4 & VAR_1))
  return 1;

 return 0;
}
