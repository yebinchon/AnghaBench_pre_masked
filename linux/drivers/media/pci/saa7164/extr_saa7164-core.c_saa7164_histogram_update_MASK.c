
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct saa7164_histogram {TYPE_1__* counter1; } ;
struct TYPE_2__ {scalar_t__ val; int update_time; int count; } ;


 int VAR_0 ;

void FUNC_0(struct saa7164_histogram *VAR_1, u32 VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 64; VAR_3++) {
  if (VAR_2 <= VAR_1->counter1[VAR_3].val) {
   VAR_1->counter1[VAR_3].count++;
   VAR_1->counter1[VAR_3].update_time = VAR_0;
   break;
  }
 }
}
