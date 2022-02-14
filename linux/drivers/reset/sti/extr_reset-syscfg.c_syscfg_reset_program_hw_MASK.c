
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct syscfg_reset_controller {struct syscfg_reset_channel* channels; scalar_t__ active_low; } ;
struct syscfg_reset_channel {scalar_t__ ack; int reset; } ;
struct reset_controller_dev {unsigned long nr_resets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 struct syscfg_reset_controller* FUNC_5 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_6(struct reset_controller_dev *VAR_3,
       unsigned long VAR_4, int VAR_5)
{
 struct syscfg_reset_controller *VAR_6 = FUNC_5(VAR_3);
 const struct syscfg_reset_channel *VAR_7;
 u32 VAR_8 = VAR_6->active_low ? !VAR_5 : !!VAR_5;
 int VAR_9;

 if (VAR_4 >= VAR_3->nr_resets)
  return -VAR_0;

 VAR_7 = &VAR_6->channels[VAR_4];

 VAR_9 = FUNC_3(VAR_7->reset, VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_7->ack) {
  unsigned long VAR_10 = VAR_2 + FUNC_1(1000);
  u32 VAR_11;

  while (1) {
   VAR_9 = FUNC_2(VAR_7->ack, &VAR_11);
   if (VAR_9)
    return VAR_9;

   if (VAR_11 == VAR_8)
    break;

   if (FUNC_4(VAR_2, VAR_10))
    return -VAR_1;

   FUNC_0();
  }
 }

 return 0;
}
