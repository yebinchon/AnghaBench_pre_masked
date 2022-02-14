
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_shared_info {int nr_frags; scalar_t__ gso_size; } ;
struct sk_buff {int data; scalar_t__ encapsulation; } ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {TYPE_1__* prof; } ;
struct TYPE_2__ {int inline_thold; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 int FUNC_2 (struct sk_buff const*) ;
 int FUNC_3 (struct sk_buff const*) ;
 int FUNC_4 (int ,struct sk_buff const*,struct skb_shared_info const*,void**) ;
 struct mlx4_en_priv* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct mlx4_en_priv*) ;
 int FUNC_7 (struct sk_buff const*) ;
 int FUNC_8 (struct sk_buff const*) ;
 int FUNC_9 (struct sk_buff const*) ;
 int FUNC_10 (struct sk_buff const*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(const struct sk_buff *VAR_2,
    const struct skb_shared_info *VAR_3,
    struct net_device *VAR_4,
    int *VAR_5,
    bool *VAR_6,
    void **VAR_7)
{
 struct mlx4_en_priv *VAR_8 = FUNC_5(VAR_4);
 int VAR_9;

 if (VAR_3->gso_size) {
  *VAR_6 = 0;
  if (VAR_2->encapsulation)
   *VAR_5 = (FUNC_8(VAR_2) - VAR_2->data) + FUNC_3(VAR_2);
  else
   *VAR_5 = FUNC_9(VAR_2) + FUNC_10(VAR_2);
  VAR_9 = VAR_0 + VAR_3->nr_frags * VAR_1 +
   FUNC_0(*VAR_5 + 4, VAR_1);
  if (FUNC_11(*VAR_5 != FUNC_7(VAR_2))) {


   if (*VAR_5 < FUNC_7(VAR_2))
    VAR_9 += VAR_1;
   else {
    if (FUNC_6(VAR_8))
     FUNC_1(VAR_8, "Non-linear headers\n");
    return 0;
   }
  }
 } else {
  *VAR_5 = 0;
  *VAR_6 = FUNC_4(VAR_8->prof->inline_thold, VAR_2,
           VAR_3, VAR_7);

  if (*VAR_6)
   VAR_9 = FUNC_2(VAR_2);
  else
   VAR_9 = VAR_0 +
        (VAR_3->nr_frags + 1) * VAR_1;
 }

 return VAR_9;
}
