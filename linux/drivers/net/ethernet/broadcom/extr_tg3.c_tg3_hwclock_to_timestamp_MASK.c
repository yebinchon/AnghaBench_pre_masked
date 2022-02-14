
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tg3 {scalar_t__ ptp_adjust; } ;
struct skb_shared_hwtstamps {int hwtstamp; } ;


 int VAR_0 ;
 int FUNC_0 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_1, u64 VAR_2,
         struct skb_shared_hwtstamps *VAR_3)
{
 FUNC_0(VAR_3, 0, sizeof(struct skb_shared_hwtstamps));
 VAR_3->hwtstamp = FUNC_1((VAR_2 & VAR_0) +
        VAR_1->ptp_adjust);
}
