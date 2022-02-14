
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2i_endpoint {int state; TYPE_1__* hba; } ;
struct TYPE_2__ {int cnic_dev_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct bnx2i_endpoint *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 if (FUNC_0(VAR_0, &VAR_1->hba->cnic_dev_type))
  VAR_3 = 1;

 switch (VAR_1->state) {
 case 140:
 case 133:
 case 136:
  VAR_2 = 0;
  break;
 case 137:
 case 138:
 case 139:
 case 128:
 case 130:
 case 132:
 case 134:
 case 135:
 case 129:
  VAR_2 = 1;
  break;
 case 131:
  if (VAR_3)
   VAR_2 = 0;
  else
   VAR_2 = 1;
  break;
 default:
  VAR_2 = 0;
 }

 return VAR_2;
}
