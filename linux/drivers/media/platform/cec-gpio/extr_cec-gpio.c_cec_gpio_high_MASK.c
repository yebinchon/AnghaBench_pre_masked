
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_gpio {int cec_is_low; int cec_gpio; } ;
struct cec_adapter {int dummy; } ;


 struct cec_gpio* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct cec_adapter *VAR_0)
{
 struct cec_gpio *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->cec_is_low)
  return;
 VAR_1->cec_is_low = 0;
 FUNC_1(VAR_1->cec_gpio, 1);
}
