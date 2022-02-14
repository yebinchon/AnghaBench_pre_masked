
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_2__ {int max_frame_size; int rx_jumbo_th; } ;
struct atl1e_adapter {int flags; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atl1e_adapter*) ;
 int FUNC_1 (struct atl1e_adapter*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int) ;
 struct atl1e_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, int VAR_5)
{
 struct atl1e_adapter *VAR_6 = FUNC_4(VAR_4);
 int VAR_7 = VAR_5 + VAR_1 + VAR_0 + VAR_2;


 if (FUNC_5(VAR_4)) {
  while (FUNC_6(VAR_3, &VAR_6->flags))
   FUNC_3(1);
  VAR_4->mtu = VAR_5;
  VAR_6->hw.max_frame_size = VAR_5;
  VAR_6->hw.rx_jumbo_th = (VAR_7 + 7) >> 3;
  FUNC_0(VAR_6);
  FUNC_1(VAR_6);
  FUNC_2(VAR_3, &VAR_6->flags);
 }
 return 0;
}
