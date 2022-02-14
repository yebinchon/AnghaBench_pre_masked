
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typec_port {int dev; } ;
struct typec_plug {size_t index; } ;
struct typec_device_id {int member_1; int member_0; } ;
struct TYPE_2__ {int parent; } ;
struct typec_altmode {TYPE_1__ dev; int mode; int svid; } ;
struct device {int dummy; } ;
struct altmode {struct altmode* partner; struct altmode** plug; struct typec_altmode adev; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int *,struct typec_device_id*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct altmode* FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 struct typec_plug* FUNC_4 (int ) ;
 struct typec_port* FUNC_5 (struct typec_altmode*) ;

__attribute__((used)) static void FUNC_6(struct altmode *VAR_1)
{
 struct typec_altmode *VAR_2 = &VAR_1->adev;
 struct typec_device_id VAR_3 = { VAR_2->svid, VAR_2->mode, };
 struct typec_port *VAR_4 = FUNC_5(VAR_2);
 struct altmode *VAR_5;
 struct device *VAR_6;

 VAR_6 = FUNC_0(&VAR_4->dev, &VAR_3, VAR_0);
 if (!VAR_6)
  return;


 VAR_5 = FUNC_2(FUNC_3(VAR_6));
 VAR_1->partner = VAR_5;


 if (FUNC_1(VAR_2->dev.parent)) {
  struct typec_plug *VAR_7 = FUNC_4(VAR_2->dev.parent);

  VAR_5->plug[VAR_7->index] = VAR_1;
 } else {
  VAR_5->partner = VAR_1;
 }
}
