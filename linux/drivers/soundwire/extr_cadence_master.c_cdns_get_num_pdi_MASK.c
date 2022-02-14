
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdw_cdns_pdi {scalar_t__ ch_count; scalar_t__ assigned; } ;
struct sdw_cdns {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct sdw_cdns *VAR_0,
       struct sdw_cdns_pdi *VAR_1,
       unsigned int VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_1[VAR_4].assigned)
   continue;

  if (VAR_1[VAR_4].ch_count < VAR_3)
   VAR_3 -= VAR_1[VAR_4].ch_count;
  else
   VAR_3 = 0;

  VAR_5++;

  if (!VAR_3)
   break;
 }

 if (VAR_3)
  return 0;

 return VAR_5;
}
