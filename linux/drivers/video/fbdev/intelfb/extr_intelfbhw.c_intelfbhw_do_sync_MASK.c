
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct intelfb_info {TYPE_1__ ring; scalar_t__ ring_space; int accel; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct intelfb_info*) ;
 int FUNC_2 (struct intelfb_info*,scalar_t__) ;

void FUNC_3(struct intelfb_info *VAR_1)
{




 if (!VAR_1->accel)
  return;






 FUNC_1(VAR_1);
 FUNC_2(VAR_1, VAR_1->ring.size - VAR_0);
 VAR_1->ring_space = VAR_1->ring.size - VAR_0;
}
