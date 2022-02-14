
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_eth {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mtk_eth*,int ) ;
 int FUNC_3 (struct mtk_eth*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct mtk_eth *VAR_4)
{
 int VAR_5;
 u32 VAR_6;


 FUNC_3(VAR_4, VAR_1, VAR_3);


 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
  VAR_6 = FUNC_2(VAR_4, VAR_3);
  if (VAR_6 & VAR_0) {
   FUNC_1(20);
   continue;
  }
  break;
 }


 for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++)
  FUNC_3(VAR_4, 0, FUNC_0(VAR_5));


 FUNC_3(VAR_4, 0, VAR_3);
}
