
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_hcd {int rh_state; } ;







__attribute__((used)) static const char *FUNC_0(struct fotg210_hcd *VAR_0)
{
 switch (VAR_0->rh_state) {
 case 131:
  return "halted";
 case 128:
  return "suspended";
 case 130:
  return "running";
 case 129:
  return "stopping";
 }
 return "?";
}
