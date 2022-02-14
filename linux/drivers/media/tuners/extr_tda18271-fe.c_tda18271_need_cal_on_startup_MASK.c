
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_config {scalar_t__ rf_cal_on_startup; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct tda18271_config *VAR_1)
{

 return ((VAR_0 == -1) ?

  ((VAR_1) && (VAR_1->rf_cal_on_startup)) :

  (VAR_0)) ? 1 : 0;
}
