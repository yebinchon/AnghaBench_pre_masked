
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_tx_info {int local_port; } ;
struct mlxsw_pci_queue {int dummy; } ;
struct mlxsw_pci {int dummy; } ;


 int FUNC_0 (struct mlxsw_pci*) ;
 struct mlxsw_pci_queue* FUNC_1 (struct mlxsw_pci*,int) ;

__attribute__((used)) static struct mlxsw_pci_queue *
FUNC_2(struct mlxsw_pci *VAR_0,
     const struct mlxsw_tx_info *VAR_1)
{
 u8 VAR_2 = VAR_1->local_port % FUNC_0(VAR_0);

 return FUNC_1(VAR_0, VAR_2);
}
