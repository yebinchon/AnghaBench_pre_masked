
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int kobj; } ;
struct TYPE_6__ {struct device dev; } ;
struct altmode {TYPE_3__ adev; TYPE_2__* partner; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_5__ {TYPE_1__ adev; } ;


 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct altmode *VAR_0)
{
 struct device *VAR_1 = &VAR_0->partner->adev.dev;
 struct device *VAR_2 = &VAR_0->adev.dev;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->kobj, &VAR_1->kobj, "port");
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(&VAR_1->kobj, &VAR_2->kobj, "partner");
 if (VAR_3)
  FUNC_1(&VAR_2->kobj, "port");

 return VAR_3;
}
