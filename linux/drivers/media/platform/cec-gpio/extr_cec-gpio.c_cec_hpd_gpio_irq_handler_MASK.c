
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_gpio {int hpd_is_high; int hpd_ts; int hpd_gpio; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct cec_gpio *VAR_4 = VAR_3;
 bool VAR_5 = FUNC_0(VAR_4->hpd_gpio);

 if (VAR_5 == VAR_4->hpd_is_high)
  return VAR_0;
 VAR_4->hpd_ts = FUNC_1();
 VAR_4->hpd_is_high = VAR_5;
 return VAR_1;
}
