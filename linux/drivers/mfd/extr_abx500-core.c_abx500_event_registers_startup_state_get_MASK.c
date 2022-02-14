
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int parent; } ;
struct abx500_ops {int (* event_registers_startup_state_get ) (struct device*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct abx500_ops**) ;
 int FUNC_1 (struct device*,int *) ;

int FUNC_2(struct device *VAR_1, u8 *VAR_2)
{
 struct abx500_ops *VAR_3;

 FUNC_0(VAR_1->parent, &VAR_3);
 if (VAR_3 && VAR_3->event_registers_startup_state_get)
  return VAR_3->event_registers_startup_state_get(VAR_1, VAR_2);
 else
  return -VAR_0;
}
