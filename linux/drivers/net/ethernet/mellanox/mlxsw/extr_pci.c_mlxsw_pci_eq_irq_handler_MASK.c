
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_pci_queue {int dummy; } ;
struct mlxsw_pci {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_pci_queue* FUNC_0 (struct mlxsw_pci*,int) ;
 int FUNC_1 (struct mlxsw_pci_queue*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct mlxsw_pci *VAR_4 = VAR_3;
 struct mlxsw_pci_queue *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = FUNC_0(VAR_4, VAR_6);
  FUNC_1(VAR_5);
 }
 return VAR_0;
}
