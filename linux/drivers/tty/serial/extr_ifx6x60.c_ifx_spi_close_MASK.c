
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ifx_spi_device* driver_data; } ;
struct ifx_spi_device {int tty_port; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *,struct tty_struct*,struct file*) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct ifx_spi_device *VAR_2 = VAR_0->driver_data;
 FUNC_0(&VAR_2->tty_port, VAR_0, VAR_1);

}
