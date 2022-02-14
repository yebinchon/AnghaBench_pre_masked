
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pinctrl {int ncommunities; struct intel_community* communities; } ;
struct intel_community {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct intel_pinctrl*,struct intel_community const*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 const struct intel_community *VAR_3;
 struct intel_pinctrl *VAR_4 = VAR_2;
 irqreturn_t VAR_5 = VAR_0;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_4->ncommunities; VAR_6++) {
  VAR_3 = &VAR_4->communities[VAR_6];
  VAR_5 |= FUNC_0(VAR_4, VAR_3);
 }

 return VAR_5;
}
