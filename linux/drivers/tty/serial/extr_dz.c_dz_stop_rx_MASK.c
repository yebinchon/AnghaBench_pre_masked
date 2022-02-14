
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct dz_port {int cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dz_port*,int ,int ) ;
 struct dz_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2)
{
 struct dz_port *VAR_3 = FUNC_1(VAR_2);

 VAR_3->cflag &= ~VAR_1;
 FUNC_0(VAR_3, VAR_0, VAR_3->cflag);
}
