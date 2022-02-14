
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx5e_rss_params {int hfunc; int toeplitz_hash_key; int indirection_rqt; } ;
struct mlx5e_priv {struct mlx5e_rss_params rss_params; } ;


 int FUNC_0 (int *,int ,int) ;
 struct mlx5e_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, u32 *VAR_1, u8 *VAR_2,
     u8 *VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_1(VAR_0);
 struct mlx5e_rss_params *VAR_5 = &VAR_4->rss_params;

 if (VAR_1)
  FUNC_0(VAR_1, VAR_5->indirection_rqt,
         sizeof(VAR_5->indirection_rqt));

 if (VAR_2)
  FUNC_0(VAR_2, VAR_5->toeplitz_hash_key,
         sizeof(VAR_5->toeplitz_hash_key));

 if (VAR_3)
  *VAR_3 = VAR_5->hfunc;

 return 0;
}
