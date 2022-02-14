
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct fwtty_port* driver_data; } ;
struct fwtty_port {int dummy; } ;


 int FUNC_0 (struct fwtty_port*,char*,char) ;
 int FUNC_1 (struct fwtty_port*,char) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0, char VAR_1)
{
 struct fwtty_port *VAR_2 = VAR_0->driver_data;

 FUNC_0(VAR_2, "%02x\n", VAR_1);

 FUNC_1(VAR_2, VAR_1);
}
