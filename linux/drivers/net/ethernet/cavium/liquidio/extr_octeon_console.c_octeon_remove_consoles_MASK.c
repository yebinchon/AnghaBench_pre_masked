
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct octeon_device {size_t num_consoles; TYPE_1__* console_poll_work; struct octeon_console* console; } ;
struct octeon_console {scalar_t__ output_base_addr; scalar_t__ input_base_addr; scalar_t__ buffer_size; scalar_t__ addr; int active; } ;
struct TYPE_2__ {int work; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct octeon_device *VAR_0)
{
 u32 VAR_1;
 struct octeon_console *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_consoles; VAR_1++) {
  VAR_2 = &VAR_0->console[VAR_1];

  if (!VAR_2->active)
   continue;

  FUNC_0(&VAR_0->console_poll_work[VAR_1].
      work);
  VAR_2->addr = 0;
  VAR_2->buffer_size = 0;
  VAR_2->input_base_addr = 0;
  VAR_2->output_base_addr = 0;
 }

 VAR_0->num_consoles = 0;
}
