
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int suspend_state_t ;
struct regulator_state {scalar_t__ enabled; scalar_t__ uV; scalar_t__ mode; } ;
struct regulator_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_suspend_voltage ) (struct regulator_dev*,scalar_t__) ;int (* set_suspend_mode ) (struct regulator_dev*,scalar_t__) ;int (* set_suspend_enable ) (struct regulator_dev*) ;int (* set_suspend_disable ) (struct regulator_dev*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct regulator_dev*,char*) ;
 int FUNC_1 (struct regulator_dev*,char*) ;
 struct regulator_state* FUNC_2 (struct regulator_dev*,int ) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (struct regulator_dev*,scalar_t__) ;
 int FUNC_6 (struct regulator_dev*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct regulator_dev *VAR_2,
        suspend_state_t VAR_3)
{
 int VAR_4 = 0;
 struct regulator_state *VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5 == ((void*)0))
  return 0;





 if (VAR_5->enabled != VAR_1 &&
     VAR_5->enabled != VAR_0) {
  if (VAR_2->desc->ops->set_suspend_voltage ||
      VAR_2->desc->ops->set_suspend_mode)
   FUNC_1(VAR_2, "No configuration\n");
  return 0;
 }

 if (VAR_5->enabled == VAR_1 &&
  VAR_2->desc->ops->set_suspend_enable)
  VAR_4 = VAR_2->desc->ops->set_suspend_enable(VAR_2);
 else if (VAR_5->enabled == VAR_0 &&
  VAR_2->desc->ops->set_suspend_disable)
  VAR_4 = VAR_2->desc->ops->set_suspend_disable(VAR_2);
 else
  VAR_4 = 0;

 if (VAR_4 < 0) {
  FUNC_0(VAR_2, "failed to enabled/disable\n");
  return VAR_4;
 }

 if (VAR_2->desc->ops->set_suspend_voltage && VAR_5->uV > 0) {
  VAR_4 = VAR_2->desc->ops->set_suspend_voltage(VAR_2, VAR_5->uV);
  if (VAR_4 < 0) {
   FUNC_0(VAR_2, "failed to set voltage\n");
   return VAR_4;
  }
 }

 if (VAR_2->desc->ops->set_suspend_mode && VAR_5->mode > 0) {
  VAR_4 = VAR_2->desc->ops->set_suspend_mode(VAR_2, VAR_5->mode);
  if (VAR_4 < 0) {
   FUNC_0(VAR_2, "failed to set mode\n");
   return VAR_4;
  }
 }

 return VAR_4;
}
