
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1c_hw {int rfd_burst; int ctrl_flags; scalar_t__ nic_type; int device_id; } ;
struct atl1c_adapter {struct atl1c_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atl1c_hw*,int ,int) ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_2(struct atl1c_adapter *VAR_8)
{
 struct atl1c_hw *VAR_9 = &VAR_8->hw;
 u32 VAR_10;

 VAR_10 = (VAR_9->rfd_burst & VAR_5) <<
   VAR_6;

 if (VAR_9->ctrl_flags & VAR_2)
  VAR_10 |= VAR_3;


 if (VAR_9->nic_type != VAR_7 && (VAR_9->device_id & 1) != 0)
  VAR_10 = FUNC_1(VAR_10, VAR_0,
   VAR_1);

 FUNC_0(VAR_9, VAR_4, VAR_10);
}
