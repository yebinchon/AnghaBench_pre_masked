
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(int VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "0 (GC)";
 case 130:
  return "1 (base)";
 case 129:
  return "2 (data)";
 default:
  return "unknown journal head";
 }
}
