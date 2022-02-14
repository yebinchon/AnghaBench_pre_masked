
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgb_hw {int max_frame_size; } ;
struct ixgb_adapter {int netdev; struct ixgb_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgb_hw*,int ) ;
 int FUNC_1 (struct ixgb_hw*,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (struct ixgb_hw*) ;
 int FUNC_3 (struct ixgb_hw*) ;
 int FUNC_4 (struct ixgb_adapter*,int ,int ,char*) ;
 int VAR_6 ;

void
FUNC_5(struct ixgb_adapter *VAR_7)
{
 struct ixgb_hw *VAR_8 = &VAR_7->hw;

 FUNC_2(VAR_8);
 if (!FUNC_3(VAR_8))
  FUNC_4(VAR_7, VAR_6, VAR_7->netdev, "ixgb_init_hw failed\n");


 FUNC_1(VAR_8, VAR_5, VAR_8->max_frame_size << VAR_4);
 if (VAR_8->max_frame_size >
     VAR_3 + VAR_1) {
  u32 VAR_9 = FUNC_0(VAR_8, VAR_0);
  if (!(VAR_9 & VAR_2)) {
   VAR_9 |= VAR_2;
   FUNC_1(VAR_8, VAR_0, VAR_9);
  }
 }
}
