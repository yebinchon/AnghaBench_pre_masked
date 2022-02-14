
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* region; } ;
struct pm8001_hba_info {struct pm8001_hba_info* tags; TYPE_3__ memoryMap; TYPE_1__* pdev; } ;
struct TYPE_8__ {int (* chip_iounmap ) (struct pm8001_hba_info*) ;} ;
struct TYPE_6__ {int phys_addr; int * virt_ptr; scalar_t__ alignment; scalar_t__ total_len; } ;
struct TYPE_5__ {int dev; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pm8001_hba_info*) ;
 int VAR_2 ;
 int FUNC_3 (struct pm8001_hba_info*) ;

__attribute__((used)) static void FUNC_4(struct pm8001_hba_info *VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3->memoryMap.region[VAR_4].virt_ptr != ((void*)0)) {
   FUNC_0(&VAR_3->pdev->dev,
    (VAR_3->memoryMap.region[VAR_4].total_len +
    VAR_3->memoryMap.region[VAR_4].alignment),
    VAR_3->memoryMap.region[VAR_4].virt_ptr,
    VAR_3->memoryMap.region[VAR_4].phys_addr);
   }
 }
 VAR_0->chip_iounmap(VAR_3);
 FUNC_1(VAR_2);
 FUNC_2(VAR_3->tags);
 FUNC_2(VAR_3);
}
