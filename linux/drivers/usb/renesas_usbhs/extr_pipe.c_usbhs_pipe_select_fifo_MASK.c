
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_pipe {struct usbhs_fifo* fifo; } ;
struct usbhs_fifo {struct usbhs_pipe* pipe; } ;



void FUNC_0(struct usbhs_pipe *VAR_0, struct usbhs_fifo *VAR_1)
{
 if (VAR_0->fifo)
  VAR_0->fifo->pipe = ((void*)0);

 VAR_0->fifo = VAR_1;

 if (VAR_1)
  VAR_1->pipe = VAR_0;
}
