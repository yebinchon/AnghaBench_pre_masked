
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mlxsw_pci_mem_item {int mapaddr; int buf; int size; } ;
struct TYPE_2__ {int count; struct mlxsw_pci_mem_item* items; } ;
struct mlxsw_pci {TYPE_1__ fw_area; int pdev; int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mlxsw_pci_mem_item* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct mlxsw_pci_mem_item*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct mlxsw_pci *VAR_4, char *VAR_5,
      u16 VAR_6)
{
 struct mlxsw_pci_mem_item *VAR_7;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10;

 VAR_4->fw_area.items = FUNC_0(VAR_6, sizeof(*VAR_7),
        VAR_1);
 if (!VAR_4->fw_area.items)
  return -VAR_0;
 VAR_4->fw_area.count = VAR_6;

 FUNC_5(VAR_5);
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_7 = &VAR_4->fw_area.items[VAR_9];

  VAR_7->size = VAR_3;
  VAR_7->buf = FUNC_6(VAR_4->pdev,
           VAR_7->size,
           &VAR_7->mapaddr);
  if (!VAR_7->buf) {
   VAR_10 = -VAR_0;
   goto err_alloc;
  }
  FUNC_4(VAR_5, VAR_8, VAR_7->mapaddr);
  FUNC_3(VAR_5, VAR_8, 0);
  if (++VAR_8 == VAR_2) {
   VAR_10 = FUNC_2(VAR_4->core, VAR_5, VAR_8);
   if (VAR_10)
    goto err_cmd_map_fa;
   VAR_8 = 0;
   FUNC_5(VAR_5);
  }
 }

 if (VAR_8) {
  VAR_10 = FUNC_2(VAR_4->core, VAR_5, VAR_8);
  if (VAR_10)
   goto err_cmd_map_fa;
 }

 return 0;

err_cmd_map_fa:
err_alloc:
 for (VAR_9--; VAR_9 >= 0; VAR_9--) {
  VAR_7 = &VAR_4->fw_area.items[VAR_9];

  FUNC_7(VAR_4->pdev, VAR_7->size,
        VAR_7->buf, VAR_7->mapaddr);
 }
 FUNC_1(VAR_4->fw_area.items);
 return VAR_10;
}
