
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_node; struct device* parent; int * bus; int * type; } ;
struct spmi_controller {int nr; TYPE_1__ dev; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,struct spmi_controller*,int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 struct spmi_controller* FUNC_6 (int,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct spmi_controller*) ;
 int FUNC_8 (struct spmi_controller*,struct spmi_controller*) ;
 int VAR_3 ;

struct spmi_controller *FUNC_9(struct device *VAR_4,
           size_t VAR_5)
{
 struct spmi_controller *VAR_6;
 int VAR_7;

 if (FUNC_0(!VAR_4))
  return ((void*)0);

 VAR_6 = FUNC_6(sizeof(*VAR_6) + VAR_5, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 FUNC_4(&VAR_6->dev);
 VAR_6->dev.type = &VAR_3;
 VAR_6->dev.bus = &VAR_2;
 VAR_6->dev.parent = VAR_4;
 VAR_6->dev.of_node = VAR_4->of_node;
 FUNC_8(VAR_6, &VAR_6[1]);

 VAR_7 = FUNC_5(&VAR_1, 0, 0, VAR_0);
 if (VAR_7 < 0) {
  FUNC_2(VAR_4,
   "unable to allocate SPMI controller identifier.\n");
  FUNC_7(VAR_6);
  return ((void*)0);
 }

 VAR_6->nr = VAR_7;
 FUNC_3(&VAR_6->dev, "spmi-%d", VAR_7);

 FUNC_1(&VAR_6->dev, "allocated controller 0x%p id %d\n", VAR_6, VAR_7);
 return VAR_6;
}
