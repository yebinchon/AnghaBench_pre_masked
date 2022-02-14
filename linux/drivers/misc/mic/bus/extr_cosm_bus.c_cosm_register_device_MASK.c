
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct cosm_hw_ops {int dummy; } ;
struct TYPE_5__ {int id; int * bus; int release; struct device* parent; } ;
struct cosm_device {int index; TYPE_1__ dev; struct cosm_hw_ops* hw_ops; } ;


 int VAR_0 ;
 struct cosm_device* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,struct cosm_device*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int) ;
 struct cosm_device* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_1__*) ;

struct cosm_device *
FUNC_8(struct device *VAR_5, struct cosm_hw_ops *VAR_6)
{
 struct cosm_device *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->dev.parent = VAR_5;
 VAR_7->dev.release = VAR_4;
 VAR_7->hw_ops = VAR_6;
 FUNC_1(&VAR_7->dev, VAR_7);
 VAR_7->dev.bus = &VAR_2;


 VAR_8 = FUNC_4(&VAR_3, 0, 0, VAR_1);
 if (VAR_8 < 0)
  goto free_cdev;

 VAR_7->index = VAR_8;
 VAR_7->dev.id = VAR_8;
 FUNC_2(&VAR_7->dev, "cosm-dev%u", VAR_7->index);

 VAR_8 = FUNC_3(&VAR_7->dev);
 if (VAR_8)
  goto ida_remove;
 return VAR_7;
ida_remove:
 FUNC_5(&VAR_3, VAR_7->index);
free_cdev:
 FUNC_7(&VAR_7->dev);
 return FUNC_0(VAR_8);
}
