
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned int FUNC_2 (int ,struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;

 FUNC_0(&VAR_3->lock, VAR_4);
 VAR_5 = FUNC_2(VAR_1, VAR_3);
 FUNC_1(&VAR_3->lock, VAR_4);

 return VAR_5 & VAR_2 ? VAR_0 : 0;
}
