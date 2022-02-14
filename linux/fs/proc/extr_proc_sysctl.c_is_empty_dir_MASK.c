
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctl_table_header {TYPE_1__* ctl_table; } ;
struct TYPE_2__ {scalar_t__ child; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct ctl_table_header *VAR_1)
{
 return VAR_1->ctl_table[0].child == VAR_0;
}
