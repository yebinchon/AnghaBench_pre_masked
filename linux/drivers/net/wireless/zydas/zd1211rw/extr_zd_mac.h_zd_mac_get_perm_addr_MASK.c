
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct zd_mac {TYPE_2__* hw; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct TYPE_3__ {int * perm_addr; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct zd_mac *VAR_0)
{
 return VAR_0->hw->wiphy->perm_addr;
}
