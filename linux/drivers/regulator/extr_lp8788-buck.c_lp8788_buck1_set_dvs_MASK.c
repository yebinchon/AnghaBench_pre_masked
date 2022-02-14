
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8788_buck1_dvs {scalar_t__ vsel; int gpio; } ;
struct lp8788_buck {scalar_t__ dvs; } ;
typedef enum lp8788_dvs_state { ____Placeholder_lp8788_dvs_state } lp8788_dvs_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct lp8788_buck *VAR_3)
{
 struct lp8788_buck1_dvs *VAR_4 = (struct lp8788_buck1_dvs *)VAR_3->dvs;
 enum lp8788_dvs_state VAR_5;

 if (!VAR_4)
  return;

 VAR_5 = VAR_4->vsel == VAR_2 ? VAR_1 : VAR_0;
 if (FUNC_0(VAR_4->gpio))
  FUNC_1(VAR_4->gpio, VAR_5);
}
