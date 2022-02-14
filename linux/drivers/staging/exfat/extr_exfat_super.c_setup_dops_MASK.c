
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int * s_d_op; } ;
struct TYPE_3__ {scalar_t__ casesensitive; } ;
struct TYPE_4__ {TYPE_1__ options; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct super_block *VAR_2)
{
 if (FUNC_0(VAR_2)->options.casesensitive == 0)
  VAR_2->s_d_op = &VAR_0;
 else
  VAR_2->s_d_op = &VAR_1;
}
