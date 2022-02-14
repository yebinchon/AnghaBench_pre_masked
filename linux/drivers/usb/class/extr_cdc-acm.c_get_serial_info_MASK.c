
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {struct acm* driver_data; } ;
struct serial_struct {int close_delay; int closing_wait; int baud_base; int xmit_fifo_size; } ;
struct TYPE_3__ {int close_delay; int closing_wait; } ;
struct TYPE_4__ {int dwDTERate; } ;
struct acm {TYPE_1__ port; TYPE_2__ line; int writesize; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1, struct serial_struct *VAR_2)
{
 struct acm *VAR_3 = VAR_1->driver_data;

 VAR_2->xmit_fifo_size = VAR_3->writesize;
 VAR_2->baud_base = FUNC_0(VAR_3->line.dwDTERate);
 VAR_2->close_delay = VAR_3->port.close_delay / 10;
 VAR_2->closing_wait = VAR_3->port.closing_wait == VAR_0 ?
    VAR_0 :
    VAR_3->port.closing_wait / 10;
 return 0;
}
