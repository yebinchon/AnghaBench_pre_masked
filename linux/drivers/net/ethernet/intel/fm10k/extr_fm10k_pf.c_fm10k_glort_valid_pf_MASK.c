
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int dglort_map; } ;
struct fm10k_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(struct fm10k_hw *VAR_2, u16 VAR_3)
{
 VAR_3 &= VAR_2->mac.dglort_map >> VAR_0;

 return VAR_3 == (VAR_2->mac.dglort_map & VAR_1);
}
