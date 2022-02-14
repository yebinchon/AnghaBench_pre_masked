
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_output {int state; } ;
struct vfe_device {TYPE_1__* camss; } ;
struct TYPE_2__ {int dev; } ;




 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct vfe_device*,struct vfe_output*,int) ;

__attribute__((used)) static void FUNC_2(struct vfe_device *VAR_1,
          struct vfe_output *VAR_2)
{
 switch (VAR_2->state) {
 case 129:
  VAR_2->state = 128;
  FUNC_1(VAR_1, VAR_2, 1);
  break;
 case 128:
  VAR_2->state = VAR_0;
  FUNC_1(VAR_1, VAR_2, 0);
  break;
 default:
  FUNC_0(VAR_1->camss->dev,
        "Last buff in wrong state! %d\n",
        VAR_2->state);
  break;
 }
}
