
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {TYPE_1__* pmu; int * clock; } ;
typedef int clockid_t ;
struct TYPE_2__ {int capabilities; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct perf_event *VAR_7, clockid_t VAR_8)
{
 bool VAR_9 = 0;

 switch (VAR_8) {
 case 131:
  VAR_7->clock = &VAR_4;
  VAR_9 = 1;
  break;

 case 130:
  VAR_7->clock = &VAR_5;
  VAR_9 = 1;
  break;

 case 129:
  VAR_7->clock = &VAR_6;
  break;

 case 132:
  VAR_7->clock = &VAR_2;
  break;

 case 128:
  VAR_7->clock = &VAR_3;
  break;

 default:
  return -VAR_0;
 }

 if (!VAR_9 && !(VAR_7->pmu->capabilities & VAR_1))
  return -VAR_0;

 return 0;
}
