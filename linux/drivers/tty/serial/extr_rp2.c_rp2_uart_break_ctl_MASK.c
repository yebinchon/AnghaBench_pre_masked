
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);
 FUNC_1(FUNC_0(VAR_2), VAR_0, VAR_1,
  VAR_3 ? VAR_1 : 0);
 FUNC_3(&VAR_2->lock, VAR_4);
}
