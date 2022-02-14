
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {struct mid8250* private_data; } ;
struct uart_8250_port {int dummy; } ;
struct mid8250 {int dma_chip; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (struct uart_port*,unsigned int) ;
 int FUNC_5 (struct uart_8250_port*) ;
 unsigned int FUNC_6 (struct uart_port*,int ) ;
 struct uart_8250_port* FUNC_7 (struct uart_port*) ;

__attribute__((used)) static int FUNC_8(struct uart_port *VAR_2)
{
 struct mid8250 *VAR_3 = VAR_2->private_data;
 struct uart_8250_port *VAR_4 = FUNC_7(VAR_2);
 unsigned int VAR_5 = FUNC_6(VAR_2, VAR_0);
 u32 VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 if (VAR_5 & FUNC_0(2)) {
  VAR_8 = FUNC_3(&VAR_3->dma_chip, 1, &VAR_6);
  if (VAR_8 > 0) {
   FUNC_5(VAR_4);
   VAR_7 |= 1;
  } else if (VAR_8 == 0)
   VAR_7 |= FUNC_2(&VAR_3->dma_chip, 1, VAR_6);
 }
 if (VAR_5 & FUNC_0(1)) {
  VAR_8 = FUNC_3(&VAR_3->dma_chip, 0, &VAR_6);
  if (VAR_8 > 0)
   VAR_7 |= 1;
  else if (VAR_8 == 0)
   VAR_7 |= FUNC_2(&VAR_3->dma_chip, 0, VAR_6);
 }
 if (VAR_5 & FUNC_0(0))
  VAR_7 |= FUNC_4(VAR_2, FUNC_6(VAR_2, VAR_1));
 return FUNC_1(VAR_7);
}
