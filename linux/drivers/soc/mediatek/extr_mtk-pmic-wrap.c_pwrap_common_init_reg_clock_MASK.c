
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmic_wrapper {TYPE_1__* master; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;


 int FUNC_0 (struct pmic_wrapper*,int ,int,int,int) ;
 int FUNC_1 (struct pmic_wrapper*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pmic_wrapper *VAR_1)
{
 switch (VAR_1->master->type) {
 case 128:
  FUNC_0(VAR_1, 0, 4, 2, 2);
  break;
 case 129:
  FUNC_1(VAR_1, 0x4, VAR_0);
  FUNC_0(VAR_1, 0, 4, 0, 0);
  break;
 default:
  break;
 }

 return 0;
}
