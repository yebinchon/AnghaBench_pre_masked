
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int num_pools; } ;
struct fm10k_hw {TYPE_1__ iov; } ;


 int VAR_0 ;

u16 FUNC_0(struct fm10k_hw *VAR_1)
{
 u16 VAR_2 = VAR_1->iov.num_pools;

 return (VAR_2 > 32) ? 2 : (VAR_2 > 16) ? 4 : (VAR_2 > 8) ?
        8 : VAR_0;
}
