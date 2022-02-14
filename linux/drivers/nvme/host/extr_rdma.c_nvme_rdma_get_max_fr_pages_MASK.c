
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_fast_reg_page_list_len; } ;
struct ib_device {TYPE_1__ attrs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct ib_device *VAR_2)
{
 return FUNC_0(VAR_1, VAR_0,
       VAR_2->attrs.max_fast_reg_page_list_len - 1);
}
