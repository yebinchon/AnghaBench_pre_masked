
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int max_order; } ;
struct mlx4_mr_table {int mpt_bitmap; TYPE_2__ mtt_buddy; } ;
struct mlx4_priv {scalar_t__ reserved_mtts; struct mlx4_mr_table mr_table; } ;
struct TYPE_4__ {scalar_t__ reserved_mtts; scalar_t__ num_mtts; int reserved_mrws; int num_mpts; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct mlx4_dev*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_8 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_9 (struct mlx4_dev*) ;
 int FUNC_10 (struct mlx4_dev*,char*,int ) ;

int FUNC_11(struct mlx4_dev *VAR_3)
{
 struct mlx4_priv *VAR_4 = FUNC_9(VAR_3);
 struct mlx4_mr_table *VAR_5 = &VAR_4->mr_table;
 int VAR_6;



 if (FUNC_8(VAR_3))
  return 0;

 if (!FUNC_2(VAR_3->caps.num_mpts))
  return -VAR_0;

 VAR_6 = FUNC_5(&VAR_5->mpt_bitmap, VAR_3->caps.num_mpts,
          ~0, VAR_3->caps.reserved_mrws, 0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_7(&VAR_5->mtt_buddy,
         FUNC_1((u32)VAR_3->caps.num_mtts /
         (1 << VAR_2)));
 if (VAR_6)
  goto err_buddy;

 if (VAR_3->caps.reserved_mtts) {
  VAR_4->reserved_mtts =
   FUNC_3(VAR_3,
          FUNC_0(VAR_3->caps.reserved_mtts - 1));
  if (VAR_4->reserved_mtts < 0) {
   FUNC_10(VAR_3, "MTT table of order %u is too small\n",
      VAR_5->mtt_buddy.max_order);
   VAR_6 = -VAR_1;
   goto err_reserve_mtts;
  }
 }

 return 0;

err_reserve_mtts:
 FUNC_6(&VAR_5->mtt_buddy);

err_buddy:
 FUNC_4(&VAR_5->mpt_bitmap);

 return VAR_6;
}
