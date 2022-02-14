
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_gpio {int cec_gpio; scalar_t__ cec_is_low; } ;
struct cec_adapter {int dummy; } ;


 struct cec_gpio* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct cec_adapter *VAR_0)
{
 struct cec_gpio *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->cec_is_low)
  return 0;
 return FUNC_1(VAR_1->cec_gpio);
}
