
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_pci_queue {int count; int num; scalar_t__ consumer_counter; } ;
struct mlxsw_pci {int core; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_pci_queue*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct mlxsw_pci*,struct mlxsw_pci_queue*) ;
 int FUNC_9 (struct mlxsw_pci*,struct mlxsw_pci_queue*) ;
 char* FUNC_10 (struct mlxsw_pci_queue*,int) ;

__attribute__((used)) static int FUNC_11(struct mlxsw_pci *VAR_1, char *VAR_2,
        struct mlxsw_pci_queue *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_3->consumer_counter = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
  char *VAR_6 = FUNC_10(VAR_3, VAR_4);

  FUNC_7(VAR_6, 1);
 }

 FUNC_2(VAR_2, 1);
 FUNC_5(VAR_2, 1);
 FUNC_3(VAR_2, FUNC_1(VAR_3->count));
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  dma_addr_t VAR_7 = FUNC_0(VAR_3, VAR_4);

  FUNC_4(VAR_2, VAR_4, VAR_7);
 }
 VAR_5 = FUNC_6(VAR_1->core, VAR_2, VAR_3->num);
 if (VAR_5)
  return VAR_5;
 FUNC_9(VAR_1, VAR_3);
 FUNC_8(VAR_1, VAR_3);
 return 0;
}
