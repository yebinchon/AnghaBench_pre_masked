
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_port {unsigned int tp_shadow_mcr; int tp_lock; scalar_t__ tp_uart_base_addr; int tp_tdev; int tp_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,int ,scalar_t__,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct ti_port *VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4->tp_port, VAR_4->tp_tdev,
  VAR_4->tp_uart_base_addr + VAR_3,
  VAR_2 | VAR_0 | VAR_1, VAR_5);

 FUNC_0(&VAR_4->tp_lock, VAR_6);
 if (!VAR_7)
  VAR_4->tp_shadow_mcr = VAR_5;
 FUNC_1(&VAR_4->tp_lock, VAR_6);

 return VAR_7;
}
