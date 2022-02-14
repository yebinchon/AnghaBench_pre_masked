
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_2__ {int max_frame_size; } ;
struct atl1c_adapter {int flags; TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct atl1c_adapter*) ;
 int FUNC_1 (struct atl1c_adapter*,struct net_device*) ;
 int FUNC_2 (struct atl1c_adapter*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;
 struct atl1c_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1, int VAR_2)
{
 struct atl1c_adapter *VAR_3 = FUNC_5(VAR_1);


 if (FUNC_7(VAR_1)) {
  while (FUNC_8(VAR_0, &VAR_3->flags))
   FUNC_4(1);
  VAR_1->mtu = VAR_2;
  VAR_3->hw.max_frame_size = VAR_2;
  FUNC_1(VAR_3, VAR_1);
  FUNC_0(VAR_3);
  FUNC_6(VAR_1);
  FUNC_2(VAR_3);
  FUNC_3(VAR_0, &VAR_3->flags);
 }
 return 0;
}
