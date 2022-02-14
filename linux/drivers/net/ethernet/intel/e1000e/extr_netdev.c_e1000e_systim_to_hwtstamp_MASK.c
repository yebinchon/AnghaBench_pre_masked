
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct e1000_adapter {int systim_lock; int tc; } ;


 int FUNC_0 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct e1000_adapter *VAR_0,
          struct skb_shared_hwtstamps *VAR_1,
          u64 VAR_2)
{
 u64 VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_0->systim_lock, VAR_4);
 VAR_3 = FUNC_4(&VAR_0->tc, VAR_2);
 FUNC_3(&VAR_0->systim_lock, VAR_4);

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->hwtstamp = FUNC_1(VAR_3);
}
