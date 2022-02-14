
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ config; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_4)
{
 if (VAR_4->attr.type != VAR_3)
  return -VAR_0;

 if (VAR_4->attr.config != VAR_2)
  return -VAR_0;




 if (FUNC_0(VAR_4))
  return -VAR_1;

 FUNC_1(VAR_4);

 return 0;
}
