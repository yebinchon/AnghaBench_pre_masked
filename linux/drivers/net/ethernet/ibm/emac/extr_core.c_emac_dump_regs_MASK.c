
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_regs {int dummy; } ;
struct emac_instance {int emacp; int cell_index; } ;
struct emac_ethtool_regs_subhdr {int version; int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct emac_instance*,int ) ;
 int FUNC_1 (struct emac_ethtool_regs_subhdr*,int ,int) ;

__attribute__((used)) static void *FUNC_2(struct emac_instance *VAR_5, void *VAR_6)
{
 struct emac_ethtool_regs_subhdr *VAR_7 = VAR_6;

 VAR_7->index = VAR_5->cell_index;
 if (FUNC_0(VAR_5, VAR_4)) {
  VAR_7->version = VAR_0;
 } else if (FUNC_0(VAR_5, VAR_3)) {
  VAR_7->version = VAR_1;
 } else {
  VAR_7->version = VAR_2;
 }
 FUNC_1(VAR_7 + 1, VAR_5->emacp, sizeof(struct emac_regs));
 return (void *)(VAR_7 + 1) + sizeof(struct emac_regs);
}
