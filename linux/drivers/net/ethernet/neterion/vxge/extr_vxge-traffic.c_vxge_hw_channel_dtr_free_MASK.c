
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __vxge_hw_channel {size_t free_ptr; void** free_arr; } ;



void FUNC_0(struct __vxge_hw_channel *VAR_0, void *VAR_1)
{
 VAR_0->free_arr[--VAR_0->free_ptr] = VAR_1;
}
