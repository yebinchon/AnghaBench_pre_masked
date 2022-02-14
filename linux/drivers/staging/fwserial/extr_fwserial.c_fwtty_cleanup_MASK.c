
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct fwtty_port* driver_data; } ;
struct fwtty_port {int dummy; } ;


 int FUNC_0 (struct fwtty_port*) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0)
{
 struct fwtty_port *VAR_1 = VAR_0->driver_data;

 VAR_0->driver_data = ((void*)0);
 FUNC_0(VAR_1);
}
