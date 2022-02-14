
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {struct mid8250* private_data; } ;
struct uart_8250_port {int dummy; } ;
struct mid8250 {int dma_index; int dma_dev; } ;
struct hsu_dma_chip {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct hsu_dma_chip*,int,int ) ;
 int FUNC_2 (struct hsu_dma_chip*,int,int *) ;
 struct hsu_dma_chip* FUNC_3 (int ) ;
 int FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (struct uart_8250_port*) ;
 int FUNC_6 (struct uart_port*,int ) ;
 struct uart_8250_port* FUNC_7 (struct uart_port*) ;

__attribute__((used)) static int FUNC_8(struct uart_port *VAR_1)
{
 struct mid8250 *VAR_2 = VAR_1->private_data;
 struct uart_8250_port *VAR_3 = FUNC_7(VAR_1);
 struct hsu_dma_chip *VAR_4;
 u32 VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 VAR_4 = FUNC_3(VAR_2->dma_dev);


 VAR_7 = FUNC_2(VAR_4, VAR_2->dma_index * 2 + 1, &VAR_5);
 if (VAR_7 > 0) {
  FUNC_5(VAR_3);
  VAR_6 |= 1;
 } else if (VAR_7 == 0)
  VAR_6 |= FUNC_1(VAR_4, VAR_2->dma_index * 2 + 1, VAR_5);


 VAR_7 = FUNC_2(VAR_4, VAR_2->dma_index * 2, &VAR_5);
 if (VAR_7 > 0)
  VAR_6 |= 1;
 else if (VAR_7 == 0)
  VAR_6 |= FUNC_1(VAR_4, VAR_2->dma_index * 2, VAR_5);


 VAR_6 |= FUNC_4(VAR_1, FUNC_6(VAR_1, VAR_0));
 return FUNC_0(VAR_6);
}
