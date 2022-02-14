
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_tx_info {int dummy; } ;
struct mlxsw_pci_queue {int dummy; } ;
struct mlxsw_pci {int dummy; } ;


 int FUNC_0 (struct mlxsw_pci_queue*) ;
 struct mlxsw_pci_queue* FUNC_1 (struct mlxsw_pci*,struct mlxsw_tx_info const*) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0,
     const struct mlxsw_tx_info *VAR_1)
{
 struct mlxsw_pci *VAR_2 = VAR_0;
 struct mlxsw_pci_queue *VAR_3 = FUNC_1(VAR_2, VAR_1);

 return !FUNC_0(VAR_3);
}
