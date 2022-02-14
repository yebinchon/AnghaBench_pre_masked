
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ivtv {TYPE_1__* api_cache; } ;
struct TYPE_2__ {scalar_t__ last_jiffies; } ;



void FUNC_0(struct ivtv *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < 256; VAR_1++)
  VAR_0->api_cache[VAR_1].last_jiffies = 0;
}
