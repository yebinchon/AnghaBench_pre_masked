
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int state; } ;
struct nvme_dev {TYPE_1__ ctrl; scalar_t__ subsystem; } ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static bool FUNC_0(struct nvme_dev *VAR_2, u32 VAR_3)
{




 bool VAR_4 = VAR_2->subsystem && (VAR_3 & VAR_1);


 switch (VAR_2->ctrl.state) {
 case 128:
 case 129:
  return 0;
 default:
  break;
 }




 if (!(VAR_3 & VAR_0) && !VAR_4)
  return 0;

 return 1;
}
