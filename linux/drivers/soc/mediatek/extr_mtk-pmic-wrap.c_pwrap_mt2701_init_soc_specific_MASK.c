
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmic_wrapper {TYPE_1__* slave; } ;
struct TYPE_2__ {int type; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pmic_wrapper*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct pmic_wrapper *VAR_5)
{

 switch (VAR_5->slave->type) {
 case 128:
  FUNC_0(VAR_5, 0x076c, VAR_0);
  FUNC_0(VAR_5, 0x8000, VAR_4);
  FUNC_0(VAR_5, 0x072c, VAR_3);
  FUNC_0(VAR_5, 0x072e, VAR_1);
  FUNC_0(VAR_5, 0x0730, VAR_2);
  break;
 default:
  break;
 }

 return 0;
}
