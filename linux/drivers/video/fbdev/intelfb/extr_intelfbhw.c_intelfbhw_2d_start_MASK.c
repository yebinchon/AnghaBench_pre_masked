
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int physical; int size; } ;
struct intelfb_info {int ring_active; TYPE_1__ ring; int accel; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct intelfb_info*) ;

void FUNC_3(struct intelfb_info *VAR_9)
{





 if (!VAR_9->accel)
  return;


 FUNC_1(VAR_2, 0);
 FUNC_1(VAR_4, 0);
 FUNC_1(VAR_1, 0);

 FUNC_1(VAR_3, VAR_9->ring.physical & VAR_8);
 FUNC_1(VAR_2,
  ((VAR_9->ring.size - VAR_0) & VAR_6) |
  VAR_7 | VAR_5);
 FUNC_2(VAR_9);
 VAR_9->ring_active = 1;
}
