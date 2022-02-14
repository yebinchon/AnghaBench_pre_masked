
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ehv_bc_data* driver_data; } ;
struct ehv_bc_data {int rx_irq; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0)
{
 struct ehv_bc_data *VAR_1 = VAR_0->driver_data;

 FUNC_0(VAR_1->rx_irq);
}
