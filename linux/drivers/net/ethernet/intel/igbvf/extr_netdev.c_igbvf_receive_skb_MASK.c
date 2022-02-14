
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct igbvf_adapter {int flags; TYPE_1__* rx_ring; int active_vlans; } ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct igbvf_adapter *VAR_5,
         struct net_device *VAR_6,
         struct sk_buff *VAR_7,
         u32 VAR_8, u16 VAR_9)
{
 u16 VAR_10;

 if (VAR_8 & VAR_2) {
  if ((VAR_5->flags & VAR_4) &&
      (VAR_8 & VAR_0))
   VAR_10 = FUNC_1(VAR_9) & VAR_1;
  else
   VAR_10 = FUNC_3(VAR_9) & VAR_1;
  if (FUNC_5(VAR_10, VAR_5->active_vlans))
   FUNC_0(VAR_7, FUNC_2(VAR_3), VAR_10);
 }

 FUNC_4(&VAR_5->rx_ring->napi, VAR_7);
}
