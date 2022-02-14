
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int rss_queues; int vfs_allocated_count; struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct igb_adapter *VAR_4,
     int VAR_5, bool VAR_6)
{
 struct e1000_hw *VAR_7 = &VAR_4->hw;
 u32 VAR_8;




 if (VAR_7->mac.type < VAR_3)
  return;

 VAR_8 = FUNC_1(FUNC_0(VAR_5));
 if (VAR_6)
  VAR_8 |= VAR_0;
 else
  VAR_8 &= ~(VAR_0);


 VAR_8 &= ~(VAR_1 | VAR_2);

 if (VAR_4->rss_queues > 1 && VAR_5 == VAR_4->vfs_allocated_count)
  VAR_8 |= VAR_2;



 if (VAR_5 <= VAR_4->vfs_allocated_count)
  VAR_8 |= VAR_1;

 FUNC_2(FUNC_0(VAR_5), VAR_8);
}
