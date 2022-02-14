
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_instance {unsigned int drv_buf_alloc; scalar_t__ fw_crash_buffer_size; int fw_crash_state; scalar_t__ drv_buf_index; scalar_t__* crash_buf; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

void
FUNC_1(struct megasas_instance *VAR_1)
{
 unsigned int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->drv_buf_alloc; VAR_2++) {
  if (VAR_1->crash_buf[VAR_2])
   FUNC_0(VAR_1->crash_buf[VAR_2]);
 }
 VAR_1->drv_buf_index = 0;
 VAR_1->drv_buf_alloc = 0;
 VAR_1->fw_crash_state = VAR_0;
 VAR_1->fw_crash_buffer_size = 0;
}
