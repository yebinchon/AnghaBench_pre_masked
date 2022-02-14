
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_pci_queue_elem_info {char* elem; } ;
struct mlxsw_pci_queue {int consumer_counter; } ;


 scalar_t__ FUNC_0 (struct mlxsw_pci_queue*,int) ;
 int FUNC_1 (char*) ;
 struct mlxsw_pci_queue_elem_info* FUNC_2 (struct mlxsw_pci_queue*) ;
 int FUNC_3 () ;

__attribute__((used)) static char *FUNC_4(struct mlxsw_pci_queue *VAR_0)
{
 struct mlxsw_pci_queue_elem_info *VAR_1;
 char *VAR_2;
 bool VAR_3;

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = VAR_1->elem;
 VAR_3 = FUNC_1(VAR_2);
 if (FUNC_0(VAR_0, VAR_3))
  return ((void*)0);
 VAR_0->consumer_counter++;
 FUNC_3();
 return VAR_2;
}
