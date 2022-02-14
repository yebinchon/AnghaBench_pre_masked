
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_pci_queue_type_group {int count; int * q; } ;
struct mlxsw_pci_queue_ops {int type; } ;
struct mlxsw_pci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlxsw_pci*,struct mlxsw_pci_queue_ops const*,int *) ;
 int FUNC_3 (struct mlxsw_pci*,char*,struct mlxsw_pci_queue_ops const*,int *,int) ;
 struct mlxsw_pci_queue_type_group* FUNC_4 (struct mlxsw_pci*,int ) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_pci *VAR_2, char *VAR_3,
          const struct mlxsw_pci_queue_ops *VAR_4,
          u8 VAR_5)
{
 struct mlxsw_pci_queue_type_group *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_2, VAR_4->type);
 VAR_6->q = FUNC_0(VAR_5, sizeof(*VAR_6->q), VAR_1);
 if (!VAR_6->q)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4,
        &VAR_6->q[VAR_7], VAR_7);
  if (VAR_8)
   goto err_queue_init;
 }
 VAR_6->count = VAR_5;

 return 0;

err_queue_init:
 for (VAR_7--; VAR_7 >= 0; VAR_7--)
  FUNC_2(VAR_2, VAR_4, &VAR_6->q[VAR_7]);
 FUNC_1(VAR_6->q);
 return VAR_8;
}
