
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ requested_mode; scalar_t__ current_mode; int pause_time; } ;
struct TYPE_6__ {scalar_t__ (* setup_physical_interface ) (struct e1000_hw*) ;} ;
struct TYPE_7__ {TYPE_1__ ops; } ;
struct TYPE_10__ {scalar_t__ (* check_reset_block ) (struct e1000_hw*) ;} ;
struct TYPE_9__ {TYPE_5__ ops; } ;
struct e1000_hw {TYPE_3__ fc; TYPE_2__ mac; TYPE_4__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;

s32 FUNC_6(struct e1000_hw *VAR_8)
{
 s32 VAR_9;




 if (VAR_8->phy.ops.check_reset_block && VAR_8->phy.ops.check_reset_block(VAR_8))
  return 0;




 if (VAR_8->fc.requested_mode == VAR_7) {
  VAR_9 = FUNC_0(VAR_8);
  if (VAR_9)
   return VAR_9;
 }




 VAR_8->fc.current_mode = VAR_8->fc.requested_mode;

 FUNC_2("After fix-ups FlowControl is now = %x\n", VAR_8->fc.current_mode);


 VAR_9 = VAR_8->mac.ops.setup_physical_interface(VAR_8);
 if (VAR_9)
  return VAR_9;






 FUNC_2("Initializing the Flow Control address, type and timer regs\n");
 FUNC_3(VAR_2, VAR_6);
 FUNC_3(VAR_0, VAR_4);
 FUNC_3(VAR_1, VAR_5);

 FUNC_3(VAR_3, VAR_8->fc.pause_time);

 return FUNC_1(VAR_8);
}
