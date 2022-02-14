
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_port {int port_lock; int port_write_buf; int * port_usb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct gs_port *VAR_0)
{
 int VAR_1;


 FUNC_1(&VAR_0->port_lock);
 VAR_1 = (VAR_0->port_usb == ((void*)0)) || !FUNC_0(&VAR_0->port_write_buf);
 FUNC_2(&VAR_0->port_lock);

 return VAR_1;
}
