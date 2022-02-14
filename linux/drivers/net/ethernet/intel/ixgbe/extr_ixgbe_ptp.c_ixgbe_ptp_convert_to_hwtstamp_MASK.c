
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct timespec64 {int tv_sec; int tv_nsec; } ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {int tmreg_lock; int hw_tc; TYPE_2__ hw; } ;





 int FUNC_0 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct timespec64*) ;

__attribute__((used)) static void FUNC_6(struct ixgbe_adapter *VAR_0,
       struct skb_shared_hwtstamps *VAR_1,
       u64 VAR_2)
{
 unsigned long VAR_3;
 struct timespec64 VAR_4;
 u64 VAR_5;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 switch (VAR_0->hw.mac.type) {
 case 130:
 case 129:
 case 128:





  VAR_4.tv_sec = VAR_2 >> 32;
  VAR_4.tv_nsec = VAR_2 & 0xFFFFFFFF;

  VAR_2 = FUNC_5(&VAR_4);
  break;
 default:
  break;
 }

 FUNC_2(&VAR_0->tmreg_lock, VAR_3);
 VAR_5 = FUNC_4(&VAR_0->hw_tc, VAR_2);
 FUNC_3(&VAR_0->tmreg_lock, VAR_3);

 VAR_1->hwtstamp = FUNC_1(VAR_5);
}
