
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct pmu {TYPE_1__* dev; scalar_t__ attr_update; scalar_t__ nr_addr_filters; int name; int attr_groups; } ;
struct device {int dummy; } ;
struct TYPE_9__ {int kobj; int release; int * bus; int groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct pmu*) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct pmu *VAR_5)
{
 int VAR_6 = -VAR_0;

 VAR_5->dev = FUNC_6(sizeof(struct device), VAR_1);
 if (!VAR_5->dev)
  goto out;

 VAR_5->dev->groups = VAR_5->attr_groups;
 FUNC_5(VAR_5->dev);
 VAR_6 = FUNC_1(VAR_5->dev, "%s", VAR_5->name);
 if (VAR_6)
  goto free_dev;

 FUNC_0(VAR_5->dev, VAR_5);
 VAR_5->dev->bus = &VAR_3;
 VAR_5->dev->release = VAR_4;
 VAR_6 = FUNC_2(VAR_5->dev);
 if (VAR_6)
  goto free_dev;


 if (VAR_5->nr_addr_filters)
  VAR_6 = FUNC_3(VAR_5->dev, &VAR_2);

 if (VAR_6)
  goto del_dev;

 if (VAR_5->attr_update)
  VAR_6 = FUNC_8(&VAR_5->dev->kobj, VAR_5->attr_update);

 if (VAR_6)
  goto del_dev;

out:
 return VAR_6;

del_dev:
 FUNC_4(VAR_5->dev);

free_dev:
 FUNC_7(VAR_5->dev);
 goto out;
}
