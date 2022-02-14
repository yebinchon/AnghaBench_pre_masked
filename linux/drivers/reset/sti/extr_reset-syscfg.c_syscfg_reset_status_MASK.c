
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct syscfg_reset_controller {scalar_t__ active_low; struct syscfg_reset_channel* channels; } ;
struct syscfg_reset_channel {scalar_t__ reset; scalar_t__ ack; } ;
struct reset_controller_dev {unsigned long nr_resets; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__*) ;
 struct syscfg_reset_controller* FUNC_1 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_2(struct reset_controller_dev *VAR_1,
          unsigned long VAR_2)
{
 struct syscfg_reset_controller *VAR_3 = FUNC_1(VAR_1);
 const struct syscfg_reset_channel *VAR_4;
 u32 VAR_5 = 0;
 int VAR_6;

 if (VAR_2 >= VAR_1->nr_resets)
  return -VAR_0;

 VAR_4 = &VAR_3->channels[VAR_2];
 if (VAR_4->ack)
  VAR_6 = FUNC_0(VAR_4->ack, &VAR_5);
 else
  VAR_6 = FUNC_0(VAR_4->reset, &VAR_5);
 if (VAR_6)
  return VAR_6;

 return VAR_3->active_low ? !VAR_5 : !!VAR_5;
}
