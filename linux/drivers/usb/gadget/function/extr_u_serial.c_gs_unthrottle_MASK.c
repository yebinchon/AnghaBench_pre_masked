
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gs_port* driver_data; } ;
struct gs_port {int port_lock; int push; int port_num; scalar_t__ port_usb; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0)
{
 struct gs_port *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;

 FUNC_2(&VAR_1->port_lock, VAR_2);
 if (VAR_1->port_usb) {




  FUNC_0("ttyGS%d: unthrottle\n", VAR_1->port_num);
  FUNC_1(&VAR_1->push, 0);
 }
 FUNC_3(&VAR_1->port_lock, VAR_2);
}
