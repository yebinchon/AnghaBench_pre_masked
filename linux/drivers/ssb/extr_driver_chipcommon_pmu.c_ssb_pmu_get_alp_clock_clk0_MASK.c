
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssb_chipcommon {int dummy; } ;
struct pmu0_plltab_entry {int freq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ssb_chipcommon*,int ) ;
 struct pmu0_plltab_entry* FUNC_2 (int) ;

__attribute__((used)) static u32 FUNC_3(struct ssb_chipcommon *VAR_3)
{
 u32 VAR_4;
 const struct pmu0_plltab_entry *VAR_5 = ((void*)0);

 VAR_4 = (FUNC_1(VAR_3, VAR_0) &
         VAR_1) >> VAR_2;
 VAR_5 = FUNC_2(VAR_4);
 FUNC_0(!VAR_5);
 return VAR_5->freq * 1000;
}
