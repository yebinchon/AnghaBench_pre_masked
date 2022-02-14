
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int port; struct mips_ejtag_fdc_tty_port* driver_data; } ;
struct mips_ejtag_fdc_tty_port {int xmit_lock; int xmit_empty; scalar_t__ xmit_tail; scalar_t__ xmit_head; scalar_t__ xmit_cnt; struct mips_ejtag_fdc_tty* driver; } ;
struct mips_ejtag_fdc_tty {int xmit_total; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0)
{
 struct mips_ejtag_fdc_tty_port *VAR_1 = VAR_0->driver_data;
 struct mips_ejtag_fdc_tty *VAR_2 = VAR_1->driver;


 FUNC_2(&VAR_1->xmit_lock);
 if (VAR_1->xmit_cnt) {
  FUNC_0(VAR_1->xmit_cnt, &VAR_2->xmit_total);
  VAR_1->xmit_cnt = 0;
  VAR_1->xmit_head = 0;
  VAR_1->xmit_tail = 0;
  FUNC_1(&VAR_1->xmit_empty);
 }
 FUNC_3(&VAR_1->xmit_lock);

 FUNC_4(VAR_0->port);
}
