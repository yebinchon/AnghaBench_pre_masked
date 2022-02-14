
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * type; int * bus; int * parent; } ;
struct spmi_device {TYPE_1__ dev; struct spmi_controller* ctrl; } ;
struct spmi_controller {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct spmi_device* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

struct spmi_device *FUNC_2(struct spmi_controller *VAR_3)
{
 struct spmi_device *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->ctrl = VAR_3;
 FUNC_0(&VAR_4->dev);
 VAR_4->dev.parent = &VAR_3->dev;
 VAR_4->dev.bus = &VAR_1;
 VAR_4->dev.type = &VAR_2;
 return VAR_4;
}
