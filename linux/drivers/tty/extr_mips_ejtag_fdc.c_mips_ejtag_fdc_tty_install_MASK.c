
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {size_t index; TYPE_1__* driver_data; } ;
struct tty_driver {struct mips_ejtag_fdc_tty* driver_state; } ;
struct mips_ejtag_fdc_tty {TYPE_1__* ports; } ;
struct TYPE_2__ {int port; } ;


 int FUNC_0 (int *,struct tty_driver*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_1(struct tty_driver *VAR_0,
          struct tty_struct *VAR_1)
{
 struct mips_ejtag_fdc_tty *VAR_2 = VAR_0->driver_state;

 VAR_1->driver_data = &VAR_2->ports[VAR_1->index];
 return FUNC_0(&VAR_2->ports[VAR_1->index].port, VAR_0, VAR_1);
}
