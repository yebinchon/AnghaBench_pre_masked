
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_uart_serial_flush_request {int flags; } ;
struct gb_tty {int connection; } ;
typedef int request ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct gb_uart_serial_flush_request*,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct gb_tty *VAR_1, u8 VAR_2)
{
 struct gb_uart_serial_flush_request VAR_3;

 VAR_3.flags = VAR_2;
 return FUNC_0(VAR_1->connection, VAR_0,
     &VAR_3, sizeof(VAR_3), ((void*)0), 0);
}
