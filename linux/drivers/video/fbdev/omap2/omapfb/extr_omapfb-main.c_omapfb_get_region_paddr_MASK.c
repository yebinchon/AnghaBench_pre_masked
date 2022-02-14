
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct omapfb_info {scalar_t__ rotation_type; TYPE_2__* region; } ;
struct TYPE_3__ {int * paddr; } ;
struct TYPE_4__ {int paddr; TYPE_1__ vrfb; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(const struct omapfb_info *VAR_1)
{
 if (VAR_1->rotation_type == VAR_0)
  return VAR_1->region->vrfb.paddr[0];
 else
  return VAR_1->region->paddr;
}
