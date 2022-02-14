
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 if (VAR_5 & VAR_3) {
  VAR_4->type = VAR_0;
  FUNC_0(VAR_4);
 }

 FUNC_2(&VAR_4->lock, VAR_6);


 FUNC_1(VAR_4, 0, VAR_1);


 FUNC_1(VAR_4, 0, VAR_2);

 FUNC_3(&VAR_4->lock, VAR_6);
}
