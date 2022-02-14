
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_pci_queue {int num; scalar_t__ consumer_counter; scalar_t__ producer_counter; } ;
struct mlxsw_pci {int core; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_pci_queue*,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct mlxsw_pci*,struct mlxsw_pci_queue*) ;

__attribute__((used)) static int FUNC_7(struct mlxsw_pci *VAR_1, char *VAR_2,
         struct mlxsw_pci_queue *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_3->producer_counter = 0;
 VAR_3->consumer_counter = 0;


 FUNC_1(VAR_2, VAR_3->num);
 FUNC_4(VAR_2, 3);
 FUNC_2(VAR_2, 3);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  dma_addr_t VAR_6 = FUNC_0(VAR_3, VAR_4);

  FUNC_3(VAR_2, VAR_4, VAR_6);
 }

 VAR_5 = FUNC_5(VAR_1->core, VAR_2, VAR_3->num);
 if (VAR_5)
  return VAR_5;
 FUNC_6(VAR_1, VAR_3);
 return 0;
}
