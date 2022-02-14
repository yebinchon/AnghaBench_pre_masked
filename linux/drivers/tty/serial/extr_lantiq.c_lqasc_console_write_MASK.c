
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ltq_uart_port {int lock; int port; } ;
struct console {size_t index; } ;


 size_t VAR_0 ;
 struct ltq_uart_port** VAR_1 ;
 int FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct console *VAR_2, const char *VAR_3, u_int VAR_4)
{
 struct ltq_uart_port *VAR_5;
 unsigned long VAR_6;

 if (VAR_2->index >= VAR_0)
  return;

 VAR_5 = VAR_1[VAR_2->index];
 if (!VAR_5)
  return;

 FUNC_1(&VAR_5->lock, VAR_6);
 FUNC_0(&VAR_5->port, VAR_3, VAR_4);
 FUNC_2(&VAR_5->lock, VAR_6);
}
