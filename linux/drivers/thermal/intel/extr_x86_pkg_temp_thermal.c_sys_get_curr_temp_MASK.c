
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zone_device {int tj_max; int cpu; } ;
struct thermal_zone_device {struct zone_device* devdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_2, int *VAR_3)
{
 struct zone_device *VAR_4 = VAR_2->devdata;
 u32 VAR_5, VAR_6;

 FUNC_1(VAR_4->cpu, VAR_1,
   &VAR_5, &VAR_6);
 if (VAR_5 & 0x80000000) {
  *VAR_3 = VAR_4->tj_max - ((VAR_5 >> 16) & 0x7f) * 1000;
  FUNC_0("sys_get_curr_temp %d\n", *VAR_3);
  return 0;
 }
 return -VAR_0;
}
