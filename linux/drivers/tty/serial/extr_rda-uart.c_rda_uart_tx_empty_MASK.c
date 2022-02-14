
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;
 u32 VAR_6;

 FUNC_1(&VAR_3->lock, VAR_4);

 VAR_6 = FUNC_0(VAR_3, VAR_0);
 VAR_5 = (VAR_6 & VAR_1) ? VAR_2 : 0;

 FUNC_2(&VAR_3->lock, VAR_4);

 return VAR_5;
}
