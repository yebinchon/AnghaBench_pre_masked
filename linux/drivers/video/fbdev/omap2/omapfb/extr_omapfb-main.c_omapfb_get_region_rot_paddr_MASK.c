
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct omapfb_info {scalar_t__ rotation_type; TYPE_2__* region; } ;
struct TYPE_3__ {scalar_t__* paddr; } ;
struct TYPE_4__ {scalar_t__ paddr; TYPE_1__ vrfb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct omapfb_info const*,int) ;

__attribute__((used)) static u32 FUNC_1(const struct omapfb_info *VAR_1, int VAR_2)
{
 if (VAR_1->rotation_type == VAR_0) {
  return VAR_1->region->vrfb.paddr[VAR_2]
   + FUNC_0(VAR_1, VAR_2);
 } else {
  return VAR_1->region->paddr;
 }
}
