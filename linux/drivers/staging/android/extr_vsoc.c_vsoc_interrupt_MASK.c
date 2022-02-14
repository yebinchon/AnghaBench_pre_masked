
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vsoc_region_data {int interrupt_wait_queue; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {TYPE_2__* dev; struct vsoc_region_data* regions_data; TYPE_1__* layout; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int region_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,struct vsoc_region_data*,int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct vsoc_region_data *VAR_5 =
     (struct vsoc_region_data *)VAR_4;
 int VAR_6 = VAR_5 - VAR_2.regions_data;

 if (FUNC_1(!VAR_5))
  return VAR_1;

 if (FUNC_1(VAR_6 < 0 ||
       VAR_6 >= VAR_2.layout->region_count)) {
  FUNC_0(&VAR_2.dev->dev,
   "invalid irq @%p reg_num=0x%04x\n",
   VAR_5, VAR_6);
  return VAR_1;
 }
 if (FUNC_1(VAR_2.regions_data + VAR_6 != VAR_5)) {
  FUNC_0(&VAR_2.dev->dev,
   "irq not aligned @%p reg_num=0x%04x\n",
   VAR_5, VAR_6);
  return VAR_1;
 }
 FUNC_2(&VAR_5->interrupt_wait_queue);
 return VAR_0;
}
