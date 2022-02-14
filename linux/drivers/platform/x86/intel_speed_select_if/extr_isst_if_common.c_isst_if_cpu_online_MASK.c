
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int* bus_info; int punit_cpu_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_3)
{
 u64 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, &VAR_4);
 if (VAR_5) {

  VAR_2[VAR_3].bus_info[0] = -1;
  VAR_2[VAR_3].bus_info[1] = -1;
 } else {
  VAR_2[VAR_3].bus_info[0] = VAR_4 & 0xff;
  VAR_2[VAR_3].bus_info[1] = (VAR_4 >> 8) & 0xff;
 }

 VAR_5 = FUNC_1(VAR_1, &VAR_4);
 if (VAR_5) {
  VAR_2[VAR_3].punit_cpu_id = -1;
  return VAR_5;
 }
 VAR_2[VAR_3].punit_cpu_id = VAR_4;

 FUNC_0(VAR_3);

 return 0;
}
