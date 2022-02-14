
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ requested_mode; scalar_t__ current_mode; int pause_time; int refresh_time; } ;
struct TYPE_6__ {scalar_t__ (* check_reset_block ) (struct e1000_hw*) ;} ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ ops; } ;
struct TYPE_7__ {scalar_t__ (* setup_physical_interface ) (struct e1000_hw*) ;} ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ ops; } ;
struct e1000_hw {TYPE_5__ fc; TYPE_4__ phy; TYPE_3__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_11)
{
 s32 VAR_12;

 if (VAR_11->phy.ops.check_reset_block(VAR_11))
  return 0;





 if (VAR_11->fc.requested_mode == VAR_3) {

  if (VAR_11->mac.type == VAR_6)
   VAR_11->fc.requested_mode = VAR_5;
  else
   VAR_11->fc.requested_mode = VAR_4;
 }




 VAR_11->fc.current_mode = VAR_11->fc.requested_mode;

 FUNC_3("After fix-ups FlowControl is now = %x\n", VAR_11->fc.current_mode);


 VAR_12 = VAR_11->mac.ops.setup_physical_interface(VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_4(VAR_2, VAR_11->fc.pause_time);
 if ((VAR_11->phy.type == VAR_8) ||
     (VAR_11->phy.type == VAR_9) ||
     (VAR_11->phy.type == VAR_10) ||
     (VAR_11->phy.type == VAR_7)) {
  FUNC_4(VAR_1, VAR_11->fc.refresh_time);

  VAR_12 = FUNC_2(VAR_11, FUNC_0(VAR_0, 27),
       VAR_11->fc.pause_time);
  if (VAR_12)
   return VAR_12;
 }

 return FUNC_1(VAR_11);
}
