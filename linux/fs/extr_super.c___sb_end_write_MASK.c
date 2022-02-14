
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rw_sem; } ;
struct super_block {TYPE_1__ s_writers; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct super_block *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->s_writers.rw_sem + VAR_1-1);
}
