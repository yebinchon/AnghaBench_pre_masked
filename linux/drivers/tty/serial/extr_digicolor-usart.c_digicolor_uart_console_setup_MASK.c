
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct console {size_t index; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct uart_port** VAR_3 ;
 int FUNC_0 (char*,int*,int*,int*,int*) ;
 int FUNC_1 (struct uart_port*,struct console*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct console *VAR_4, char *VAR_5)
{
 int VAR_6 = 115200, VAR_7 = 8, VAR_8 = 'n', VAR_9 = 'n';
 struct uart_port *VAR_10;

 if (VAR_4->index < 0 || VAR_4->index >= VAR_0)
  return -VAR_1;

 VAR_10 = VAR_3[VAR_4->index];
 if (!VAR_10)
  return -VAR_2;

 if (VAR_5)
  FUNC_0(VAR_5, &VAR_6, &VAR_8, &VAR_7, &VAR_9);

 return FUNC_1(VAR_10, VAR_4, VAR_6, VAR_8, VAR_7, VAR_9);
}
