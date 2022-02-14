
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_hw_dev_id {scalar_t__ device; } ;
struct scif_hw_dev {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct scif_hw_dev_id* id_table; } ;


 struct scif_hw_dev* FUNC_0 (struct device*) ;
 TYPE_1__* FUNC_1 (struct device_driver*) ;
 scalar_t__ FUNC_2 (struct scif_hw_dev*,struct scif_hw_dev_id const*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 unsigned int VAR_2;
 struct scif_hw_dev *VAR_3 = FUNC_0(VAR_0);
 const struct scif_hw_dev_id *VAR_4;

 VAR_4 = FUNC_1(VAR_1)->id_table;
 for (VAR_2 = 0; VAR_4[VAR_2].device; VAR_2++)
  if (FUNC_2(VAR_3, &VAR_4[VAR_2]))
   return 1;
 return 0;
}
