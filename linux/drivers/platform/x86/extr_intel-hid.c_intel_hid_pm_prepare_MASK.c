
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_hid_priv {int wakeup_mode; } ;
struct device {int dummy; } ;


 struct intel_hid_priv* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  struct intel_hid_priv *VAR_1 = FUNC_0(VAR_0);

  VAR_1->wakeup_mode = 1;
 }
 return 0;
}
