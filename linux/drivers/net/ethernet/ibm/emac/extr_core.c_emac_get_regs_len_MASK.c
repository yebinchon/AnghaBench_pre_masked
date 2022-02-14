
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_regs {int dummy; } ;
struct emac_instance {int dummy; } ;
struct emac_ethtool_regs_subhdr {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct emac_instance *VAR_0)
{
  return sizeof(struct emac_ethtool_regs_subhdr) +
   sizeof(struct emac_regs);
}
