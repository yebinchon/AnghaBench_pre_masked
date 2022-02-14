
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int private_data; } ;
struct dw8250_data {int msr_mask_on; int msr_mask_off; } ;


 int VAR_0 ;
 struct dw8250_data* FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct uart_port *VAR_1, int VAR_2, int VAR_3)
{
 struct dw8250_data *VAR_4 = FUNC_0(VAR_1->private_data);


 if (VAR_2 == VAR_0) {
  VAR_3 |= VAR_4->msr_mask_on;
  VAR_3 &= ~VAR_4->msr_mask_off;
 }

 return VAR_3;
}
