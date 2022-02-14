
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ifx_spi_device* driver_data; } ;
struct ifx_spi_device {int tty_port; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0)
{
 struct ifx_spi_device *VAR_1 = VAR_0->driver_data;
 FUNC_0(&VAR_1->tty_port);
}
