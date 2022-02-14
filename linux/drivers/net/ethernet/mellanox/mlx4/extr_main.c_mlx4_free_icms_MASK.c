
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int aux_icm; } ;
struct TYPE_13__ {int cmpt_table; int qp_table; int auxc_table; int altc_table; int rdmarc_table; } ;
struct TYPE_12__ {int cmpt_table; int table; } ;
struct TYPE_11__ {int cmpt_table; int table; } ;
struct TYPE_10__ {int cmpt_table; int table; } ;
struct TYPE_9__ {int mtt_table; int dmpt_table; } ;
struct TYPE_8__ {int table; } ;
struct mlx4_priv {TYPE_7__ fw; TYPE_6__ qp_table; TYPE_5__ srq_table; TYPE_4__ cq_table; TYPE_3__ eq_table; TYPE_2__ mr_table; TYPE_1__ mcg_table; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*,int *) ;
 int FUNC_2 (struct mlx4_dev*,int ,int ) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;

__attribute__((used)) static void FUNC_4(struct mlx4_dev *VAR_0)
{
 struct mlx4_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_0, &VAR_1->mcg_table.table);
 FUNC_1(VAR_0, &VAR_1->srq_table.table);
 FUNC_1(VAR_0, &VAR_1->cq_table.table);
 FUNC_1(VAR_0, &VAR_1->qp_table.rdmarc_table);
 FUNC_1(VAR_0, &VAR_1->qp_table.altc_table);
 FUNC_1(VAR_0, &VAR_1->qp_table.auxc_table);
 FUNC_1(VAR_0, &VAR_1->qp_table.qp_table);
 FUNC_1(VAR_0, &VAR_1->mr_table.dmpt_table);
 FUNC_1(VAR_0, &VAR_1->mr_table.mtt_table);
 FUNC_1(VAR_0, &VAR_1->eq_table.table);
 FUNC_1(VAR_0, &VAR_1->eq_table.cmpt_table);
 FUNC_1(VAR_0, &VAR_1->cq_table.cmpt_table);
 FUNC_1(VAR_0, &VAR_1->srq_table.cmpt_table);
 FUNC_1(VAR_0, &VAR_1->qp_table.cmpt_table);

 FUNC_0(VAR_0);
 FUNC_2(VAR_0, VAR_1->fw.aux_icm, 0);
}
