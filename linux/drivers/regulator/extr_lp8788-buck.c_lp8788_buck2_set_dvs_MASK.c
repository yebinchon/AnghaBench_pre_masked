
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8788_buck2_dvs {int vsel; int * gpio; } ;
struct lp8788_buck {scalar_t__ dvs; } ;
typedef enum lp8788_dvs_state { ____Placeholder_lp8788_dvs_state } lp8788_dvs_state ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct lp8788_buck *VAR_2)
{
 struct lp8788_buck2_dvs *VAR_3 = (struct lp8788_buck2_dvs *)VAR_2->dvs;
 enum lp8788_dvs_state VAR_4, VAR_5;

 if (!VAR_3)
  return;

 switch (VAR_3->vsel) {
 case 131:
  VAR_4 = VAR_1;
  VAR_5 = VAR_1;
  break;
 case 130:
  VAR_4 = VAR_0;
  VAR_5 = VAR_1;
  break;
 case 129:
  VAR_4 = VAR_1;
  VAR_5 = VAR_0;
  break;
 case 128:
  VAR_4 = VAR_0;
  VAR_5 = VAR_0;
  break;
 default:
  return;
 }

 if (FUNC_0(VAR_3->gpio[0]))
  FUNC_1(VAR_3->gpio[0], VAR_4);

 if (FUNC_0(VAR_3->gpio[1]))
  FUNC_1(VAR_3->gpio[1], VAR_5);
}
