
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_pcibus_device {int remove_event; int remove_lock; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hv_pcibus_device *VAR_0)
{
 if (FUNC_1(&VAR_0->remove_lock))
  FUNC_0(&VAR_0->remove_event);
}
