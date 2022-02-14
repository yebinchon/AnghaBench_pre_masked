
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_eth {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct mtk_eth*) ;
 int FUNC_1 (struct mtk_eth*,int ) ;
 int FUNC_2 (struct mtk_eth*,int,int ) ;

__attribute__((used)) static u32 FUNC_3(struct mtk_eth *VAR_6, int VAR_7, int VAR_8)
{
 u32 VAR_9;

 if (FUNC_0(VAR_6))
  return 0xffff;

 FUNC_2(VAR_6, VAR_1 | VAR_5 | VAR_3 |
  (VAR_8 << VAR_4) |
  (VAR_7 << VAR_2),
  VAR_0);

 if (FUNC_0(VAR_6))
  return 0xffff;

 VAR_9 = FUNC_1(VAR_6, VAR_0) & 0xffff;

 return VAR_9;
}
