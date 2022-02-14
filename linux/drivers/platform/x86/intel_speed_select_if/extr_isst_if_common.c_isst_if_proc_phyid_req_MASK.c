
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct isst_if_cpu_map {size_t logical_cpu; int physical_cpu; } ;
struct TYPE_2__ {int punit_cpu_id; } ;


 long VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 () ;

__attribute__((used)) static long FUNC_1(u8 *VAR_3, int *VAR_4, int VAR_5)
{
 struct isst_if_cpu_map *VAR_6;

 VAR_6 = (struct isst_if_cpu_map *)VAR_3;
 if (VAR_6->logical_cpu >= VAR_2 ||
     VAR_6->logical_cpu >= FUNC_0())
  return -VAR_0;

 *VAR_4 = 0;
 VAR_6->physical_cpu = VAR_1[VAR_6->logical_cpu].punit_cpu_id;

 return 0;
}
