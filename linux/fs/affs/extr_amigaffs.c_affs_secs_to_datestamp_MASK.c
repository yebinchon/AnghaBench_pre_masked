
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ time64_t ;
struct affs_date {void* ticks; void* mins; void* days; } ;
typedef int s32 ;
struct TYPE_2__ {int tz_minuteswest; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int,int*) ;
 TYPE_1__ VAR_1 ;

void
FUNC_2(time64_t VAR_2, struct affs_date *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 s32 VAR_6;

 VAR_2 -= VAR_1.tz_minuteswest * 60 + VAR_0;
 if (VAR_2 < 0)
  VAR_2 = 0;
 VAR_4 = FUNC_1(VAR_2, 86400, &VAR_6);
 VAR_5 = VAR_6 / 60;
 VAR_6 -= VAR_5 * 60;

 VAR_3->days = FUNC_0(VAR_4);
 VAR_3->mins = FUNC_0(VAR_5);
 VAR_3->ticks = FUNC_0(VAR_6 * 50);
}
