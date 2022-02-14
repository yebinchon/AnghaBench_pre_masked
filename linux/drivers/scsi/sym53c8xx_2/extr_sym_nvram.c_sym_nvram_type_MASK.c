
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_nvram {int type; } ;






char *FUNC_0(struct sym_nvram *VAR_0)
{
 switch (VAR_0->type) {
 case 129:
  return "Symbios NVRAM";
 case 128:
  return "Tekram NVRAM";
 case 130:
  return "PA-RISC Firmware";
 default:
  return "No NVRAM";
 }
}
