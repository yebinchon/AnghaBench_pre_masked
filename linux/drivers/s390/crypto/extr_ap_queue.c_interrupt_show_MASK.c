
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ap_queue {scalar_t__ state; scalar_t__ interrupt; int lock; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ap_queue* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
         struct device_attribute *VAR_4, char *VAR_5)
{
 struct ap_queue *VAR_6 = FUNC_3(VAR_3);
 int VAR_7 = 0;

 FUNC_1(&VAR_6->lock);
 if (VAR_6->state == VAR_1)
  VAR_7 = FUNC_0(VAR_5, VAR_2, "Enable Interrupt pending.\n");
 else if (VAR_6->interrupt == VAR_0)
  VAR_7 = FUNC_0(VAR_5, VAR_2, "Interrupts enabled.\n");
 else
  VAR_7 = FUNC_0(VAR_5, VAR_2, "Interrupts disabled.\n");
 FUNC_2(&VAR_6->lock);
 return VAR_7;
}
