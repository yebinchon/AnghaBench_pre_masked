
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct ddb {int i2c_num; int ddb_dev; TYPE_3__* link; } ;
struct TYPE_12__ {scalar_t__ name; } ;
struct TYPE_15__ {TYPE_1__ attr; } ;
struct TYPE_14__ {TYPE_2__* info; } ;
struct TYPE_13__ {int temp_num; int fan_num; scalar_t__ tempmon_irq; scalar_t__ led_num; } ;


 TYPE_4__* VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_4__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_4__* VAR_6 ;
 scalar_t__ FUNC_0 (int ,TYPE_4__*) ;

__attribute__((used)) static int FUNC_1(struct ddb *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_0[VAR_8].attr.name; VAR_8++)
  if (FUNC_0(VAR_7->ddb_dev, &VAR_0[VAR_8]))
   goto fail;
 for (VAR_8 = 0; VAR_8 < VAR_7->link[0].info->temp_num; VAR_8++)
  if (FUNC_0(VAR_7->ddb_dev, &VAR_6[VAR_8]))
   goto fail;
 for (VAR_8 = 0; VAR_8 < VAR_7->link[0].info->fan_num; VAR_8++)
  if (FUNC_0(VAR_7->ddb_dev, &VAR_2[VAR_8]))
   goto fail;
 for (VAR_8 = 0; (VAR_8 < VAR_7->i2c_num) && (VAR_8 < 4); VAR_8++) {
  if (FUNC_0(VAR_7->ddb_dev, &VAR_5[VAR_8]))
   goto fail;
  if (FUNC_0(VAR_7->ddb_dev, &VAR_1[VAR_8]))
   goto fail;
  if (VAR_7->link[0].info->led_num)
   if (FUNC_0(VAR_7->ddb_dev,
            &VAR_4[VAR_8]))
    goto fail;
 }
 for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
  if (VAR_7->link[VAR_8].info && VAR_7->link[VAR_8].info->tempmon_irq)
   if (FUNC_0(VAR_7->ddb_dev,
            &VAR_3[VAR_8]))
    goto fail;
 return 0;
fail:
 return -1;
}
