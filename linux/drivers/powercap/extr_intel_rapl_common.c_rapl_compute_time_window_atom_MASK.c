
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rapl_package {int time_unit; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static u64 FUNC_1(struct rapl_package *VAR_0, u64 VAR_1,
      bool VAR_2)
{




 if (!VAR_2)
  return (VAR_1) ? VAR_1 *= VAR_0->time_unit : VAR_0->time_unit;

 VAR_1 = FUNC_0(VAR_1, VAR_0->time_unit);

 return VAR_1;
}
