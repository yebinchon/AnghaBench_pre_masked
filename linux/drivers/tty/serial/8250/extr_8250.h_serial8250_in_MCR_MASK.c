
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {scalar_t__ gpios; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__,unsigned int*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct uart_8250_port*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct uart_8250_port *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1, VAR_0);

 if (VAR_1->gpios) {
  unsigned int VAR_3 = 0;

  VAR_3 = FUNC_0(VAR_1->gpios, &VAR_3);
  VAR_2 |= FUNC_1(VAR_3);
 }

 return VAR_2;
}
