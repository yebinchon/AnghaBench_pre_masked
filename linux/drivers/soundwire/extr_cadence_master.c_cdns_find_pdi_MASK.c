
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_cdns_pdi {int assigned; } ;
struct sdw_cdns {int dummy; } ;



__attribute__((used)) static struct sdw_cdns_pdi *FUNC_0(struct sdw_cdns *VAR_0,
       unsigned int VAR_1,
       struct sdw_cdns_pdi *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2[VAR_3].assigned)
   continue;
  VAR_2[VAR_3].assigned = 1;
  return &VAR_2[VAR_3];
 }

 return ((void*)0);
}
