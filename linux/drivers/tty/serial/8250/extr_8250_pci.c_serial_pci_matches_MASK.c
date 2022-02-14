
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pciserial_board {scalar_t__ num_ports; scalar_t__ base_baud; scalar_t__ uart_offset; scalar_t__ reg_shift; scalar_t__ first_offset; } ;



__attribute__((used)) static inline int
FUNC_0(const struct pciserial_board *VAR_0,
     const struct pciserial_board *VAR_1)
{
 return
     VAR_0->num_ports == VAR_1->num_ports &&
     VAR_0->base_baud == VAR_1->base_baud &&
     VAR_0->uart_offset == VAR_1->uart_offset &&
     VAR_0->reg_shift == VAR_1->reg_shift &&
     VAR_0->first_offset == VAR_1->first_offset;
}
