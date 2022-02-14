
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ size; } ;
struct intelfb_info {scalar_t__ ring_tail; scalar_t__ ring_head; TYPE_1__ ring; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct intelfb_info *VAR_1)
{
 u32 VAR_2;

 if (VAR_1->ring_tail >= VAR_1->ring_head)
  VAR_2 = VAR_1->ring.size -
   (VAR_1->ring_tail - VAR_1->ring_head);
 else
  VAR_2 = VAR_1->ring_head - VAR_1->ring_tail;

 if (VAR_2 > VAR_0)
  VAR_2 -= VAR_0;
 else
  VAR_2 = 0;

 return VAR_2;
}
