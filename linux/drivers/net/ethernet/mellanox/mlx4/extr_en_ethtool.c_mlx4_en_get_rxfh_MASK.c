
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int rss_hash_fn; int rss_key; TYPE_1__* prof; } ;
struct TYPE_2__ {scalar_t__ rss_rings; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 size_t FUNC_1 (struct net_device*) ;
 struct mlx4_en_priv* FUNC_2 (struct net_device*) ;
 size_t FUNC_3 (size_t) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, u32 *VAR_2, u8 *VAR_3,
       u8 *VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_2(VAR_1);
 u32 VAR_6 = FUNC_1(VAR_1);
 u32 VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_8 = VAR_5->prof->rss_rings ?: VAR_6;
 VAR_8 = FUNC_3(VAR_8);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (!VAR_2)
   break;
  VAR_2[VAR_7] = VAR_7 % VAR_8;
 }
 if (VAR_3)
  FUNC_0(VAR_3, VAR_5->rss_key, VAR_0);
 if (VAR_4)
  *VAR_4 = VAR_5->rss_hash_fn;
 return VAR_9;
}
