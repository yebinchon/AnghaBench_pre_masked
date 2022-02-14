
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;


 int FUNC_0 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct skb_shared_hwtstamps *VAR_0,
      u64 VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->hwtstamp = FUNC_1(VAR_1);
}
