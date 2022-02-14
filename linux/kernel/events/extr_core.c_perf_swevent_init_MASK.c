
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int config; scalar_t__ type; } ;
struct perf_event {int destroy; int parent; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 int * VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_6)
{
 u64 VAR_7 = VAR_6->attr.config;

 if (VAR_6->attr.type != VAR_3)
  return -VAR_0;




 if (FUNC_0(VAR_6))
  return -VAR_1;

 switch (VAR_7) {
 case 129:
 case 128:
  return -VAR_0;

 default:
  break;
 }

 if (VAR_7 >= VAR_2)
  return -VAR_0;

 if (!VAR_6->parent) {
  int VAR_8;

  VAR_8 = FUNC_2();
  if (VAR_8)
   return VAR_8;

  FUNC_1(&VAR_4[VAR_7]);
  VAR_6->destroy = VAR_5;
 }

 return 0;
}
