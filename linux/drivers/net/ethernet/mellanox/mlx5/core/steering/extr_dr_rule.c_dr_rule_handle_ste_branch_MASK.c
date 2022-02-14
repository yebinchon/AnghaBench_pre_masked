
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5dr_ste_htbl {int chunk_size; struct mlx5dr_ste* ste_arr; TYPE_3__* chunk; } ;
struct mlx5dr_ste {int dummy; } ;
struct mlx5dr_rule_rx_tx {struct mlx5dr_matcher_rx_tx* nic_matcher; } ;
struct mlx5dr_rule {struct mlx5dr_matcher* matcher; } ;
struct mlx5dr_matcher_rx_tx {TYPE_2__* nic_tbl; } ;
struct mlx5dr_matcher {TYPE_1__* tbl; } ;
struct mlx5dr_domain_rx_tx {int dummy; } ;
struct mlx5dr_domain {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_6__ {struct list_head* miss_list; } ;
struct TYPE_5__ {struct mlx5dr_domain_rx_tx* nic_dmn; } ;
struct TYPE_4__ {struct mlx5dr_domain* dmn; } ;


 struct mlx5dr_ste* FUNC_0 (struct list_head*,int *) ;
 struct mlx5dr_ste* FUNC_1 (struct mlx5dr_matcher*,struct mlx5dr_matcher_rx_tx*,struct mlx5dr_ste*,int *,struct list_head*,struct list_head*) ;
 scalar_t__ FUNC_2 (struct mlx5dr_matcher*,struct mlx5dr_matcher_rx_tx*,struct mlx5dr_ste_htbl*,struct mlx5dr_ste*,int ,int *,struct list_head*,struct list_head*) ;
 scalar_t__ FUNC_3 (struct mlx5dr_ste_htbl*,struct mlx5dr_domain*,struct mlx5dr_domain_rx_tx*) ;
 struct mlx5dr_ste_htbl* FUNC_4 (struct mlx5dr_rule*,struct mlx5dr_rule_rx_tx*,struct mlx5dr_ste_htbl*,int ,struct list_head*) ;
 int FUNC_5 (struct mlx5dr_domain*,char*,...) ;
 int FUNC_6 (struct mlx5dr_ste_htbl*) ;
 int FUNC_7 (struct mlx5dr_ste_htbl*) ;
 int FUNC_8 (struct mlx5dr_domain*,char*,int ) ;
 int FUNC_9 (int *,struct mlx5dr_ste_htbl*) ;
 int FUNC_10 (struct mlx5dr_matcher_rx_tx*,int ) ;
 scalar_t__ FUNC_11 (struct mlx5dr_ste*) ;

__attribute__((used)) static struct mlx5dr_ste *
FUNC_12(struct mlx5dr_rule *VAR_0,
     struct mlx5dr_rule_rx_tx *VAR_1,
     struct list_head *VAR_2,
     struct mlx5dr_ste_htbl *VAR_3,
     u8 *VAR_4,
     u8 VAR_5,
     struct mlx5dr_ste_htbl **VAR_6)
{
 struct mlx5dr_matcher *VAR_7 = VAR_0->matcher;
 struct mlx5dr_domain *VAR_8 = VAR_7->tbl->dmn;
 struct mlx5dr_matcher_rx_tx *VAR_9;
 struct mlx5dr_domain_rx_tx *VAR_10;
 struct mlx5dr_ste_htbl *VAR_11;
 struct mlx5dr_ste *VAR_12;
 struct list_head *VAR_13;
 bool VAR_14 = 0;
 struct mlx5dr_ste *VAR_15;
 int VAR_16;

 VAR_9 = VAR_1->nic_matcher;
 VAR_10 = VAR_9->nic_tbl->nic_dmn;

again:
 VAR_16 = FUNC_9(VAR_4, VAR_3);
 VAR_13 = &VAR_3->chunk->miss_list[VAR_16];
 VAR_15 = &VAR_3->ste_arr[VAR_16];

 if (FUNC_11(VAR_15)) {
  if (FUNC_2(VAR_7, VAR_9, VAR_3,
            VAR_15, VAR_5,
            VAR_4, VAR_13,
            VAR_2))
   return ((void*)0);
 } else {

  VAR_12 = FUNC_0(VAR_13, VAR_4);
  if (VAR_12) {




   if (!FUNC_10(VAR_9, VAR_5))
    return VAR_12;

   FUNC_5(VAR_8, "Duplicate rule inserted\n");
  }

  if (!VAR_14 && FUNC_3(VAR_3, VAR_8, VAR_10)) {

   VAR_14 = 1;




   *VAR_6 = VAR_3;
   FUNC_6(VAR_3);

   VAR_11 = FUNC_4(VAR_0, VAR_1, VAR_3,
        VAR_5, VAR_2);
   if (!VAR_11) {
    FUNC_7(VAR_3);
    FUNC_8(VAR_8, "failed creating rehash table, htbl-log_size: %d\n",
         VAR_3->chunk_size);
   } else {
    VAR_3 = VAR_11;
   }
   goto again;
  } else {

   VAR_15 = FUNC_1(VAR_7,
             VAR_9,
             VAR_15,
             VAR_4,
             VAR_13,
             VAR_2);
   if (!VAR_15) {
    FUNC_5(VAR_8, "failed adding collision entry, index: %d\n",
        VAR_16);
    return ((void*)0);
   }
  }
 }
 return VAR_15;
}
