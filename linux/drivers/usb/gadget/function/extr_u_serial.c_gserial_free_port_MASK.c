
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_port {int port; int * port_usb; int close_wait; int push; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gs_port*) ;
 int FUNC_3 (struct gs_port*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct gs_port *VAR_0)
{
 FUNC_1(&VAR_0->push);

 FUNC_5(VAR_0->close_wait, FUNC_2(VAR_0));
 FUNC_0(VAR_0->port_usb != ((void*)0));
 FUNC_4(&VAR_0->port);
 FUNC_3(VAR_0);
}
