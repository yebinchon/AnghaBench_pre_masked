
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_eth {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtk_eth*,int ) ;
 int FUNC_1 (struct mtk_eth*) ;
 int FUNC_2 (struct mtk_eth*,int,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct mtk_eth *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3, VAR_2);

 if (FUNC_3(VAR_4 & (VAR_0 | VAR_1))) {
  FUNC_1(VAR_3);
  FUNC_2(VAR_3, (VAR_0 | VAR_1),
   VAR_2);
 }
}
