
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;
struct stm32_usart_offsets {scalar_t__ rdr; } ;
struct stm32_port {unsigned long* rx_buf; unsigned long rdr_mask; scalar_t__ rx_ch; TYPE_1__* info; } ;
struct TYPE_2__ {struct stm32_usart_offsets ofs; } ;


 size_t VAR_0 ;
 unsigned long FUNC_0 (scalar_t__) ;
 struct stm32_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static unsigned long FUNC_2(struct uart_port *VAR_1, u32 *VAR_2,
        int *VAR_3)
{
 struct stm32_port *VAR_4 = FUNC_1(VAR_1);
 struct stm32_usart_offsets *VAR_5 = &VAR_4->info->ofs;
 unsigned long VAR_6;

 if (VAR_4->rx_ch) {
  VAR_6 = VAR_4->rx_buf[VAR_0 - (*VAR_3)--];
  if ((*VAR_3) == 0)
   *VAR_3 = VAR_0;
 } else {
  VAR_6 = FUNC_0(VAR_1->membase + VAR_5->rdr);

  VAR_6 &= VAR_4->rdr_mask;
 }

 return VAR_6;
}
