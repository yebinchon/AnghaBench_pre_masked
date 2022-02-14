
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_6__** attrs; } ;
struct mlxreg_io_priv_data {TYPE_5__** groups; TYPE_5__ group; TYPE_6__** mlxreg_io_attr; TYPE_4__* mlxreg_io_dev_attr; TYPE_3__* pdata; TYPE_1__* pdev; } ;
struct device_attribute {int dummy; } ;
struct attribute {int dummy; } ;
struct TYPE_14__ {scalar_t__ name; int mode; } ;
struct TYPE_15__ {TYPE_6__ attr; } ;
struct TYPE_12__ {int index; TYPE_7__ dev_attr; } ;
struct TYPE_11__ {int counter; TYPE_2__* data; } ;
struct TYPE_10__ {int mode; int label; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 TYPE_6__** FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (TYPE_7__*,int *,int) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_5(struct mlxreg_io_priv_data *VAR_3)
{
 int VAR_4;

 VAR_3->group.attrs = FUNC_2(&VAR_3->pdev->dev,
      VAR_3->pdata->counter,
      sizeof(struct attribute *),
      VAR_1);
 if (!VAR_3->group.attrs)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->pdata->counter; VAR_4++) {
  VAR_3->mlxreg_io_attr[VAR_4] =
    &VAR_3->mlxreg_io_dev_attr[VAR_4].dev_attr.attr;
  FUNC_3(&VAR_3->mlxreg_io_dev_attr[VAR_4].dev_attr,
         &VAR_2, sizeof(struct device_attribute));


  VAR_3->mlxreg_io_attr[VAR_4]->name =
    FUNC_1(&VAR_3->pdev->dev, VAR_1,
            VAR_3->pdata->data[VAR_4].label);

  if (!VAR_3->mlxreg_io_attr[VAR_4]->name) {
   FUNC_0(&VAR_3->pdev->dev, "Memory allocation failed for sysfs attribute %d.\n",
    VAR_4 + 1);
   return -VAR_0;
  }

  VAR_3->mlxreg_io_dev_attr[VAR_4].dev_attr.attr.mode =
      VAR_3->pdata->data[VAR_4].mode;
  VAR_3->mlxreg_io_dev_attr[VAR_4].dev_attr.attr.name =
     VAR_3->mlxreg_io_attr[VAR_4]->name;
  VAR_3->mlxreg_io_dev_attr[VAR_4].index = VAR_4;
  FUNC_4(&VAR_3->mlxreg_io_dev_attr[VAR_4].dev_attr.attr);
 }

 VAR_3->group.attrs = VAR_3->mlxreg_io_attr;
 VAR_3->groups[0] = &VAR_3->group;
 VAR_3->groups[1] = ((void*)0);

 return 0;
}
