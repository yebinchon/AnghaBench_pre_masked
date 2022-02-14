
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int params; } ;
struct mlx5e_priv {int max_nch; TYPE_3__* direct_tir; TYPE_2__* indir_tir; TYPE_1__ channels; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_8__ {int lro; } ;
struct TYPE_7__ {int tirn; } ;
struct TYPE_6__ {int tirn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,void*,int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,int ,void*,int) ;
 int FUNC_6 (int *,void*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct mlx5e_priv *VAR_6)
{
 struct mlx5_core_dev *VAR_7 = VAR_6->mdev;

 void *VAR_8;
 void *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_10 = FUNC_2(VAR_5);
 VAR_8 = FUNC_4(VAR_10, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_8, VAR_3.lro, 1);
 VAR_9 = FUNC_0(VAR_5, VAR_8, VAR_4);

 FUNC_6(&VAR_6->channels.params, VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  VAR_11 = FUNC_5(VAR_7, VAR_6->indir_tir[VAR_12].tirn, VAR_8,
        VAR_10);
  if (VAR_11)
   goto free_in;
 }

 for (VAR_13 = 0; VAR_13 < VAR_6->max_nch; VAR_13++) {
  VAR_11 = FUNC_5(VAR_7, VAR_6->direct_tir[VAR_13].tirn,
        VAR_8, VAR_10);
  if (VAR_11)
   goto free_in;
 }

free_in:
 FUNC_3(VAR_8);

 return VAR_11;
}
