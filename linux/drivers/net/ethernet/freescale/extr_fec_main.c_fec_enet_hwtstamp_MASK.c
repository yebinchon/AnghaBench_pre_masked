
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct fec_enet_private {int tmreg_lock; int tc; } ;


 int FUNC_0 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_5(struct fec_enet_private *VAR_0, unsigned VAR_1,
 struct skb_shared_hwtstamps *VAR_2)
{
 unsigned long VAR_3;
 u64 VAR_4;

 FUNC_2(&VAR_0->tmreg_lock, VAR_3);
 VAR_4 = FUNC_4(&VAR_0->tc, VAR_1);
 FUNC_3(&VAR_0->tmreg_lock, VAR_3);

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->hwtstamp = FUNC_1(VAR_4);
}
