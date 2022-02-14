
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_port {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2)
{
 unsigned long VAR_3;
 uint8_t VAR_4;

 FUNC_2(&VAR_2->lock, VAR_3);

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 VAR_4 |= VAR_1;
 FUNC_1(VAR_2, VAR_0, VAR_4);

 FUNC_3(&VAR_2->lock, VAR_3);
}
