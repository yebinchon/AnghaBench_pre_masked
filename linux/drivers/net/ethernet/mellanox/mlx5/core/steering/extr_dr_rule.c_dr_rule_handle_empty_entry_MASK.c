
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct mlx5dr_ste_send_info {int dummy; } ;
struct TYPE_8__ {int num_of_valid_entries; } ;
struct mlx5dr_ste_htbl {TYPE_4__ ctrl; } ;
struct mlx5dr_ste {int miss_list_node; int ste_chain_location; } ;
struct mlx5dr_matcher_rx_tx {TYPE_2__* e_anchor; } ;
struct mlx5dr_matcher {TYPE_3__* tbl; } ;
struct list_head {int dummy; } ;
struct TYPE_7__ {int dmn; } ;
struct TYPE_6__ {TYPE_1__* chunk; } ;
struct TYPE_5__ {int icm_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx5dr_ste_send_info*) ;
 struct mlx5dr_ste_send_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct mlx5dr_ste_htbl*) ;
 int FUNC_6 (struct mlx5dr_ste_htbl*) ;
 int FUNC_7 (struct mlx5dr_ste*,int ,int ,int *,struct mlx5dr_ste_send_info*,struct list_head*,int) ;
 scalar_t__ FUNC_8 (struct mlx5dr_matcher*,struct mlx5dr_matcher_rx_tx*,struct mlx5dr_ste*,int *,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct mlx5dr_matcher *VAR_4,
          struct mlx5dr_matcher_rx_tx *VAR_5,
          struct mlx5dr_ste_htbl *VAR_6,
          struct mlx5dr_ste *VAR_7,
          u8 VAR_8,
          u8 *VAR_9,
          struct list_head *VAR_10,
          struct list_head *VAR_11)
{
 struct mlx5dr_ste_send_info *VAR_12;


 FUNC_5(VAR_6);


 FUNC_2(&VAR_7->miss_list_node, VAR_10);

 FUNC_9(VAR_9, VAR_5->e_anchor->chunk->icm_addr);

 VAR_7->ste_chain_location = VAR_8;

 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  goto clean_ste_setting;

 if (FUNC_8(VAR_4,
     VAR_5,
     VAR_7,
     VAR_9,
     VAR_0)) {
  FUNC_4(VAR_4->tbl->dmn, "Failed allocating table\n");
  goto clean_ste_info;
 }

 VAR_6->ctrl.num_of_valid_entries++;

 FUNC_7(VAR_7, VAR_1, 0, VAR_9,
        VAR_12, VAR_11, 0);

 return 0;

clean_ste_info:
 FUNC_0(VAR_12);
clean_ste_setting:
 FUNC_3(&VAR_7->miss_list_node);
 FUNC_6(VAR_6);

 return -VAR_2;
}
