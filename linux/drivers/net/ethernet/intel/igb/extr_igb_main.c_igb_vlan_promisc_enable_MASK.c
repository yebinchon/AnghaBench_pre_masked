
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int (* write_vfta ) (struct e1000_hw*,scalar_t__,unsigned int) ;} ;
struct TYPE_6__ {int type; TYPE_2__ ops; } ;
struct e1000_hw {TYPE_3__ mac; } ;
struct igb_adapter {int flags; scalar_t__ vfs_allocated_count; TYPE_1__* netdev; struct e1000_hw hw; } ;
struct TYPE_4__ {int features; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct e1000_hw*,scalar_t__,unsigned int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct igb_adapter *VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_5->hw;
 u32 VAR_7, VAR_8;

 switch (VAR_6->mac.type) {
 case 131:
 case 130:
 case 129:

  if (VAR_5->netdev->features & VAR_4)
   break;

 case 133:
 case 132:
 case 128:

  if (VAR_5->vfs_allocated_count)
   break;

 default:
  return 1;
 }


 if (VAR_5->flags & VAR_3)
  return 0;

 if (!VAR_5->vfs_allocated_count)
  goto set_vfta;


 VAR_8 = VAR_5->vfs_allocated_count + VAR_2;

 for (VAR_7 = VAR_1; --VAR_7;) {
  u32 VAR_9 = FUNC_2(FUNC_1(VAR_7));

  VAR_9 |= FUNC_0(VAR_8);
  FUNC_4(FUNC_1(VAR_7), VAR_9);
 }

set_vfta:

 for (VAR_7 = VAR_0; VAR_7--;)
  VAR_6->mac.ops.write_vfta(VAR_6, VAR_7, ~0U);


 VAR_5->flags |= VAR_3;

 return 0;
}
