
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct regulator_ops {int (* set_input_current_limit ) (struct regulator_dev*,scalar_t__) ;int (* set_mode ) (struct regulator_dev*,scalar_t__) ;int (* set_ramp_delay ) (struct regulator_dev*,scalar_t__) ;int (* set_pull_down ) (struct regulator_dev*) ;int (* set_soft_start ) (struct regulator_dev*) ;int (* set_over_current_protection ) (struct regulator_dev*) ;int (* set_active_discharge ) (struct regulator_dev*,int) ;} ;
struct regulator_dev {int use_count; int * supply; TYPE_2__* constraints; TYPE_1__* desc; } ;
struct regulation_constraints {int dummy; } ;
struct TYPE_7__ {scalar_t__ active_discharge; scalar_t__ boot_on; scalar_t__ always_on; scalar_t__ over_current_protection; scalar_t__ soft_start; scalar_t__ pull_down; scalar_t__ ramp_delay; scalar_t__ ramp_disable; scalar_t__ system_load; scalar_t__ initial_mode; scalar_t__ initial_state; scalar_t__ ilim_uA; } ;
struct TYPE_6__ {struct regulator_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct regulator_dev*) ;
 TYPE_2__* FUNC_3 (struct regulation_constraints const*,int,int ) ;
 TYPE_2__* FUNC_4 (int,int ) ;
 int FUNC_5 (struct regulator_dev*,TYPE_2__*) ;
 int FUNC_6 (struct regulator_dev*,TYPE_2__*) ;
 int FUNC_7 (struct regulator_dev*) ;
 int FUNC_8 (struct regulator_dev*,char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct regulator_dev*,scalar_t__) ;
 int FUNC_11 (struct regulator_dev*,scalar_t__) ;
 int FUNC_12 (struct regulator_dev*,scalar_t__) ;
 int FUNC_13 (struct regulator_dev*) ;
 int FUNC_14 (struct regulator_dev*) ;
 int FUNC_15 (struct regulator_dev*) ;
 int FUNC_16 (struct regulator_dev*,int) ;
 int FUNC_17 (struct regulator_dev*,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct regulator_dev *VAR_4,
 const struct regulation_constraints *VAR_5)
{
 int VAR_6 = 0;
 const struct regulator_ops *VAR_7 = VAR_4->desc->ops;

 if (VAR_5)
  VAR_4->constraints = FUNC_3(VAR_5, sizeof(*VAR_5),
         VAR_2);
 else
  VAR_4->constraints = FUNC_4(sizeof(*VAR_5),
         VAR_2);
 if (!VAR_4->constraints)
  return -VAR_1;

 VAR_6 = FUNC_6(VAR_4, VAR_4->constraints);
 if (VAR_6 != 0)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_4, VAR_4->constraints);
 if (VAR_6 != 0)
  return VAR_6;

 if (VAR_4->constraints->ilim_uA && VAR_7->set_input_current_limit) {
  VAR_6 = VAR_7->set_input_current_limit(VAR_4,
         VAR_4->constraints->ilim_uA);
  if (VAR_6 < 0) {
   FUNC_8(VAR_4, "failed to set input limit\n");
   return VAR_6;
  }
 }


 if (VAR_4->constraints->initial_state) {
  VAR_6 = FUNC_17(VAR_4, VAR_4->constraints->initial_state);
  if (VAR_6 < 0) {
   FUNC_8(VAR_4, "failed to set suspend state\n");
   return VAR_6;
  }
 }

 if (VAR_4->constraints->initial_mode) {
  if (!VAR_7->set_mode) {
   FUNC_8(VAR_4, "no set_mode operation\n");
   return -VAR_0;
  }

  VAR_6 = VAR_7->set_mode(VAR_4, VAR_4->constraints->initial_mode);
  if (VAR_6 < 0) {
   FUNC_8(VAR_4, "failed to set initial mode: %d\n", VAR_6);
   return VAR_6;
  }
 } else if (VAR_4->constraints->system_load) {




  FUNC_2(VAR_4);
 }

 if ((VAR_4->constraints->ramp_delay || VAR_4->constraints->ramp_disable)
  && VAR_7->set_ramp_delay) {
  VAR_6 = VAR_7->set_ramp_delay(VAR_4, VAR_4->constraints->ramp_delay);
  if (VAR_6 < 0) {
   FUNC_8(VAR_4, "failed to set ramp_delay\n");
   return VAR_6;
  }
 }

 if (VAR_4->constraints->pull_down && VAR_7->set_pull_down) {
  VAR_6 = VAR_7->set_pull_down(VAR_4);
  if (VAR_6 < 0) {
   FUNC_8(VAR_4, "failed to set pull down\n");
   return VAR_6;
  }
 }

 if (VAR_4->constraints->soft_start && VAR_7->set_soft_start) {
  VAR_6 = VAR_7->set_soft_start(VAR_4);
  if (VAR_6 < 0) {
   FUNC_8(VAR_4, "failed to set soft start\n");
   return VAR_6;
  }
 }

 if (VAR_4->constraints->over_current_protection
  && VAR_7->set_over_current_protection) {
  VAR_6 = VAR_7->set_over_current_protection(VAR_4);
  if (VAR_6 < 0) {
   FUNC_8(VAR_4, "failed to set over current protection\n");
   return VAR_6;
  }
 }

 if (VAR_4->constraints->active_discharge && VAR_7->set_active_discharge) {
  bool VAR_8 = (VAR_4->constraints->active_discharge ==
         VAR_3) ? 1 : 0;

  VAR_6 = VAR_7->set_active_discharge(VAR_4, VAR_8);
  if (VAR_6 < 0) {
   FUNC_8(VAR_4, "failed to set active discharge\n");
   return VAR_6;
  }
 }




 if (VAR_4->constraints->always_on || VAR_4->constraints->boot_on) {
  if (VAR_4->supply) {
   VAR_6 = FUNC_9(VAR_4->supply);
   if (VAR_6 < 0) {
    FUNC_1(VAR_4->supply);
    VAR_4->supply = ((void*)0);
    return VAR_6;
   }
  }

  VAR_6 = FUNC_0(VAR_4);
  if (VAR_6 < 0 && VAR_6 != -VAR_0) {
   FUNC_8(VAR_4, "failed to enable\n");
   return VAR_6;
  }
  VAR_4->use_count++;
 }

 FUNC_7(VAR_4);
 return 0;
}
