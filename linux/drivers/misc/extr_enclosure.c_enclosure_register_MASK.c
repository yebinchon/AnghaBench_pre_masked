
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parent; int * class; } ;
struct enclosure_device {int components; TYPE_2__ edev; int node; TYPE_1__* component; struct enclosure_component_callbacks* cb; } ;
struct enclosure_component_callbacks {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int number; int slot; int power_status; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct enclosure_device* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,char*,char const*) ;
 int FUNC_3 (TYPE_2__*) ;
 struct enclosure_device* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct enclosure_device*) ;
 struct enclosure_device* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int) ;

struct enclosure_device *
FUNC_12(struct device *VAR_7, const char *VAR_8, int VAR_9,
     struct enclosure_component_callbacks *VAR_10)
{
 struct enclosure_device *VAR_11 =
  FUNC_6(FUNC_11(VAR_11, VAR_2, VAR_9), VAR_1);
 int VAR_12, VAR_13;

 FUNC_0(!VAR_10);

 if (!VAR_11)
  return FUNC_1(-VAR_0);

 VAR_11->components = VAR_9;

 VAR_11->edev.class = &VAR_6;
 VAR_11->edev.parent = FUNC_4(VAR_7);
 VAR_11->cb = VAR_10;
 FUNC_2(&VAR_11->edev, "%s", VAR_8);
 VAR_12 = FUNC_3(&VAR_11->edev);
 if (VAR_12)
  goto err;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  VAR_11->component[VAR_13].number = -1;
  VAR_11->component[VAR_13].slot = -1;
  VAR_11->component[VAR_13].power_status = -1;
 }

 FUNC_8(&VAR_4);
 FUNC_7(&VAR_11->node, &VAR_3);
 FUNC_9(&VAR_4);

 return VAR_11;

 err:
 FUNC_10(VAR_11->edev.parent);
 FUNC_5(VAR_11);
 return FUNC_1(VAR_12);
}
