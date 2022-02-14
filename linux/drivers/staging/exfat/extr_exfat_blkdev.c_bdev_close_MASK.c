
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct bd_info_t {int opened; } ;
struct TYPE_2__ {struct bd_info_t bd_info; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;

void FUNC_1(struct super_block *VAR_0)
{
 struct bd_info_t *VAR_1 = &(FUNC_0(VAR_0)->bd_info);

 VAR_1->opened = 0;
}
