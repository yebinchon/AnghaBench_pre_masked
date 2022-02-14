
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_gpio {int hpd_gpio; } ;
struct cec_adapter {int dummy; } ;


 int VAR_0 ;
 struct cec_gpio* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct cec_adapter *VAR_1)
{
 struct cec_gpio *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2->hpd_gpio)
  return -VAR_0;
 return FUNC_1(VAR_2->hpd_gpio);
}
