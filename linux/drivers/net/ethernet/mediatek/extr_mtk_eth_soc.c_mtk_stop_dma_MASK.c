
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_eth {int page_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mtk_eth*,int) ;
 int FUNC_2 (struct mtk_eth*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mtk_eth *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 int VAR_8;


 FUNC_3(&VAR_5->page_lock);
 VAR_7 = FUNC_1(VAR_5, VAR_6);
 FUNC_2(VAR_5, VAR_7 & ~(VAR_4 | VAR_1 | VAR_3),
  VAR_6);
 FUNC_4(&VAR_5->page_lock);


 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
  VAR_7 = FUNC_1(VAR_5, VAR_6);
  if (VAR_7 & (VAR_2 | VAR_0)) {
   FUNC_0(20);
   continue;
  }
  break;
 }
}
