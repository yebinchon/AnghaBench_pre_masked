
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlx5dr_ste_htbl {struct mlx5dr_ste* pointing_ste; } ;
struct mlx5dr_ste {struct mlx5dr_ste_htbl* next_htbl; int ste_chain_location; } ;
struct mlx5dr_matcher_rx_tx {TYPE_4__* e_anchor; TYPE_1__* nic_tbl; } ;
struct mlx5dr_matcher {TYPE_2__* tbl; } ;
struct mlx5dr_htbl_connect_info {int miss_icm_addr; int type; } ;
struct mlx5dr_domain_rx_tx {int dummy; } ;
struct mlx5dr_domain {int ste_icm_pool; } ;
struct dr_hw_ste_format {int dummy; } ;
typedef enum mlx5dr_icm_chunk_size { ____Placeholder_mlx5dr_icm_chunk_size } mlx5dr_icm_chunk_size ;
struct TYPE_8__ {TYPE_3__* chunk; } ;
struct TYPE_7__ {int icm_addr; } ;
struct TYPE_6__ {struct mlx5dr_domain* dmn; } ;
struct TYPE_5__ {struct mlx5dr_domain_rx_tx* nic_dmn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct dr_hw_ste_format*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct mlx5dr_domain*,char*) ;
 int FUNC_4 (struct mlx5dr_domain*,char*) ;
 struct mlx5dr_ste_htbl* FUNC_5 (int ,int,int ,int ) ;
 int FUNC_6 (struct mlx5dr_ste_htbl*) ;
 scalar_t__ FUNC_7 (struct mlx5dr_domain*,struct mlx5dr_domain_rx_tx*,struct mlx5dr_ste_htbl*,struct mlx5dr_htbl_connect_info*,int) ;
 int FUNC_8 (struct mlx5dr_matcher_rx_tx*,int ) ;
 int FUNC_9 (int *,struct mlx5dr_ste_htbl*) ;
 int VAR_4 ;

int FUNC_10(struct mlx5dr_matcher *VAR_5,
    struct mlx5dr_matcher_rx_tx *VAR_6,
    struct mlx5dr_ste *VAR_7,
    u8 *VAR_8,
    enum mlx5dr_icm_chunk_size VAR_9)
{
 struct dr_hw_ste_format *VAR_10 = (struct dr_hw_ste_format *)VAR_8;
 struct mlx5dr_domain_rx_tx *VAR_11 = VAR_6->nic_tbl->nic_dmn;
 struct mlx5dr_domain *VAR_12 = VAR_5->tbl->dmn;
 struct mlx5dr_htbl_connect_info VAR_13;
 struct mlx5dr_ste_htbl *VAR_14;

 if (!FUNC_8(VAR_6, VAR_7->ste_chain_location)) {
  u32 VAR_15;
  u8 VAR_16;
  u16 VAR_17;

  VAR_16 = FUNC_0(VAR_4, VAR_10, VAR_16);
  VAR_17 = FUNC_0(VAR_4, VAR_10, VAR_17);





  VAR_15 = FUNC_1(VAR_17) * VAR_0;
  VAR_9 = FUNC_2(VAR_9, VAR_15);

  VAR_14 = FUNC_5(VAR_12->ste_icm_pool,
        VAR_9,
        VAR_16,
        VAR_17);
  if (!VAR_14) {
   FUNC_3(VAR_12, "Failed allocating table\n");
   return -VAR_3;
  }


  VAR_13.type = VAR_1;
  VAR_13.miss_icm_addr = VAR_6->e_anchor->chunk->icm_addr;
  if (FUNC_7(VAR_12, VAR_11, VAR_14,
            &VAR_13, 0)) {
   FUNC_4(VAR_12, "Failed writing table to HW\n");
   goto free_table;
  }

  FUNC_9(VAR_8, VAR_14);
  VAR_7->next_htbl = VAR_14;
  VAR_14->pointing_ste = VAR_7;
 }

 return 0;

free_table:
 FUNC_6(VAR_14);
 return -VAR_2;
}
