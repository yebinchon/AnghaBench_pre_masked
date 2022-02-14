
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct TYPE_3__ {int cclk; } ;
struct TYPE_4__ {TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_0,
         struct skb_shared_hwtstamps *VAR_1,
         u64 VAR_2)
{
 u64 VAR_3;
 u64 VAR_4 = (VAR_2 * 1000 * 1000 + VAR_0->params.vpd.cclk / 2);

 VAR_3 = FUNC_0(VAR_4, VAR_0->params.vpd.cclk);

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->hwtstamp = FUNC_2(VAR_3);
}
