
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intelfb_info {scalar_t__ ring_active; int accel; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (struct intelfb_info*) ;

void FUNC_2(struct intelfb_info *VAR_0)
{





 if (!VAR_0->accel)
  return;

 VAR_0->ring_active = 0;
 FUNC_1(VAR_0);
}
