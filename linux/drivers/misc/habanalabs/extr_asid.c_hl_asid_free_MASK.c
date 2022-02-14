
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long max_asid; } ;
struct hl_device {int asid_bitmap; TYPE_1__ asic_prop; } ;


 scalar_t__ FUNC_0 (int,char*,unsigned long) ;
 int FUNC_1 (unsigned long,int ) ;

void FUNC_2(struct hl_device *VAR_0, unsigned long VAR_1)
{
 if (FUNC_0((VAR_1 == 0 || VAR_1 >= VAR_0->asic_prop.max_asid),
      "Invalid ASID %lu", VAR_1))
  return;
 FUNC_1(VAR_1, VAR_0->asid_bitmap);
}
