
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ requested_mode; scalar_t__ current_mode; int pause_time; } ;
struct TYPE_4__ {scalar_t__ (* setup_physical_interface ) (struct igc_hw*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct igc_hw {TYPE_3__ fc; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct igc_hw*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (struct igc_hw*) ;
 scalar_t__ FUNC_3 (struct igc_hw*) ;
 int FUNC_4 (int ,int ) ;

s32 FUNC_5(struct igc_hw *VAR_9)
{
 s32 VAR_10 = 0;




 if (FUNC_1(VAR_9))
  goto out;




 if (VAR_9->fc.requested_mode == VAR_7)
  VAR_9->fc.requested_mode = VAR_8;





 VAR_9->fc.current_mode = VAR_9->fc.requested_mode;

 FUNC_0("After fix-ups FlowControl is now = %x\n", VAR_9->fc.current_mode);


 VAR_10 = VAR_9->mac.ops.setup_physical_interface(VAR_9);
 if (VAR_10)
  goto out;






 FUNC_0("Initializing the Flow Control address, type and timer regs\n");
 FUNC_4(VAR_5, VAR_2);
 FUNC_4(VAR_3, VAR_0);
 FUNC_4(VAR_4, VAR_1);

 FUNC_4(VAR_6, VAR_9->fc.pause_time);

 VAR_10 = FUNC_2(VAR_9);

out:
 return VAR_10;
}
