
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int type; int max_queues; } ;
struct fm10k_hw {int revision_id; int device_id; TYPE_1__ mac; } ;
struct fm10k_intfc {struct fm10k_hw hw; } ;
struct ethtool_regs {int version; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int) ;
 int VAR_13 ;
 int FUNC_6 (struct fm10k_hw*,int *,int) ;
 int FUNC_7 (struct fm10k_hw*,int *,int) ;


 void* FUNC_8 (struct fm10k_hw*,int ) ;
 int FUNC_9 (int *,int ,int) ;
 struct fm10k_intfc* FUNC_10 (struct net_device*) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_14,
      struct ethtool_regs *VAR_15, void *VAR_16)
{
 struct fm10k_intfc *VAR_17 = FUNC_10(VAR_14);
 struct fm10k_hw *VAR_18 = &VAR_17->hw;
 u32 *VAR_19 = VAR_16;
 u16 VAR_20;

 VAR_15->version = FUNC_0(24) | (VAR_18->revision_id << 16) | VAR_18->device_id;

 switch (VAR_18->mac.type) {
 case 129:

  *(VAR_19++) = FUNC_8(VAR_18, VAR_0);
  *(VAR_19++) = FUNC_8(VAR_18, VAR_1);
  *(VAR_19++) = FUNC_8(VAR_18, VAR_4);
  *(VAR_19++) = FUNC_8(VAR_18, VAR_5);

  for (VAR_20 = 0; VAR_20 < 8; VAR_20++) {
   *(VAR_19++) = FUNC_8(VAR_18, FUNC_2(VAR_20));
   *(VAR_19++) = FUNC_8(VAR_18, FUNC_1(VAR_20));
  }

  for (VAR_20 = 0; VAR_20 < 65; VAR_20++) {
   FUNC_7(VAR_18, VAR_19, VAR_20);
   VAR_19 += VAR_9;
  }

  *(VAR_19++) = FUNC_8(VAR_18, VAR_2);
  *(VAR_19++) = FUNC_8(VAR_18, VAR_3);

  for (VAR_20 = 0; VAR_20 < VAR_6; VAR_20++) {
   FUNC_6(VAR_18, VAR_19, VAR_20);
   VAR_19 += VAR_8;
  }

  *(VAR_19++) = FUNC_8(VAR_18, VAR_10);

  for (VAR_20 = 0; VAR_20 < 8; VAR_20++)
   *(VAR_19++) = FUNC_8(VAR_18, FUNC_3(VAR_20));


  for (VAR_20 = 0; VAR_20 < 130; VAR_20++)
   *(VAR_19++) = FUNC_8(VAR_18, FUNC_4(VAR_20));

  break;
 case 128:

  *(VAR_19++) = FUNC_8(VAR_18, VAR_11);
  *(VAR_19++) = FUNC_8(VAR_18, VAR_12);
  *(VAR_19++) = FUNC_8(VAR_18, VAR_13);


  for (VAR_20 = 0; VAR_20 < 8; VAR_20++)
   *(VAR_19++) = FUNC_8(VAR_18, FUNC_5(VAR_20));

  FUNC_7(VAR_18, VAR_19, 0);
  VAR_19 += VAR_9;

  for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++) {
   if (VAR_20 < VAR_18->mac.max_queues)
    FUNC_6(VAR_18, VAR_19, VAR_20);
   else
    FUNC_9(VAR_19, 0, sizeof(u32) * VAR_8);
   VAR_19 += VAR_8;
  }

  break;
 default:
  return;
 }
}
