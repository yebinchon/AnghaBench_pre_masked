
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_eth_fq {int type; } ;





__attribute__((used)) static char *FUNC_0(struct dpaa2_eth_fq *VAR_0)
{
 switch (VAR_0->type) {
 case 129:
  return "Rx";
 case 128:
  return "Tx conf";
 default:
  return "N/A";
 }
}
