
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int ip_summed; } ;
struct net_device {int features; } ;
struct TYPE_2__ {struct net_device* dev; } ;
struct hns_nic_ring_data {TYPE_1__ napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hns_nic_ring_data *VAR_14,
    struct sk_buff *VAR_15, u32 VAR_16)
{
 struct net_device *VAR_17 = VAR_14->napi.dev;
 u32 VAR_18;
 u32 VAR_19;


 if (FUNC_2(!(VAR_17->features & VAR_13)))
  return;
 VAR_18 = FUNC_1(VAR_16, VAR_3, VAR_4);
 VAR_19 = FUNC_1(VAR_16, VAR_6, VAR_7);


 if ((VAR_18 != VAR_8) && (VAR_18 != VAR_9))
  return;


 if (FUNC_2(FUNC_0(VAR_16, VAR_2)))
  return;


 if (FUNC_2(FUNC_0(VAR_16, VAR_1)))
  return;


 if ((VAR_19 != VAR_11) &&
     (VAR_19 != VAR_12) &&
     (VAR_19 != VAR_10))
  return;


 if (FUNC_2(FUNC_0(VAR_16, VAR_5)))
  return;


 VAR_15->ip_summed = VAR_0;
}
