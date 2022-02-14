
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdw_cdns_pdi {int num; int assigned; } ;
struct sdw_cdns {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sdw_cdns_pdi* FUNC_0 (int ,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct sdw_cdns *VAR_2,
        struct sdw_cdns_pdi **VAR_3,
        u32 VAR_4, u32 VAR_5)
{
 struct sdw_cdns_pdi *VAR_6;
 int VAR_7;

 if (!VAR_4)
  return 0;

 VAR_6 = FUNC_0(VAR_2->dev, VAR_4, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6[VAR_7].num = VAR_7 + VAR_5;
  VAR_6[VAR_7].assigned = 0;
 }

 *VAR_3 = VAR_6;
 return 0;
}
