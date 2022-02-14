
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_port {scalar_t__ membase; int lock; } ;
struct console {size_t index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct uart_port** VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct uart_port*,char const*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_5(struct console *VAR_5, const char *VAR_6,
      unsigned VAR_7)
{
 struct uart_port *VAR_8 = VAR_2[VAR_5->index];
 u8 VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 1;

 if (VAR_4)
  VAR_11 = FUNC_2(&VAR_8->lock, VAR_10);
 else
  FUNC_1(&VAR_8->lock, VAR_10);

 FUNC_4(VAR_8, VAR_6, VAR_7, VAR_3);

 if (VAR_11)
  FUNC_3(&VAR_8->lock, VAR_10);


 do {
  VAR_9 = FUNC_0(VAR_8->membase + VAR_0);
 } while ((VAR_9 & VAR_1) == 0);
}
