
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int free_list; int page_root; } ;
struct mlx5_core_dev {TYPE_1__ priv; int device; } ;
struct fw_page {int free_count; int list; int page; int rb_node; int bitmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int ) ;
 struct fw_page* FUNC_2 (struct mlx5_core_dev*,int) ;
 int FUNC_3 (struct fw_page*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mlx5_core_dev*,char*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int,int *) ;

__attribute__((used)) static void FUNC_9(struct mlx5_core_dev *VAR_5, u64 VAR_6)
{
 struct fw_page *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_5, VAR_6 & VAR_3);
 if (!VAR_7) {
  FUNC_6(VAR_5, "page not found\n");
  return;
 }

 VAR_8 = (VAR_6 & ~VAR_3) >> VAR_1;
 VAR_7->free_count++;
 FUNC_8(VAR_8, &VAR_7->bitmask);
 if (VAR_7->free_count == VAR_2) {
  FUNC_7(&VAR_7->rb_node, &VAR_5->priv.page_root);
  if (VAR_7->free_count != 1)
   FUNC_5(&VAR_7->list);
  FUNC_1(VAR_5->device, VAR_6 & VAR_3,
          VAR_4, VAR_0);
  FUNC_0(VAR_7->page);
  FUNC_3(VAR_7);
 } else if (VAR_7->free_count == 1) {
  FUNC_4(&VAR_7->list, &VAR_5->priv.free_list);
 }
}
