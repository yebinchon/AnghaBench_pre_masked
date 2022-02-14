
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct megasas_instance {unsigned int drv_buf_alloc; TYPE_1__* pdev; int * crash_buf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct megasas_instance *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2->crash_buf[VAR_3] = FUNC_1(VAR_0);
  if (!VAR_2->crash_buf[VAR_3]) {
   FUNC_0(&VAR_2->pdev->dev, "Firmware crash dump "
    "memory allocation failed at index %d\n", VAR_3);
   break;
  }
 }
 VAR_2->drv_buf_alloc = VAR_3;
}
