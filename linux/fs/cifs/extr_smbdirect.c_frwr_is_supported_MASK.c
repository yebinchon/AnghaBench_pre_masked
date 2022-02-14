
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device_attr {int device_cap_flags; scalar_t__ max_fast_reg_page_list_len; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct ib_device_attr *VAR_1)
{
 if (!(VAR_1->device_cap_flags & VAR_0))
  return 0;
 if (VAR_1->max_fast_reg_page_list_len == 0)
  return 0;
 return 1;
}
