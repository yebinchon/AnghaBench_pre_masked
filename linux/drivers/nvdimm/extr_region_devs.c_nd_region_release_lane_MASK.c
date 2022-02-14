
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {scalar_t__ num_lanes; int lane; } ;
struct nd_percpu_lane {scalar_t__ count; int lock; } ;


 unsigned int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 struct nd_percpu_lane* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

void FUNC_4(struct nd_region *VAR_1, unsigned int VAR_2)
{
 if (VAR_1->num_lanes < VAR_0) {
  unsigned int VAR_3 = FUNC_0();
  struct nd_percpu_lane *VAR_4, *VAR_5;

  VAR_5 = FUNC_1(VAR_1->lane, VAR_3);
  VAR_4 = FUNC_1(VAR_1->lane, VAR_2);
  if (--VAR_5->count == 0)
   FUNC_3(&VAR_4->lock);
  FUNC_2();
 }
 FUNC_2();
}
