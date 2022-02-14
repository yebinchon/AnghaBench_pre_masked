
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; int * s_d_op; } ;
struct TYPE_2__ {int * dir_ops; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct super_block *VAR_3)
{
 FUNC_0(VAR_3)->dir_ops = &VAR_2;
 VAR_3->s_d_op = &VAR_1;
 VAR_3->s_flags |= VAR_0;
}
