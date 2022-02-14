
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci_hcd {int rh_state; } ;






__attribute__((used)) static const char *FUNC_0(struct ohci_hcd *VAR_0)
{
 switch (VAR_0->rh_state) {
 case 130:
  return "halted";
 case 128:
  return "suspended";
 case 129:
  return "running";
 }
 return "?";
}
