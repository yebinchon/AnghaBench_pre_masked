
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlxsw_pci_queue_elem_info {int dummy; } ;
struct mlxsw_pci_queue {int count; scalar_t__ num; scalar_t__ producer_counter; scalar_t__ consumer_counter; } ;
struct mlxsw_pci {int core; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mlxsw_pci_queue*,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (struct mlxsw_pci*,struct mlxsw_pci_queue*) ;
 struct mlxsw_pci_queue_elem_info* FUNC_8 (struct mlxsw_pci_queue*,int) ;
 struct mlxsw_pci_queue_elem_info* FUNC_9 (struct mlxsw_pci_queue*) ;
 int FUNC_10 (struct mlxsw_pci*,struct mlxsw_pci_queue_elem_info*) ;
 int FUNC_11 (struct mlxsw_pci*,struct mlxsw_pci_queue_elem_info*) ;
 scalar_t__ FUNC_12 (struct mlxsw_pci*) ;

__attribute__((used)) static int FUNC_13(struct mlxsw_pci *VAR_1, char *VAR_2,
         struct mlxsw_pci_queue *VAR_3)
{
 struct mlxsw_pci_queue_elem_info *VAR_4;
 u8 VAR_5 = FUNC_12(VAR_1);
 int VAR_6;
 int VAR_7;

 VAR_3->producer_counter = 0;
 VAR_3->consumer_counter = 0;




 FUNC_3(VAR_2, VAR_5 + VAR_3->num);
 FUNC_4(VAR_2, 3);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  dma_addr_t VAR_8 = FUNC_1(VAR_3, VAR_6);

  FUNC_5(VAR_2, VAR_6, VAR_8);
 }

 VAR_7 = FUNC_6(VAR_1->core, VAR_2, VAR_3->num);
 if (VAR_7)
  return VAR_7;

 FUNC_7(VAR_1, VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_3->count; VAR_6++) {
  VAR_4 = FUNC_9(VAR_3);
  FUNC_0(!VAR_4);
  VAR_7 = FUNC_10(VAR_1, VAR_4);
  if (VAR_7)
   goto rollback;

  VAR_3->producer_counter++;
  FUNC_7(VAR_1, VAR_3);
 }

 return 0;

rollback:
 for (VAR_6--; VAR_6 >= 0; VAR_6--) {
  VAR_4 = FUNC_8(VAR_3, VAR_6);
  FUNC_11(VAR_1, VAR_4);
 }
 FUNC_2(VAR_1->core, VAR_3->num);

 return VAR_7;
}
