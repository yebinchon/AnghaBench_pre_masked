
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int time64_t ;
struct TYPE_2__ {int parent; } ;
struct rtc_device {scalar_t__ range_min; scalar_t__ range_max; int start_secs; int set_start_time; int offset_secs; TYPE_1__ dev; } ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,int,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rtc_device *VAR_0)
{
 time64_t VAR_1;
 u32 VAR_2;
 int VAR_3;






 if (VAR_0->range_min == VAR_0->range_max)
  return;

 VAR_3 = FUNC_0(VAR_0->dev.parent, "start-year",
           &VAR_2);
 if (!VAR_3) {
  VAR_0->start_secs = FUNC_1(VAR_2, 1, 1, 0, 0, 0);
  VAR_0->set_start_time = 1;
 }





 if (!VAR_0->set_start_time)
  return;

 VAR_1 = VAR_0->range_max - VAR_0->range_min + 1;
 if (VAR_0->start_secs > VAR_0->range_max ||
     VAR_0->start_secs + VAR_1 - 1 < VAR_0->range_min)
  VAR_0->offset_secs = VAR_0->start_secs - VAR_0->range_min;
 else if (VAR_0->start_secs > VAR_0->range_min)
  VAR_0->offset_secs = VAR_1;
 else if (VAR_0->start_secs < VAR_0->range_min)
  VAR_0->offset_secs = -VAR_1;
 else
  VAR_0->offset_secs = 0;
}
