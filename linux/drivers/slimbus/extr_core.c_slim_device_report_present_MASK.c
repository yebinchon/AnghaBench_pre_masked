
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct slim_eaddr {int dummy; } ;
struct slim_device {int laddr; scalar_t__ is_laddr_valid; } ;
struct TYPE_2__ {scalar_t__ clk_state; } ;
struct slim_controller {int dev; TYPE_1__ sched; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct slim_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,scalar_t__,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct slim_device*,int) ;
 struct slim_device* FUNC_6 (struct slim_controller*,struct slim_eaddr*) ;

int FUNC_7(struct slim_controller *VAR_2,
          struct slim_eaddr *VAR_3, u8 *VAR_4)
{
 struct slim_device *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2->dev);

 if (VAR_2->sched.clk_state != VAR_1) {
  FUNC_1(VAR_2->dev, "slim ctrl not active,state:%d, ret:%d\n",
        VAR_2->sched.clk_state, VAR_6);
  goto slimbus_not_active;
 }

 VAR_5 = FUNC_6(VAR_2, VAR_3);
 if (FUNC_0(VAR_5))
  return -VAR_0;

 if (VAR_5->is_laddr_valid) {
  *VAR_4 = VAR_5->laddr;
  return 0;
 }

 VAR_6 = FUNC_5(VAR_5, 1);

slimbus_not_active:
 FUNC_3(VAR_2->dev);
 FUNC_4(VAR_2->dev);
 return VAR_6;
}
