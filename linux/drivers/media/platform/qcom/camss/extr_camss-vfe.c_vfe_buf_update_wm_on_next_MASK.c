
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_output {int state; } ;
struct vfe_device {TYPE_1__* camss; } ;
struct TYPE_2__ {int dev; } ;




 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct vfe_device*,struct vfe_output*,int) ;

__attribute__((used)) static void FUNC_2(struct vfe_device *VAR_0,
          struct vfe_output *VAR_1)
{
 switch (VAR_1->state) {
 case 129:
  FUNC_1(VAR_0, VAR_1, 3);
  break;
 case 128:
 default:
  FUNC_0(VAR_0->camss->dev,
        "Next buf in wrong state! %d\n",
        VAR_1->state);
  break;
 }
}
