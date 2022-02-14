
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct serial_rs485 {int flags; } ;
struct uart_port {int lock; struct serial_rs485 rs485; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_port*,int ,int const,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_5)
{
 const u32 VAR_6 = VAR_0 |
    VAR_2;
 u32 VAR_7 = 0;
 struct serial_rs485 *VAR_8 = &VAR_5->rs485;
 unsigned long VAR_9;

 FUNC_1(&VAR_5->lock, VAR_9);
 if (VAR_8->flags & VAR_3) {
  VAR_7 |= VAR_0;

  if (VAR_8->flags & VAR_4)
   VAR_7 |= VAR_2;
 }
 FUNC_2(&VAR_5->lock, VAR_9);

 FUNC_0(VAR_5, VAR_1, VAR_6, VAR_7);
}
