
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_intel {int dummy; } ;
struct sdw_cdns_pdi {scalar_t__ ch_count; int num; } ;


 scalar_t__ FUNC_0 (struct sdw_intel*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct sdw_intel *VAR_0,
       struct sdw_cdns_pdi *VAR_1,
       unsigned int VAR_2,
       unsigned int *VAR_3, bool VAR_4)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_1->ch_count = FUNC_0(VAR_0, VAR_1->num, VAR_4);
  VAR_6 += VAR_1->ch_count;
  VAR_1++;
 }

 *VAR_3 = VAR_6;
 return 0;
}
