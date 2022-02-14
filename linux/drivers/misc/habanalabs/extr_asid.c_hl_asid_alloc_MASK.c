
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long max_asid; } ;
struct hl_device {int asid_mutex; int asid_bitmap; TYPE_1__ asic_prop; } ;


 unsigned long FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned long,int ) ;

unsigned long FUNC_4(struct hl_device *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->asid_mutex);

 VAR_1 = FUNC_0(VAR_0->asid_bitmap,
     VAR_0->asic_prop.max_asid);
 if (VAR_1 == VAR_0->asic_prop.max_asid)
  VAR_1 = 0;
 else
  FUNC_3(VAR_1, VAR_0->asid_bitmap);

 FUNC_2(&VAR_0->asid_mutex);

 return VAR_1;
}
