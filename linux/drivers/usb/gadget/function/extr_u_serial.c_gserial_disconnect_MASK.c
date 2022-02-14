
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gserial {int in; int out; struct gs_port* ioport; int port_line_coding; } ;
struct TYPE_2__ {scalar_t__ count; scalar_t__ tty; } ;
struct gs_port {int port_lock; scalar_t__ write_started; scalar_t__ write_allocated; scalar_t__ read_started; scalar_t__ read_allocated; int write_pool; int read_queue; int read_pool; int port_write_buf; scalar_t__ openclose; TYPE_1__ port; int drain_wait; int * port_usb; int port_line_coding; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct gserial *VAR_0)
{
 struct gs_port *VAR_1 = VAR_0->ioport;
 unsigned long VAR_2;

 if (!VAR_1)
  return;


 FUNC_3(&VAR_1->port_lock, VAR_2);


 VAR_1->port_line_coding = VAR_0->port_line_coding;

 VAR_1->port_usb = ((void*)0);
 VAR_0->ioport = ((void*)0);
 if (VAR_1->port.count > 0 || VAR_1->openclose) {
  FUNC_7(&VAR_1->drain_wait);
  if (VAR_1->port.tty)
   FUNC_5(VAR_1->port.tty);
 }
 FUNC_4(&VAR_1->port_lock, VAR_2);


 FUNC_6(VAR_0->out);
 FUNC_6(VAR_0->in);


 FUNC_3(&VAR_1->port_lock, VAR_2);
 if (VAR_1->port.count == 0 && !VAR_1->openclose)
  FUNC_2(&VAR_1->port_write_buf);
 FUNC_1(VAR_0->out, &VAR_1->read_pool, ((void*)0));
 FUNC_1(VAR_0->out, &VAR_1->read_queue, ((void*)0));
 FUNC_1(VAR_0->in, &VAR_1->write_pool, ((void*)0));

 VAR_1->read_allocated = VAR_1->read_started =
  VAR_1->write_allocated = VAR_1->write_started = 0;

 FUNC_0(VAR_0->in);
 FUNC_4(&VAR_1->port_lock, VAR_2);
}
