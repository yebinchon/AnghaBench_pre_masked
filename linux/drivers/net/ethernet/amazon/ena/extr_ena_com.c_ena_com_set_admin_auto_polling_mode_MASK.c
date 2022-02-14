
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int auto_polling; } ;
struct ena_com_dev {TYPE_1__ admin_queue; } ;



void FUNC_0(struct ena_com_dev *VAR_0,
      bool VAR_1)
{
 VAR_0->admin_queue.auto_polling = VAR_1;
}
