
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __vxge_hw_channel {int reserve_ptr; int reserve_top; int length; int free_ptr; } ;



int FUNC_0(struct __vxge_hw_channel *VAR_0)
{
 return (VAR_0->reserve_ptr - VAR_0->reserve_top) +
  (VAR_0->length - VAR_0->free_ptr);
}
