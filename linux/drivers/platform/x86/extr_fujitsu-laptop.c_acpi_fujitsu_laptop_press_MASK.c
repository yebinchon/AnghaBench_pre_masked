
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
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,unsigned char*,int,int *) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static void FUNC_5(struct acpi_device *VAR_0, int VAR_1)
{
 struct fujitsu_laptop *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_3(&VAR_2->fifo, (unsigned char *)&VAR_1,
         sizeof(VAR_1), &VAR_2->fifo_lock);
 if (VAR_3 != sizeof(VAR_1)) {
  FUNC_2(&VAR_2->input->dev, "Could not push scancode [0x%x]\n",
    VAR_1);
  return;
 }
 FUNC_4(VAR_2->input, VAR_1, 1, 0);
 FUNC_1(&VAR_2->input->dev, "Push scancode into ringbuffer [0x%x]\n",
  VAR_1);
}
