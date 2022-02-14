
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct mlx4_en_dev {int clock; int clock_lock; } ;


 int FUNC_0 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(struct mlx4_en_dev *VAR_0,
       struct skb_shared_hwtstamps *VAR_1,
       u64 VAR_2)
{
 unsigned int VAR_3;
 u64 VAR_4;

 do {
  VAR_3 = FUNC_2(&VAR_0->clock_lock);
  VAR_4 = FUNC_4(&VAR_0->clock, VAR_2);
 } while (FUNC_3(&VAR_0->clock_lock, VAR_3));

 FUNC_0(VAR_1, 0, sizeof(struct skb_shared_hwtstamps));
 VAR_1->hwtstamp = FUNC_1(VAR_4);
}
