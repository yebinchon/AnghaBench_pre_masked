
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fujitsu_laptop {TYPE_1__* input; int fifo_lock; int fifo; } ;
struct acpi_device {int dummy; } ;
typedef int scancode ;
struct TYPE_2__ {int dev; } ;


 struct fujitsu_laptop* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,unsigned char*,int,int *) ;
 int FUNC_3 (TYPE_1__*,int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct acpi_device *VAR_0)
{
 struct fujitsu_laptop *VAR_1 = FUNC_0(VAR_0);
 int VAR_2, VAR_3;

 while (1) {
  VAR_3 = FUNC_2(&VAR_1->fifo, (unsigned char *)&VAR_2,
           sizeof(VAR_2), &VAR_1->fifo_lock);
  if (VAR_3 != sizeof(VAR_2))
   return;
  FUNC_3(VAR_1->input, VAR_2, 0, 0);
  FUNC_1(&VAR_1->input->dev,
   "Pop scancode from ringbuffer [0x%x]\n", VAR_2);
 }
}
