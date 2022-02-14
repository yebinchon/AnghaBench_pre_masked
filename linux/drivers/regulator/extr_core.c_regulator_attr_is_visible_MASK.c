
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_23__ ;
typedef struct TYPE_37__ TYPE_22__ ;
typedef struct TYPE_36__ TYPE_21__ ;
typedef struct TYPE_35__ TYPE_20__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_19__ ;
typedef struct TYPE_32__ TYPE_18__ ;
typedef struct TYPE_31__ TYPE_17__ ;
typedef struct TYPE_30__ TYPE_16__ ;
typedef struct TYPE_29__ TYPE_15__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int umode_t ;
struct regulator_ops {scalar_t__ (* get_voltage ) (struct regulator_dev*) ;scalar_t__ (* get_voltage_sel ) (struct regulator_dev*) ;scalar_t__ (* list_voltage ) (struct regulator_dev*,int ) ;scalar_t__ set_suspend_mode; scalar_t__ set_suspend_voltage; scalar_t__ set_current_limit; scalar_t__ set_voltage_sel; scalar_t__ set_voltage; scalar_t__ get_bypass; scalar_t__ get_status; scalar_t__ is_enabled; scalar_t__ get_mode; scalar_t__ get_current_limit; } ;
struct regulator_dev {scalar_t__ ena_pin; TYPE_1__* desc; } ;
struct kobject {int dummy; } ;
struct device {int dummy; } ;
struct attribute {int mode; } ;
struct TYPE_46__ {struct attribute attr; } ;
struct TYPE_45__ {struct attribute attr; } ;
struct TYPE_44__ {struct attribute attr; } ;
struct TYPE_43__ {struct attribute attr; } ;
struct TYPE_42__ {struct attribute attr; } ;
struct TYPE_41__ {struct attribute attr; } ;
struct TYPE_40__ {struct attribute attr; } ;
struct TYPE_39__ {struct attribute attr; } ;
struct TYPE_38__ {struct attribute attr; } ;
struct TYPE_37__ {struct attribute attr; } ;
struct TYPE_36__ {struct attribute attr; } ;
struct TYPE_35__ {struct attribute attr; } ;
struct TYPE_34__ {int n_voltages; scalar_t__ fixed_uV; struct regulator_ops* ops; } ;
struct TYPE_33__ {struct attribute attr; } ;
struct TYPE_32__ {struct attribute attr; } ;
struct TYPE_31__ {struct attribute attr; } ;
struct TYPE_30__ {struct attribute attr; } ;
struct TYPE_29__ {struct attribute attr; } ;
struct TYPE_28__ {struct attribute attr; } ;
struct TYPE_27__ {struct attribute attr; } ;
struct TYPE_26__ {struct attribute attr; } ;
struct TYPE_25__ {struct attribute attr; } ;
struct TYPE_24__ {struct attribute attr; } ;


 TYPE_23__ VAR_0 ;
 TYPE_22__ VAR_1 ;
 TYPE_21__ VAR_2 ;
 TYPE_20__ VAR_3 ;
 TYPE_19__ VAR_4 ;
 TYPE_18__ VAR_5 ;
 TYPE_17__ VAR_6 ;
 TYPE_16__ VAR_7 ;
 TYPE_15__ VAR_8 ;
 TYPE_14__ VAR_9 ;
 TYPE_13__ VAR_10 ;
 TYPE_12__ VAR_11 ;
 TYPE_11__ VAR_12 ;
 TYPE_10__ VAR_13 ;
 TYPE_9__ VAR_14 ;
 TYPE_8__ VAR_15 ;
 TYPE_7__ VAR_16 ;
 TYPE_6__ VAR_17 ;
 TYPE_5__ VAR_18 ;
 TYPE_4__ VAR_19 ;
 TYPE_3__ VAR_20 ;
 TYPE_2__ VAR_21 ;
 struct regulator_dev* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct kobject*) ;
 scalar_t__ FUNC_2 (struct regulator_dev*) ;
 scalar_t__ FUNC_3 (struct regulator_dev*) ;
 scalar_t__ FUNC_4 (struct regulator_dev*,int ) ;

__attribute__((used)) static umode_t FUNC_5(struct kobject *VAR_22,
      struct attribute *VAR_23, int VAR_24)
{
 struct device *VAR_25 = FUNC_1(VAR_22);
 struct regulator_dev *VAR_26 = FUNC_0(VAR_25);
 const struct regulator_ops *VAR_27 = VAR_26->desc->ops;
 umode_t VAR_28 = VAR_23->mode;


 if (VAR_23 == &VAR_7.attr ||
     VAR_23 == &VAR_8.attr ||
     VAR_23 == &VAR_21.attr)
  return VAR_28;


 if (VAR_23 == &VAR_4.attr) {
  if ((VAR_27->get_voltage && VAR_27->get_voltage(VAR_26) >= 0) ||
      (VAR_27->get_voltage_sel && VAR_27->get_voltage_sel(VAR_26) >= 0) ||
      (VAR_27->list_voltage && VAR_27->list_voltage(VAR_26, 0) >= 0) ||
      (VAR_26->desc->fixed_uV && VAR_26->desc->n_voltages == 1))
   return VAR_28;
  return 0;
 }

 if (VAR_23 == &VAR_3.attr)
  return VAR_27->get_current_limit ? VAR_28 : 0;

 if (VAR_23 == &VAR_9.attr)
  return VAR_27->get_mode ? VAR_28 : 0;

 if (VAR_23 == &VAR_10.attr)
  return (VAR_26->ena_pin || VAR_27->is_enabled) ? VAR_28 : 0;

 if (VAR_23 == &VAR_11.attr)
  return VAR_27->get_status ? VAR_28 : 0;

 if (VAR_23 == &VAR_0.attr)
  return VAR_27->get_bypass ? VAR_28 : 0;


 if (VAR_23 == &VAR_6.attr ||
     VAR_23 == &VAR_2.attr)
  return (VAR_27->set_voltage || VAR_27->set_voltage_sel) ? VAR_28 : 0;

 if (VAR_23 == &VAR_5.attr ||
     VAR_23 == &VAR_1.attr)
  return VAR_27->set_current_limit ? VAR_28 : 0;

 if (VAR_23 == &VAR_20.attr ||
     VAR_23 == &VAR_17.attr ||
     VAR_23 == &VAR_14.attr)
  return VAR_28;

 if (VAR_23 == &VAR_18.attr ||
     VAR_23 == &VAR_15.attr ||
     VAR_23 == &VAR_12.attr)
  return VAR_27->set_suspend_voltage ? VAR_28 : 0;

 if (VAR_23 == &VAR_19.attr ||
     VAR_23 == &VAR_16.attr ||
     VAR_23 == &VAR_13.attr)
  return VAR_27->set_suspend_mode ? VAR_28 : 0;

 return VAR_28;
}
