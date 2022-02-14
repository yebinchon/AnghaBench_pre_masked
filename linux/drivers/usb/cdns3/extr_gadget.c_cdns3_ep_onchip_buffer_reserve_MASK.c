
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3_device {int onchip_buffers; int onchip_used_size; int out_mem_is_allocated; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cdns3_device *VAR_1,
       int VAR_2, int VAR_3)
{
 int VAR_4;


 VAR_4 = VAR_1->onchip_buffers - VAR_1->onchip_used_size - 2;

 if (VAR_3) {
  if (VAR_4 < VAR_2)
   return -VAR_0;

  VAR_1->onchip_used_size += VAR_2;
 } else {
  int VAR_5;





  if (VAR_1->out_mem_is_allocated >= VAR_2)
   return 0;

  VAR_5 = VAR_2 - VAR_1->out_mem_is_allocated;

  if (VAR_5 > VAR_4)
   return -VAR_0;

  VAR_1->out_mem_is_allocated += VAR_5;
  VAR_1->onchip_used_size += VAR_5;
 }

 return 0;
}
