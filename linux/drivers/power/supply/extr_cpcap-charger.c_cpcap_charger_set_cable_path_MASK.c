
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_charger_ddata {int * gpio; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct cpcap_charger_ddata *VAR_0,
      bool VAR_1)
{
 if (!VAR_0->gpio[0])
  return;

 FUNC_0(VAR_0->gpio[0], VAR_1);
}
