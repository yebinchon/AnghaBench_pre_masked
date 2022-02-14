
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlgmac_pdata {int * rss_table; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct xlgmac_pdata*) ;

__attribute__((used)) static int FUNC_3(struct xlgmac_pdata *VAR_2,
           const u32 *VAR_3)
{
 unsigned int VAR_4;
 u32 VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->rss_table); VAR_4++) {
  VAR_5 = VAR_3[VAR_4];
  VAR_2->rss_table[VAR_4] = FUNC_1(
      VAR_2->rss_table[VAR_4],
      VAR_1,
      VAR_0,
      VAR_5);
 }

 return FUNC_2(VAR_2);
}
