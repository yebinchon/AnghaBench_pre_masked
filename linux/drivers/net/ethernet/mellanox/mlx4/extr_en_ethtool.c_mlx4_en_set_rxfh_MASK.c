
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {scalar_t__ rss_hash_fn; int rss_key; TYPE_1__* prof; scalar_t__ port_up; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; } ;
struct TYPE_2__ {int rss_rings; } ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__ const*,int ) ;
 int FUNC_3 (struct net_device*,scalar_t__ const) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct mlx4_en_priv* FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3, const u32 *VAR_4,
       const u8 *VAR_5, const u8 VAR_6)
{
 struct mlx4_en_priv *VAR_7 = FUNC_9(VAR_3);
 u32 VAR_8 = FUNC_4(VAR_3);
 struct mlx4_en_dev *VAR_9 = VAR_7->mdev;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13 = 0;




 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  if (!VAR_4)
   break;
  if (VAR_12 > 0 && !VAR_4[VAR_12] && !VAR_13)
   VAR_13 = VAR_12;

  if (VAR_4[VAR_12] != (VAR_12 % (VAR_13 ?: VAR_8)))
   return -VAR_0;
 }

 if (!VAR_13)
  VAR_13 = VAR_8;


 if (!FUNC_1(VAR_13))
  return -VAR_0;

 if (VAR_6 != VAR_1) {
  VAR_11 = FUNC_3(VAR_3, VAR_6);
  if (VAR_11)
   return VAR_11;
 }

 FUNC_7(&VAR_9->state_lock);
 if (VAR_7->port_up) {
  VAR_10 = 1;
  FUNC_6(VAR_3, 1);
 }

 if (VAR_4)
  VAR_7->prof->rss_rings = VAR_13;
 if (VAR_5)
  FUNC_2(VAR_7->rss_key, VAR_5, VAR_2);
 if (VAR_6 != VAR_1)
  VAR_7->rss_hash_fn = VAR_6;

 if (VAR_10) {
  VAR_11 = FUNC_5(VAR_3);
  if (VAR_11)
   FUNC_0(VAR_7, "Failed starting port\n");
 }

 FUNC_8(&VAR_9->state_lock);
 return VAR_11;
}
