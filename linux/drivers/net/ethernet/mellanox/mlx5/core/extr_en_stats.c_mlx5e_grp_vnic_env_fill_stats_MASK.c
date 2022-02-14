
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int query_vnic_env_out; } ;
struct TYPE_4__ {TYPE_1__ vnic; } ;
struct mlx5e_priv {TYPE_2__ stats; int mdev; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct mlx5e_priv *VAR_2, u64 *VAR_3,
      int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_2->mdev); VAR_5++)
  VAR_3[VAR_4++] = FUNC_1(VAR_2->stats.vnic.query_vnic_env_out,
        VAR_1, VAR_5);

 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_2->mdev); VAR_5++)
  VAR_3[VAR_4++] = FUNC_0(VAR_2->stats.vnic.query_vnic_env_out,
        VAR_0, VAR_5);
 return VAR_4;
}
