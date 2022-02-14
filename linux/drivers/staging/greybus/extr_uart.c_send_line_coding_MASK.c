
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_uart_set_line_coding_request {int dummy; } ;
struct gb_tty {int connection; int line_coding; } ;
typedef int request ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct gb_uart_set_line_coding_request*,int,int *,int ) ;
 int FUNC_1 (struct gb_uart_set_line_coding_request*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct gb_tty *VAR_1)
{
 struct gb_uart_set_line_coding_request VAR_2;

 FUNC_1(&VAR_2, &VAR_1->line_coding,
        sizeof(VAR_1->line_coding));
 return FUNC_0(VAR_1->connection, VAR_0,
     &VAR_2, sizeof(VAR_2), ((void*)0), 0);
}
