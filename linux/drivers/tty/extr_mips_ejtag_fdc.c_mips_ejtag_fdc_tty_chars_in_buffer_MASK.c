
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct mips_ejtag_fdc_tty_port* driver_data; } ;
struct mips_ejtag_fdc_tty_port {int xmit_cnt; int xmit_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_0)
{
 struct mips_ejtag_fdc_tty_port *VAR_1 = VAR_0->driver_data;
 int VAR_2;


 FUNC_0(&VAR_1->xmit_lock);
 VAR_2 = VAR_1->xmit_cnt;
 FUNC_1(&VAR_1->xmit_lock);

 return VAR_2;
}
