
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rc_dev {int dummy; } ;
struct TYPE_2__ {int have_command; int ir_key; int rc5_device; scalar_t__ full_rc5; struct rc_dev* dev; } ;
struct budget_ci {TYPE_1__ ir; int budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct rc_dev*,int ,int,int) ;
 int FUNC_3 (int *,int ,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_6)
{
 struct budget_ci *VAR_7 = (struct budget_ci *) VAR_6;
 struct rc_dev *VAR_8 = VAR_7->ir.dev;
 u32 VAR_9 = FUNC_3(&VAR_7->budget, VAR_1, VAR_0, 2, 1, 0) >> 8;
 if (VAR_5)
  FUNC_1("budget_ci: received byte 0x%02x\n", VAR_9);


 VAR_9 = VAR_9 & 0x7f;


 if (VAR_9 & 0x40) {
  VAR_7->ir.have_command = 1;
  VAR_7->ir.ir_key = VAR_9 & 0x3f;
  return;
 }


 if (!VAR_7->ir.have_command)
  return;
 VAR_7->ir.have_command = 0;

 if (VAR_7->ir.rc5_device != VAR_2 &&
     VAR_7->ir.rc5_device != (VAR_9 & 0x1f))
  return;

 if (VAR_7->ir.full_rc5) {
  FUNC_2(VAR_8, VAR_3,
      FUNC_0(VAR_7->ir.rc5_device, VAR_7->ir.ir_key),
      !!(VAR_9 & 0x20));
  return;
 }


 FUNC_2(VAR_8, VAR_4, VAR_7->ir.ir_key,
     !!(VAR_9 & 0x20));
}
